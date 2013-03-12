//Richard 
//2013-3-12

#include <string>
#include <iostream>
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

Student::Student(string stuName, int stuScore1, int stuScore2, int stuScore3):
	name(stuName), score1(stuScore1), score2(stuScore2), score3(stuScore3)
{};
int Student::getScore1()
{
	return score1;
}
int Student::getScore2()
{
	return score2;
}
int Student::getScore3()
{
	return score3;
}
double Student::getAverage()
{
	return (double) (score1 + score2 + score3) / 3;
}
void Student::printStudent(int no)
{
	cout.setf(ios::left);
	cout.width(WIDTH);
	cout<<no;

	cout.width(WIDTH);
	cout<<name;

	cout.width(WIDTH);
	cout<<score1;

	cout.width(WIDTH);
	cout<<score2;

	cout.width(WIDTH);
	cout<<score3;

	cout.width(WIDTH);
	cout<<getAverage();

	cout<<endl;
	cout.unsetf(ios::left);
}