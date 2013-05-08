#ifndef CASTLE_H_
#define CASTLE_H_

#include "room.h"
#include <vector>
using namespace std;
class Castle
{
private:
	vector<vector<Room> > map;
	int size;
	void _init(int);
	static const int COMMON = 0, MONSTER = 1, PRINCESS = 2, EXIT = 3, LOBBY = 4;
public:
	Castle();
	~Castle();
	void printMap();
	void gaming();
};


#endif
