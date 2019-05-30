#pragma once
#include <iostream>
#include "student.h"

using namespace std;

class NetworkStudent : public Student
{
public:
	NetworkStudent();
	NetworkStudent(string studId, string firstName, string lastName, string email, int age, int courseDays1, int courseDays2, int courseDays3, Degree studDegree);
	~NetworkStudent();
	virtual Degree getDegreeProgram();

	void print();

private:

};

