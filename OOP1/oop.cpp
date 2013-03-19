//Richard 
//2013-3-12

#define N 10
#define WIDTH 8

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "oop.h"
using namespace std;



inline void printHeader();
inline void printAverage(vector<Student>::iterator, vector<Student>::iterator);
inline void printMin(vector<Student>::iterator, vector<Student>::iterator);
inline void printMax(vector<Student>::iterator, vector<Student>::iterator);

int main()
{
	vector <Student> student;
	for (int i = 0; i != N; ++i)
	{
		string name;
		int score1, score2, score3;
		cin>>name>>score1>>score2>>score3;
		Student stu(name, score1, score2, score3);
		student.push_back(stu);
	}

	printHeader();
	
	for (vector<Student> :: iterator si = student.begin(); si != student.end(); ++si)
	{
		si->printStudent(si - student.begin() + 1);
	}
	printAverage(student.begin(), student.end());
	printMin(student.begin(), student.end());
	printMax(student.begin(), student.end());

	system("pause");
	return 0;
}



inline void printHeader()
{
	const int length = 6;
	string header[] = {
		"no", "name", "score1", "score2", "score3", "average"
	};
	cout.setf(ios::left);
	for (int i = 0; i < length; ++i)
	{
		cout.width(WIDTH);
		cout<<header[i];
	}
	cout.unsetf(ios::left);
	cout<<endl;
}

inline void printAverage(vector<Student>::iterator begin, vector<Student>::iterator end)
{
	const int sumNum = 3;
	int sum[sumNum] = {0};
	for (vector<Student>::iterator vi = begin; vi != end; ++vi)
	{
		sum[0] += vi->getScore1();
		sum[1] += vi->getScore2();
		sum[2] += vi->getScore3();
	}
	cout.setf(ios::left);

	cout.width(WIDTH);
	cout<<' ';

	cout.width(WIDTH);
	cout<<"average";
	for (int i = 0; i != sumNum; ++i)
	{
		cout.width(WIDTH);
		cout<<(double) sum[i] / N;
	}
	cout<<endl;
	cout.unsetf(ios::left);
}

inline void printMin(vector<Student>::iterator begin, vector<Student>::iterator end)
{
	const int minNum = 3;
	int min[minNum] = {5, 5, 5};
	for (vector<Student>::iterator vi = begin; vi != end; ++vi)
	{
		min[0] = vi->getScore1() < min[0] ? vi->getScore1() : min[0];
		min[1] = vi->getScore2() < min[1] ? vi->getScore2() : min[1];
		min[2] = vi->getScore3() < min[2] ? vi->getScore3() : min[2];
	}
	
	cout.setf(ios::left);

	cout.width(WIDTH);
	cout<<' ';

	cout.width(WIDTH);
	cout<<"min";
	for (int i = 0; i != minNum; ++i)
	{
		cout.width(WIDTH);
		cout<<min[i];
	}
	cout<<endl;
	cout.unsetf(ios::left);
}

inline void printMax(vector<Student>::iterator begin, vector<Student>::iterator end)
{
	const int maxNum = 3;
	int max[maxNum] = {0};
	for (vector<Student>::iterator vi = begin; vi != end; ++vi)
	{
		max[0] = vi->getScore1() > max[0] ? vi->getScore1() : max[0];
		max[1] = vi->getScore2() > max[1] ? vi->getScore2() : max[1];
		max[2] = vi->getScore3() > max[2] ? vi->getScore3() : max[2];
	}

	cout.setf(ios::left);

	cout.width(WIDTH);
	cout<<' ';

	cout.width(WIDTH);
	cout<<"min";
	for (int i = 0; i != maxNum; ++i)
	{
		cout.width(WIDTH);
		cout<<max[i];
	}
	cout<<endl;
	cout.unsetf(ios::left);
}