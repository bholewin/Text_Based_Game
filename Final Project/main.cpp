/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 *Assignment: Final Project! Make a text based
 * game using polymorphism and pointers
 *********************************************/
#include "Player.hpp"
#include "Space.hpp"
#include "Shack.hpp"
#include "Garden.hpp"
#include "Beach.hpp"
#include "Lighthouse.hpp"
#include "Boat.hpp"
#include "Game.hpp"
#include <iostream>
#include <string>
using namespace std;

void Menu(Game *island);// menu for interacting with the game world
Game* createGame();//this will initialize the game world

int main()
{
    int menuSelection;
    do
    {
        cout << "Would you like to play the game or see the objective?" << endl <<
        "1. Play the game" << endl <<
        "2. See the objective" << endl;
        cin >> menuSelection;
        
        if (menuSelection == 1)
        {
            Game* newGame = createGame();
            Menu(newGame);
        }
        else if (menuSelection == 2)
        {
            cout << "The goal of the game is to collect the key from the beach, the hoe from\n" <<
            "the garden, gas from the lighthouse, and turn on the searchlight within 10 changes\n" <<
            "in the player's position." << endl;
        }

    } while (menuSelection!=1);
    
    
    return 0;
}

/************************************************
                createGame
 This will initialize the island
 *************************************************/
Game* createGame()
{
    Game* island = new Game();
    //first set the locations beginning with the shack
    Space* shack = new Shack();
    island->addSpace(shack);
    
    //next is garden where the player starts off
    Space* garden = new Garden();
    island->addSpace(garden);
    island->setStart(garden);
    
    //beach
    Space* beach = new Beach();
    island->addSpace(beach);
    
    //lighthouse
    Space* lighthouse = new Lighthouse();
    island->addSpace(lighthouse);
    
    //boat
    Space* boat = new Boat();
    island->addSpace(boat);
    
    //now set the pointers
    shack->setLocationPtrs(NULL, garden, beach, lighthouse, boat);
    garden->setLocationPtrs(shack, NULL, beach, lighthouse, boat);
    beach->setLocationPtrs(shack, garden, NULL, lighthouse, boat);
    lighthouse->setLocationPtrs(shack, garden, beach, NULL, boat);
    boat->setLocationPtrs(shack, garden, beach, lighthouse, NULL);
    
    return island;
}


/************************************************
                    Menu
 This will offer a menu for the player to interact
 in the different spaces
 *************************************************/
void Menu(Game *island)
{
    Space *playerSpace;
    Player hero;
    string userSelection;
    int locationSelection;
    island->setCurrentSpace(island->getStart());
    playerSpace = island->getCurrentSpace();
    island->gameIntro();
    do
    {
        cout << "What would you like to do?" << endl <<
        "1. Investigate the area" << endl <<
        "2. Pick up an item" << endl <<
        "3. Drop an item from your pack" << endl <<
        "4. Interact with the environment" << endl <<
        "5. View my backpack" << endl <<
        "6. Move to another area" << endl;
        cin >> userSelection;
        if (userSelection.at(0) == '1')//investigate the area
        {
            playerSpace->revealInvestigation();
        }
        else if (userSelection.at(0) == '2')//pick up an item
        {
            if (playerSpace->itemAvailability() == false)
            {
                cout << "There's nothing currently available to pickup." <<endl;
            }
            else
            {
                //create a temp variable to store the item that is removed
                //from the space
                string tempRemoved = playerSpace->removeItem();
                //add that temp variable to the heros backpack
                hero.addItems(tempRemoved);
            }
            
        }
        else if (userSelection.at(0) == '3')//drop an item
        {
            //create a temp variable to store the item dropped
            //from the players backpack
            string tempDrop = hero.dropItem();
            //now add that item to the space
            playerSpace->addItem(tempDrop);
        }
        else if (userSelection.at(0) == '4')//use the special ability
        {
            playerSpace->special();
        }
        else if (userSelection.at(0) == '5')//check out the player's backpack
        {
            hero.displayBackpack();
        }
        else//move on to other location
        {
            cout << "I need to travel to the: " << endl <<
            "1. Shack" << endl <<
            "2. Garden" << endl <<
            "3. Beach" << endl <<
            "4. Lighthouse" << endl <<
            "5. Boat" << endl;
            cin >> locationSelection;
            //moves and resets the current location
            island->setCurrentSpace(playerSpace->moveToLocation(locationSelection, hero));
            playerSpace = island->getCurrentSpace();
            playerSpace->describePlace();
            hero.thirstStatus();
        }
    } while (hero.gameLoss() == false && hero.gameWon() == false);
}
