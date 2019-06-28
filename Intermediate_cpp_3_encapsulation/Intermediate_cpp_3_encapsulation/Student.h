#pragma once
#include "Person.h"
class Student :
	public Person
{
public:
	Student();
	~Student();

	int getAge();
	void SayHello();
	void setAge(int);
};