#include "classes.h"

#include <algorithm>
#include <climits>
using namespace std;

Classes::Classes()
{
	Student student;
	while (student.read())
	{
		stu.push_back(student);
		student.clear();
	}
};
Classes::~Classes() {};

void Classes::list_stu()
{
	for (vector <Student> :: iterator ai = stu.begin(); ai != stu.end(); ++ai)
	{
		ai->print(4, 8, course);
	}
}

void Classes::make()
{
	for (vector <Student> :: iterator ai = stu.begin(); ai != stu.end(); ++ai)
	{
		vector <Course> c = ai->getAllCourse();
		course.insert(course.end(), c.begin(), c.end());
	}
	sort(course.begin(), course.end());
	vector <Course> :: iterator ci = course.begin();
	while (ci != course.end())
	{
		vector <Course> :: iterator ai = ci;
		int maxScore = 0, minScore = INT_MAX, sumScore = 0;
		while (*ai == *ci)
		{
			int score = ai->getCourseScore();
			maxScore = maxScore < score ? score : maxScore;
			minScore = minScore > score ? score : minScore;
			sumScore += score;
			++ai;
			if (ai == course.end())
				break;
		}
		max.push_back(maxScore);
		min.push_back(minScore);
		average.push_back((double) sumScore / (ai - ci));
		ci = ai;
	}
	//before call unique, the vector must be in order
	//开始没有意识到这个问题，结果查了很多资料才发现的，囧。。
	course.erase(unique(course.begin(), course.end()), course.end());
}

void Classes::list_course()
{
	cout.width(4);
	cout<<left<<"num";
	cout.width(8);
	cout<<left<<"name";
    for (vector <Course> :: iterator ai = course.begin(); ai != course.end(); ++ai)
    {
    	ai->printCourseName(8);
    }
    cout.width(4);
    cout<<left<<"AVG";
    cout<<endl;
}

void Classes::do_analytics(string name, vector <double> &analytics)
{
	cout.width(4);
	cout<<' ';
	cout.width(8);
	cout<<name;
	for (vector <double> :: iterator ai = analytics.begin(); ai != analytics.end(); ++ai)
	{
		cout.width(8);
		cout<<*ai;
	}
	cout<<endl;
}

void Classes::list_analytics()
{
	do_analytics("MIN:", min);
	do_analytics("MAX:", max);
	do_analytics("AVG", average);
}
