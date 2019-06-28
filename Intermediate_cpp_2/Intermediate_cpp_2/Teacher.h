#pragma once
#include "Course.h"
class Teacher
{
	int age;
	std::string first_name;
	std::string last_name;
	std::string address;
	std::string phone;
public:
	Teacher()
	{
		age = 31;
		first_name = "Consuelo";
		last_name = "Cerna";
		address = "blah1";
		phone = "123456";
	}
	void GradeStudent() { std::cout << "Student Graded" << std::endl; }
	void SitInClass() { std::cout << "Sitting in front of class" << std::endl; }
};
