#pragma once
#include "Course.h"

class Student
{
	int age;
	std::string first_name;
	std::string last_name;
	std::string address;
	std::string phone;

public:
	Student()
	{
		age = 25;
		first_name = "Sid";
		last_name = "Prabu";
		address = "blah";
		phone = "12345";
	}

	void SitInClass() { std::cout << "Sitting in main theater" << std::endl; }


};
