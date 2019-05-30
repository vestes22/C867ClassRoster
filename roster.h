#pragma once

#include <iostream>
#include "softwareStudent.h"
#include "networkStudent.h"
#include "securityStudent.h"

using namespace std;

const int numStudents = 5;
int averageDays;
int sumDays;

class Roster
{
public:
	//Array of pointers to hold student data.
	Student* classRosterArray[numStudents] = { nullptr, nullptr, nullptr, nullptr, nullptr };
	int classIndex = 0;

	// Sets instance variables and updates roster. 
	void add
	(
		string studId,
		string firstName,
		string lastName,
		string email,
		int age,
		int courseDays1,
		int courseDays2,
		int courseDays3,
		Degree degree
	);

	// Removes students by student ID. 
	void remove(string studId);

	// Prints list of student data.
	void printAll();

	// Prints students average number of days in 3 courses.
	void printDaysInCourse(string studId);

	// Prints invalid emails. 
	void printInvalidEmails();


	// Prints student data by degree. 
	void printByDegreeProgram(Degree degree);		

	~Roster();

private:
	
	
};
