#include <iostream>
#include <string>
#include "student.h"




using namespace std;

//Print Definition:
void Student::print()
{
}


//Mutator Function Definitions:
void Student::SetStudId(string studId)
{
	this->studId = studId;
	return;
}

void Student::SetFirstName(string firstName)
{
	this->firstName = firstName;
	return;
}

void Student::SetLastName(string lastName)
{
	this->lastName = lastName;
	return;
}

void Student::SetEmail(string email)
{
	this->email = email;
	return;
}

void Student::SetAge(int age)
{
	this->age = age;
	return;
}

void Student::SetCourseDays1(int courseDays1)
{
	this->courseDays1 = courseDays1;
	return;
}

void Student::SetCourseDays2(int courseDays2)
{
	this->courseDays2 = courseDays1;
	return;
}

void Student::SetCourseDays3(int courseDays3)
{
	this->courseDays3 = courseDays3;
	return;
}

void Student::SetDaysInCourse(int courseDays1, int courseDays2, int courseDays3)
{
	daysInCourse[0] = courseDays1;
	daysInCourse[1] = courseDays2;
	daysInCourse[2] = courseDays3;
	return;
}

void Student::SetStudDegree(Degree studDegree)
{
	this->studDegree = studDegree;
	return;
}



//Accessor Function Definitions:
string Student::GetStudId() const
{
	return studId;
}

string Student::GetFirstName() const
{
	return firstName;
}

string Student::GetLastName() const
{
	return lastName;
}

string Student::GetEmail() const
{
	return email;
}

int Student::GetAge() const
{
	return age;
}

int Student::GetCourseDays1() const
{
	return courseDays1;
}

int Student::GetCourseDays2() const
{
	return courseDays2;
}

int Student::GetCourseDays3() const
{
	return courseDays3;
}

int * Student::GetDaysInCourse()
{
	return daysInCourse;
}


Degree Student::getDegreeProgram()
{
	return studDegree;
}

Student::Student()
{

}

Student::Student(string studId, string firstName, string lastName, string email, int age, int courseDays1, int courseDays2, int courseDays3, Degree studDegree)
{
	this->studId = studId;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	this->age = age;
	this->courseDays1 = courseDays1;
	this->courseDays2 = courseDays2;
	this->courseDays3 = courseDays3;
	this->studDegree = studDegree;
}

//Destructor definition:
Student::~Student()
{
}
