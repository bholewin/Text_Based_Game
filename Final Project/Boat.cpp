/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: This contains the member functions
 for the boat class
 *********************************************/

#include "Boat.hpp"

/**************************************************
                Boat::Boat
 This is the clas constructor and it will inititalize
 the variables
 ***************************************************/
Boat::Boat()
{
    item1 = "note";
    itemStorage.push_back(item1);
}

/**************************************************
                Boat::~Boat
 This is the clas destructor
 ***************************************************/
Boat::~Boat()
{
    
}

/**************************************************
                Boat::describePlace
 This function describes the boat
 ***************************************************/
void Boat::describePlace()
{
    cout << "This boat is in rough shape, lots of dents and scratches, but it looks sea worthy.\n" <<
    "I wonder why it's here and who left it..." << endl;
}

/**************************************************
            Boat::describeSpecial
 This function describes what's needed to get the boat
 going
 ***************************************************/
void Boat::describeSpecial()
{
    cout << "The boat just needs some gas and then I bet I can get off this forsaken rock." << endl;
}

/**************************************************
            Boat::special
 This function will get the boat off the island and 
 potentially win the game for the player
 ***************************************************/
void Boat::special()
{
    if (hero.possessGas() == false)
    {
        cout << "I can't do anything here without some gasoline to get this going." << endl;
    }
    if (hero.possessGas() == true && passage->lightOn() == true)
    {
        cout << "You pour the gasoline into the boats tank and give the engine a try..\n" <<
        "A second later and the engine sputters and then roars to life! With the lighthouse\n" <<
        "guiding your path you safely navigate the rocks and out onto the open ocean towards\n" <<
        "the answers to this nightmare." << endl;
        hero.setWin();
    }
    else if (hero.possessGas() == true && passage->lightOn()==false)
    {
        cout << "You pour the gasoline into the tank and hit the engine. It sputters and then\n" <<
        "roars into life as you speed off into the deep dark ocean. The ocean before you is\n" <<
        "dark and foreboding...but you don't care you're off and free! As you ride along you \n" <<
        "notice an ever increasing amount of objects in the water that look like rocks...\n" <<
        "Before you can react and turn the boat around you crash into a fierce rock that throws\n" <<
        "you violently from the boat. As you slowly drift into oblivion you see their faces..." <<
        "the ones you betrayed...smirking that you've met the same fate..." << endl;
        hero.setLoss();
    }
}
