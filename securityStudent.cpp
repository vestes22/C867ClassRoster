#include "securityStudent.h"

using namespace std;


SecurityStudent::SecurityStudent(string studId, string firstName, string lastName, string email, int age, int courseDays1, int courseDays2, int courseDays3, Degree studDegree)
{
	this->studId = studId;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	this->age = age;
	this->courseDays1 = courseDays1;
	this->courseDays2 = courseDays2;
	this->courseDays3 = courseDays3;
	studDegree = SECURITY;
}

Degree SecurityStudent::getDegreeProgram()
{
	return SECURITY;
}

SecurityStudent::SecurityStudent()
{

}
SecurityStudent::~SecurityStudent()
{

}

void SecurityStudent::print()
{
	cout << "Student Id: " << GetStudId() << "\t";
	cout << "First Name: " << GetFirstName() << "\t";
	cout << "Last Name: " << GetLastName() << "\t";
	cout << "Age: " << GetAge() << "\t";
	cout << "Days in Course: {" << GetCourseDays1() << ", " << GetCourseDays2() << ", " << GetCourseDays3() << "}\t"; 
	cout << "Degree Program: SECURITY" << endl;
	cout << endl;
}