#include <iostream>
#include <string>
#include "course.h"
using namespace std;

Course::Course()
{
	score = 0;
};
Course::Course(string courseName, int courseScore)
{
	name = courseName;
	score = courseScore;
}
Course::~Course() {};
bool Course::read()
{
    if (cin.peek() != ios_base::eofbit && cin.peek() != '\n')
    {
        cin>>name>>score;
        if (name.length() > 8)
        	name.resize(8);
        return true;
    }
    return false;
}

string Course::getCourseName()
{
    return name;
}

int Course::getCourseScore()
{
	return score;
}

bool operator == (Course a, Course b)
{
    return a.getCourseName().compare(b.getCourseName()) == 0;
}

bool operator <(Course a, Course b)
{
	return a.getCourseName().compare(b.getCourseName()) < 0;
}

void Course::printCourseName(int width)
{
	cout.width(width);
	cout<<left<<name;
}

void Course::printCourseScore(int width)
{
	cout.width(width);
	cout<<left<<score;
}

void Course::print(int nameWidth, int scoreWidth)
{
	printCourseName(nameWidth);
	printCourseScore(scoreWidth);
}
