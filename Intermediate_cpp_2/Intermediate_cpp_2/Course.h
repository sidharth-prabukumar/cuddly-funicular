#pragma once
#include "Teacher.h"
#include "Student.h"

#include <iostream>
class Course
{
	Student stud[3];
	Teacher teache;
public:
	Student getStudent( int i)
	{
		return stud[i];
	}
	Teacher getTeacher()
	{
		return teache;
	}
	void getCourseName()
	{
		std::cout << "Course Name: Intermediate C++" << std::endl;
	}
};
