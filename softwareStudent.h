#pragma once
#include <iostream>
#include "student.h"

using namespace std;

class SoftwareStudent : public Student
{
public:
	SoftwareStudent(string studId, string firstName, string lastName, string email, int age, int courseDays1, int courseDays2, int courseDays3, Degree studDegree);
	SoftwareStudent();
	~SoftwareStudent();
	Degree getDegreeProgram();

	void print();

private:

};
