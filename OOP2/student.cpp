#include <iostream>
#include <string>
#include <algorithm>
#include "student.h"
#include "course.h"
using namespace std;

Student::Student()
{
	num = 0;
};
Student::~Student() {};
bool Student::read()
{
	if (cin>>num>>name)
	{
		if (name.length() > 8)
			name.resize(8);
		Course aCourse;
		while (aCourse.read())
		{
			course.push_back(aCourse);
		}
		return true;
	}
	return false;
}

string Student::getStudentName()
{
	return name;
}

vector <Course> Student::getAllCourse()
{
	return course;
}

void Student::clear()
{
    course.clear();
}

void Student::printName(int width)
{
	cout.width(width);
	cout<<left<<name;
}

void Student::printNum(int width)
{
	cout.width(width);
	cout<<left<<num;
}

void Student::print(int widthNum, int widthName, vector <Course> &allCourse)
{
	printNum(widthNum);
	printName(widthName);
	sort(course.begin(), course.end());
	vector <Course> ::iterator ci = allCourse.begin(), si = course.begin();
	int scoreSum = 0, courseNum = course.end() - course.begin();
	for ( ; ci != allCourse.end(); ++ci)
	{
		if (*ci == *si)
		{
			si->printCourseScore(8);
			scoreSum += si->getCourseScore();
			++si;
		}
		else
		{
			cout.width(8);
			cout<<' ';
		}
		if (si == course.end())
			break;
	}
	++ci;
	for ( ; ci != allCourse.end(); ++ci)
	{
		cout.width(8);
		cout<<' ';
	}
	cout.width(8);
	cout<<(double)scoreSum / courseNum;
	cout<<endl;
}
