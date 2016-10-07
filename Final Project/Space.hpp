/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: This is the header file for the
 player class
 *********************************************/

#ifndef SPACE_HPP
#define SPACE_HPP
#include "Player.hpp"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Space
{
protected:
    Player hero;
    vector<string> itemStorage;
    string item1, item2, item3, item4;
    string removedItem;
    int pickItem;
    bool usedSpecial, availableItems;
    string currentLocation;
    Space *shackPtr, *gardenPtr, *lighthousePtr, *boatPtr, *beachPtr;
public:
    Space(); //constructor
    ~Space();//destructor
    virtual void describePlace() = 0;//this function will describe the unique space
    virtual void describeSpecial() = 0;// this will describe the special feature
    virtual void revealInvestigation(); //will reveal items and the space's special ability
    virtual void displayItems();//shows what items are available in that space
    virtual void addItem(string newItem);//this function will add an item that's dropped from the player
    virtual string removeItem();//this function will remove an item that's added to the player
    virtual void special() = 0;//pure virtual function for special
    virtual void setLocationPtrs(Space* location1, Space* location2, Space* location3, Space* location4, Space* location5);
    virtual Space* moveToLocation(int selection, Player hero);//will move the player to a new location
    virtual bool itemAvailability();//returns true or false depending on item availability
};

#endif
