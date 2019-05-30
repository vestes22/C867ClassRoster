#include <sstream>
#include "roster.h"

using namespace std;

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
//Adds students to roster.
void Roster::add
(
	string studId,
	string firstName,
	string lastName,
	string email,
	int age,
	int courseDays1,															
	int courseDays2,
	int courseDays3,
	Degree studDegree
)
{

		if (studDegree == SOFTWARE)
		{
			classRosterArray[classIndex] = new SoftwareStudent(studId, firstName, lastName, email, age, courseDays1, courseDays2, courseDays3, studDegree);
		}

		if (studDegree == NETWORKING)
		{
			classRosterArray[classIndex] = new NetworkStudent(studId, firstName, lastName, email, age, courseDays1, courseDays2, courseDays3, studDegree);
		}

		if (studDegree == SECURITY)
		{
			classRosterArray[classIndex] = new SecurityStudent(studId, firstName, lastName, email, age, courseDays1, courseDays2, courseDays3, studDegree);
		}
		classIndex++;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
//Removes student by ID:
void Roster::remove(string studId)
{
	bool studentFound = false;
	for (int i = 0; i < 5; i++) 
	{
		if (classRosterArray[i] != nullptr && classRosterArray[i]->GetStudId() == studId) 
		{
			cout << "\nStudent with ID " << studId << " removed." << endl;
			classRosterArray[i] = nullptr;
			studentFound = true;
		}
	}

	if (studentFound == false) 
	{
		cout << "\nERROR: Student ID " << studId << " not found." << endl;
	}
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
//Prints all student's information:
void Roster::printAll()
{
	for (int i = 0; i < numStudents; i++)
	{
		if (classRosterArray[i] != nullptr)
		{
			classRosterArray[i]->print();
		}
	}
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
//Prints student's average number of days for 3 courses:
void Roster::printDaysInCourse(string studId)
{
	averageDays = 0;
	sumDays = 0;
	for (int i = 0; i < 3; i++)
	{
		if (classRosterArray[i]->GetStudId() == studId)
			{
				int day1 = classRosterArray[i]->GetCourseDays1();
				int day2 = classRosterArray[i]->GetCourseDays2();
				int day3 = classRosterArray[i]->GetCourseDays3();
				sumDays = day1 + day2 + day3;
				averageDays = sumDays / 3;
				cout << "Student " << studId << " spends an average of " << averageDays << " days in a course." << endl;
			}
	}
	cout << endl;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
//Prints invalid emails in the roster:
void Roster::printInvalidEmails()
{
	cout << "These emails are invalid: " << endl;
	for (int i = 0; i < numStudents; i++)
	{
		string Email = classRosterArray[i]->GetEmail();
		if (Email.find(" ") != std::string::npos)
		{
			cout << "    " << Email << endl;
		}
		
		else if (Email.find(".") == std::string::npos)
		{
			cout << "    " << Email << endl;
		}
		else if (Email.find("@") == std::string::npos)
		{
			cout << "    " << Email << endl;
		};
	}
	cout << endl;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
//Prints student data based on degree:
void Roster::printByDegreeProgram(Degree degree)
{
	for (int i = 0; i < numStudents; i++)
	{
		if (classRosterArray[i]->getDegreeProgram() == degree)
		{
			classRosterArray[i]->print();
		}
	}
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
//Deletes the class roster:
Roster::~Roster()
{
	for (int i = 0; i < numStudents; i++)
	{

		if (classRosterArray[i] != nullptr)
		{
			delete classRosterArray[i];
		}

	}
	return;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{
	cout << "Scripting and Programming Applications - C867" << endl;
	cout << "Programmed in C++" << endl;
	cout << "Student ID: 000977601" << endl;
	cout << "Submitted by Virginia Berner" << endl;
	cout << endl;

	const string studentData[] =
	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Virginia,Berner,vberner@my.wgu.edu,24,20,30,25,SOFTWARE"
	};

	Roster * classRoster = new Roster();
	for (int i = 0; i < numStudents; i++)
	{
		//Parses studentData string into student object variables:
		int wordBreak = studentData[i].find(',');
		int newWord = wordBreak + 1;
		string studId = studentData[i].substr(0, wordBreak);

		wordBreak = studentData[i].find(",", newWord);
		string firstName = studentData[i].substr(newWord, wordBreak - newWord);

		newWord = wordBreak + 1;
		wordBreak = studentData[i].find(",", newWord);
		string lastName = studentData[i].substr(newWord, wordBreak - newWord);

		newWord = wordBreak + 1;
		wordBreak = studentData[i].find(",", newWord);
		string email = studentData[i].substr(newWord, wordBreak - newWord);

		newWord = wordBreak + 1;
		wordBreak = studentData[i].find(",", newWord);
		int age = stoi(studentData[i].substr(newWord, wordBreak - newWord));

		newWord = wordBreak + 1;
		wordBreak = studentData[i].find(",", newWord);
		int courseDays1 = stoi(studentData[i].substr(newWord, wordBreak - newWord));

		newWord = wordBreak + 1;
		wordBreak = studentData[i].find(",", newWord);
		int courseDays2 = (stoi(studentData[i].substr(newWord, wordBreak - newWord)));

		newWord = wordBreak + 1;
		wordBreak = studentData[i].find(",", newWord);
		int courseDays3 = (stoi(studentData[i].substr(newWord, wordBreak - newWord)));

		newWord = wordBreak + 1;
		wordBreak = studentData[i].find(",", newWord);
		string last = studentData[i].substr(newWord);
		Degree studDegree;

		//Converts string degree data to enumerator Degree:
		if (last == "SOFTWARE")
		{
			studDegree = SOFTWARE;
		}

		else if (last == "SECURITY")
		{
			studDegree = SECURITY;
		}

		else if (last == "NETWORK")
		{
			studDegree = NETWORKING;
		}

		classRoster->add(studId, firstName, lastName, email, age, courseDays1, courseDays2, courseDays3, studDegree);
	}

	classRoster->printAll();

	classRoster->printInvalidEmails();

	for (int i = 0; i < numStudents; i++)
	{
		classRoster->printDaysInCourse(classRoster->classRosterArray[i]->GetStudId());
	}

	classRoster->printByDegreeProgram(SOFTWARE);

	classRoster->remove("A3");
	
	classRoster->remove("A3");

	classRoster->~Roster();
}


