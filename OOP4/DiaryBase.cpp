#include "DiaryBase.h"
#include <fstream>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void DiaryBase::ReadFile()
{
	fileName = "data";
	ifstream fin(fileName.c_str());

	OneDiary d;
	while (fin>>d.month>>d.day>>d.year>>d.title)
	{
		getline(fin, d.content);
		diary.push_back(d);
	}
	fin.close();
}

void DiaryBase::SaveFile()
{
	ofstream fout(fileName.c_str());
	for(vector<OneDiary> :: iterator ai = diary.begin(); ai != diary.end(); ++ai)
	{
		fout<<ai->month<<'\t'<<ai->day<<'\t'<<ai->year<<'\t'<<ai->title<<'\t'<<ai->content<<endl;
	}
	fout.close();
}

void DiaryBase::DeleteByTime(int year, int month, int day)
{
	// cout<<diary.size()<<endl;
	for(vector<OneDiary> :: iterator ai = diary.begin(); ai != diary.end();)
	{
		// cout<<ai->year<<'\t'<<ai->month<<'\t'<<ai->day<<endl;
		if (year == ai->year && month == ai->month && day == ai->day){
			// cout<<ai - diary.begin()<<endl;
			ai = diary.erase(ai);
		} else {
			++ai;
		}
	}
}

DiaryBase::~DiaryBase()
{
	SaveFile();
}