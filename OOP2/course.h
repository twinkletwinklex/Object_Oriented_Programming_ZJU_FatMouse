#ifndef COURSE_H_
#define COURSE_H_

#include <string>
#include <iostream>
using namespace std;

class Course
{
private:
	string name;
	int score;
public:
	Course();
	Course(string, int);
	~Course();
	string getCourseName();
	int getCourseScore();
	bool read();
	bool friend operator== (Course, Course);
	bool friend operator< (Course, Course);
	void printCourseName(int);
	void printCourseScore(int);
	void print(int, int);
};


#endif
