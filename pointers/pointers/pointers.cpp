// pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define LOG(x) std::cout << x <<std::endl


/*void Increment(int* value)	//Normal C way
{
	(*value)++;
}*/

void Increment(int& value)	//Normal C way
{
	value++;
}


int main()
{
	//Pointers
	int var = 8;
	void* ptr = &var;
	char* buffer = new char[8];
	memset(buffer, 0, sizeof(buffer));

	char** ptr1 = &buffer;

	delete[] buffer;

	//References
	int a = 5;
	int& ref = a;	//ref has to be assigned. cannot do => int& ref;
	int b = 8;
	//ref = 2;

	//ref = b;	//This is same as seting a=b;

	LOG(a);
	Increment(ref);
	LOG(a);
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
