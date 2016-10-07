/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: This is the header file for the
 game class
 *********************************************/

#ifndef GAME_HPP
#define GAME_HPP
#include "Player.hpp"
#include "Space.hpp"
#include "Shack.hpp"
#include "Garden.hpp"
#include "Lighthouse.hpp"
#include "Boat.hpp"
#include "Beach.hpp"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Game
{
private:
    Player hero;
    vector<Space*> locations;
    Space *currentSpace, *startingSpace, *playerSpace;
    string userSelection;
    int locationSelection;
    
public:
    Game();//game constructor
    ~Game();//game destructor
    //void menu();//
    void gameIntro();//describes the opening of the game
    void addSpace(Space* location);
    Space* getCurrentSpace();
    Space* getStart();
    void setCurrentSpace(Space* newRoom);
    void setStart(Space* initialRom);
    
};

#endif
