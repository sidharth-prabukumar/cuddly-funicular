// Casting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Base
{
public:
	Base()
	{
	}
	virtual ~Base()
	{
	}
};

class Derived : public Base
{
public:
	Derived() {}
	~Derived() {}
};

class AnotherClass : public Base
{
public:
	AnotherClass() {}
	~AnotherClass(){}
};

int main()
{
	int a = 5;
	double value = a;	//Implicit conversion;

	double value1 = 5.25;
	int b1 = value1;	//Implicit conversion
	int b2 = (int)value1;	//Explicit conversion
		//C++ style casting
	double s = static_cast<int>(value) + 5.3;
	//AnotherClass* s1 = static_cast<AnotherClass*>(&value) + 5.3;	// Not happy because of compile time checking
	AnotherClass* s2 = reinterpret_cast<AnotherClass*>(&value);	// No compile time checking

	//Dynamic Cast
	Derived* derived = new Derived();
	Base* base = derived;

	AnotherClass* ac = dynamic_cast<AnotherClass*>(base);

	//Const cast

	int sample = 10;
	sample++;
	std::cout << sample<<"\n";
	int* ptr = &sample;

	int* ptr1 = const_cast<int*>(ptr);

	*ptr1++;
	
    std::cout << "Hello World!\n";
	std::cin.get();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
