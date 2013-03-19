//Richard 
//2013-3-12

#ifndef OOP_H
#define OOP_H

#include <string>
using namespace std;

class Student
{
private:
	string name;
	int score1, score2, score3;
	double getAverage();
public:
	Student(string stuName, int stuScore1, int stuScore2, int stuScore3);
	int getScore1();
	int getScore2();
	int getScore3();
	void printStudent(int no);
};

#endif