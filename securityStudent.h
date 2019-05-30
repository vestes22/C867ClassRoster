#pragma once
#include <iostream>
#include "student.h"

using namespace std;

class SecurityStudent : public Student
{
public:
	SecurityStudent(string studId, string firstName, string lastName, string email, int age, int courseDays1, int courseDays2, int courseDays3, Degree studDegree);
	SecurityStudent();
	~SecurityStudent();
	void print();
	virtual Degree getDegreeProgram();


private:
	
};
