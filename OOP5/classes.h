#ifndef CLASSES_H_
#define CLASSES_H

#include <string>
#include <vector>
#include "student.h"
#include "course.h"
using namespace std;

class Classes
{
private:
	vector <Student> stu;
	vector <Course> course;
	vector <double> min, max, average;
	void do_analytics(string, vector <double> &);
public:
	Classes();
	~Classes();
	void make();
	void list_stu();
	void list_course();
	void list_analytics();
};

#endif
