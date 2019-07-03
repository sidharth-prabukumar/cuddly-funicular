// StackVsHeap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Stack is an area of memory in the RAM that has a pre-defined memory size. Usually 2MB.
Heap is also pre-defined size of memory but can grow as the application goes on( run time)
*/

#include <iostream>
#include <string>

struct Vector3
{
	float x, y, z;

	Vector3()
		: x(10), y(11), z(12)
	{}
};

int main()
{
	int value = 5;	//static allocation
	int array[5];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;
	Vector3 vector;

	int* hvalue = new int;	//heap allocation
	*hvalue = 5;

	int* harray = new int[5];
	Vector3* hvector = new Vector3;
	harray[0] = 1;
	harray[1] = 2;
	harray[2] = 3;
	harray[3] = 4;
	harray[4] = 5;

	delete hvalue;
	delete[] harray;
	delete hvector;
	// Stack memory is freed as soon as the variable leaves the scope where it was initialized, essentially by doing a stack pop at the
	//end of the scope and so the pointer moves to the beginning of the scope to start allocating new memories

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
