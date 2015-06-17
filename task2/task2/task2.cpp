// task2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Person.h"
#include "Student.h"
#include "University.h"
#include <set>
#include <iostream>
#include <fstream>
/*
const string UNIVERSITIES_FILE_NAME = "univer.txt";
const string STUDENT_FILE_NAME = "students.txt";

set<shared_ptr<CUniversity>> LoadUniversities()
{
	set<shared_ptr<CUniversity>> universities;

	ifstream fin(UNIVERSITIES_FILE_NAME);
	string name;
	while (getline(fin, name))
	{
		auto university = make_shared<CUniversity>(name);
		universities.insert(university);
	}

	return universities;
}

set<shared_ptr<CStudent>> LoadStudents(const set<shared_ptr<CUniversity>> &universities)
{
	set<shared_ptr<CStudent>> res;

	ifstream fin(STUDENT_FILE_NAME);
	string name, age, growth, studyYear, weight, male, universityName;
	while (getline(fin, name))
	{
		getline(fin, age);
		getline(fin, growth);
		getline(fin, weight);
		getline(fin, yearOfStudy);
		getline(fin, male);
		getline(fin, universityName);

		shared_ptr<CUniversity> university;
		for (auto &curUniversity : universities)
		{
			if (curUniversity->GetName() == universityName)
			{
				university = curUniversity;
				break;
			}
		}

		int curAge = stoi(age), curHeight = stoi(growth), curWeight = stoi(weight), curYear = stoi(studyYear);
		bool isMale = (male == "Male");

		auto student = make_shared<CStudent>(name, curYear, university, curAge, curHeight, curWeight, isMale);
		university->AddStudent(student);
		res.insert(student);
	}

	return res;
}
*/

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

