#pragma once
#include "degree.h"
#include <string>

using namespace std;

class Student
{
public:

//Accessor functions:
	string GetStudId() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmail() const;
	int GetAge() const;
	int * GetDaysInCourse();
	virtual Degree getDegreeProgram();
	int GetCourseDays1() const;
	int GetCourseDays2() const;
	int GetCourseDays3() const;

//Mutator functions:
	void SetStudId(string studId);
	void SetFirstName(string firstName);
	void SetLastName(string lastName);
	void SetEmail(string email);
	void SetAge(int age);
	void SetDaysInCourse(int courseDays1, int courseDays2, int courseDays3);
	void SetStudDegree(Degree studDegree);
	void SetCourseDays1(int courseDays1);
	void SetCourseDays2(int courseDays2);
	void SetCourseDays3(int courseDays3);

//Virtual print for specific student data:
	virtual void print();

//Constructor and Destructor functions:
	Student();
	Student(std::string studId, std::string firstName, std::string lastName, std::string email, int age, int courseDays1, int courseDays2, int courseDays3, Degree studDegree);
	~Student();

protected:
	string studId;
	string firstName;
	string lastName;
	string email;
	int age;
	int daysInCourse[3];
	int courseDays1, courseDays2, courseDays3;
	Degree studDegree;

};