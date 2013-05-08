#ifndef PLAYER_H_
#define PLAYER_H_

class Player
{
private:
    int x, y;
    bool withPrincess;
public:
    Player(int, int);
    ~Player();
    bool isWithPrincess();
    void getPrincess();
    int getX();
    int getY();
    void logIn();
    int move(int, int);

};

#endif
