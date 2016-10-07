/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: This is the header file for the
 player class
 *********************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <vector>
#include <string>
#include <iostream>
#include <map>

using namespace std;
class Player
{
private:
    vector<string> backpack;
    bool interaction, investigation;
    bool hasKey, hasHoe, hasGasoline;
    string droppedItem;
    int thirstCounter;
    bool winGame, loseGame;
public:
    Player();//class constructor
    ~Player();//class destructor
    void addItems(string newItem);//this function adds items to the backpack
    void displayBackpack();//this will loop through the backpack and display contents
    string dropItem();//this will remove and return an item dropped from backpack
    bool interact();//this will change and return interaction
    bool investigate();//this will change and return investigation
    bool possessKey();//iterates through backpack to check for key
    bool possessHoe();//iterates through backpack to check for hoe
    bool possessGas();//iterates through backpack to check for gas
    int thirstStatus();//will display the player's thirst status for movements
    void setWin();// will set the winGame boolean
    void setLoss();//will set the loseGame boolean
    bool gameWon();//returns true once the player wins
    bool gameLoss();//returns true if the player losses
};

#endif
