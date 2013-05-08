#ifndef ROOM_H_
#define ROOM_H_
#include "player.h"
class Room
{
private:
	int type;
    static const int COMMON = 0, MONSTER = 1, PRINCESS = 2, EXIT = 3, LOBBY = 4;
public:

	Room();
	~Room();
	int logIn(Player &);
	void setType(int);
	int getType();

};


#endif
