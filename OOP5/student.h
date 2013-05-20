#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>
#include <vector>
#include "course.h"
using namespace std;

class Student
{
private:
	int num;
	string name;
	vector <Course> course;
public:
	Student();
	~Student();
	string getStudentName();
	vector <Course> getAllCourse();
	bool read();
	void clear();
	void printName(int);
	void printNum(int);
	void print(int, int, vector <Course> &);
};

#endif
