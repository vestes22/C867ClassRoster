#include "softwareStudent.h"

using namespace std;

SoftwareStudent::SoftwareStudent(string studId, string firstName, string lastName, string email, int age, int courseDays1, int courseDays2, int courseDays3, Degree studDegree)
{
	this->studId = studId;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	this->age = age;
	this->courseDays1 = courseDays1;
	this->courseDays2 = courseDays2;
	this->courseDays3 = courseDays3;
	studDegree = SOFTWARE;
}

Degree SoftwareStudent::getDegreeProgram()
{
	return SOFTWARE;
}

SoftwareStudent::SoftwareStudent()
{

}

SoftwareStudent::~SoftwareStudent()
{

}

void SoftwareStudent::print()
{
	cout << "Student Id: " << GetStudId() << "\t";
	cout << "First Name: " << GetFirstName() << "\t";
	cout << "Last Name: " << GetLastName() << "\t";
	cout << "Age: " << GetAge() << "\t";
	cout << "Days in Course: {" << GetCourseDays1() << ", " << GetCourseDays2() << ", " << GetCourseDays3() << "}\t"; 
	cout << "Degree Program: SOFTWARE" << endl;
	cout << endl;

}