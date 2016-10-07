/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: This has the member functions for 
 the player class
 *********************************************/

#include "Player.hpp"

/**********************************************
                Player::Player()
This is the class constructor that will initialize
the variables
*************************************************/
Player::Player()
{
    interaction = false;
    investigation = false;
    hasKey = false;
    hasHoe = false;
    hasGasoline = false;
    droppedItem = " ";
    thirstCounter = 10;
    winGame = false;
    loseGame = false;
}

/**********************************************
                Player::~Player()
 This is the class destructor
 *************************************************/
Player::~Player()
{
    
}
/**********************************************
                Player::addItem
 This function will take an item and add it to the
 backpack vector assuming that there is room for 
 it. Backpack will be limited to 4 slots
 *************************************************/
void Player::addItems(string newItem)
{
    //first check to see if the player is carrying too many
    //items in their pack
    if (backpack.size() >= 4)
    {
        cout << "The backpack is full and cannot carry any more items." << endl <<
        "You must drop something first before you can put the requested item in your pack." <<endl;
    }
    else //otherwise it's ok to add an item
    {
        //add the item to the backpack
        backpack.push_back(newItem);
        if (newItem == "note")
        {
            cout << "You pick up the note and read: " << endl;
            cout << "Did you really think we would make it this easy for you?\n" <<
            "You deserve this for what you've done." << endl;
        }
        if (newItem == "crumpled note")
        {
            cout << "You pick up the crumpled note and read: " << endl;
            cout << "Remember to grab the gas that's under the metal crate when you leave.\n" <<
            "We need to make sure that monster is stuck here" << endl;
        }
    }
}

/**********************************************
                Player::displayBackpack
 This function loops through the backpack and will
 display the items to the user
 *************************************************/
void Player::displayBackpack()
{
    for (int i = 0; i < backpack.size(); i++)
    {
        cout << "Backpack item " << i+1 << " is: ";
        cout << backpack[i] << endl;
    }
}

/**********************************************
                Player::dropItem()
 This function will make a call to displaybackpack
 and then it will ask the user which item they would 
 like to remove, then removes said item using pop_back
 it will return a string
 *************************************************/
string Player::dropItem()
{
    int drop; //user input
    
    cout << "The contents of the backpack are: " << endl;
    displayBackpack();
    cout << "Which item would you like to drop to make room" <<
    " for more items?\n Please select the corresponding backpack item number:" << endl;
    cin >> drop;
    if (drop == 1) //selects the first item
    {
        //get the item that will be dropped
        droppedItem = backpack.at(0);
        //delete item
        backpack.erase(backpack.begin());
    }
    else if (drop == 2) //selects the second item
    {
        droppedItem = backpack.at(1);
        backpack.erase(backpack.begin()+1);
    }
    else if (drop == 3) //selects the third item
    {
        droppedItem = backpack.at(2);
        backpack.erase(backpack.begin()+2);
    }
    else if (drop == 4)//selects the last item
    {
        droppedItem = backpack.at(3);
        backpack.pop_back();
    }
    cout << "Dropping the " << droppedItem << endl;
    return droppedItem;
}

/**********************************************
            Player::Interact()
 This function will change interaction to true and 
 return it
 *************************************************/
bool Player::interact()
{
    interaction = true;
    return interaction;
}

/**********************************************
            Player::Investigation()
 This function will change investigation to true and
 return it
 *************************************************/
bool Player::investigate()
{
    investigation = true;
    return investigation;
}


/**********************************************
            Player::possessKey()
 This function will iterate through the backpack 
 and return true if the player possess the key
 *************************************************/
bool Player::possessKey()
{
    for (int i = 0; i < backpack.size(); i++)
    {
        if (backpack[i] == "key")
        {
            hasKey = true;
            return hasKey;
        }
    }
    return hasKey;
}

/**********************************************
            Player::possessHoe()
 This function will iterate through the backpack
 and return true if the player possess the hoe
 *************************************************/
bool Player::possessHoe()
{
    for (int i = 0; i < backpack.size(); i++)
    {
        if (backpack[i] == "hoe")
        {
            hasHoe = true;
            return hasHoe;
        }
    }
    return hasHoe;
}

/**********************************************
            Player::possessGas()
 This function will iterate through the backpack
 and return true if the player possess the gas
 *************************************************/
bool Player::possessGas()
{
    for (int i = 0; i < backpack.size(); i++)
    {
        if (backpack[i] == "gasoline")
        {
            hasGasoline = true;
            return hasGasoline;
        }
    }
    return hasGasoline;
}

/**********************************************
            Player::thirstStatus()
 This function will decrement on movement and once 
 it reaaches certain levels it will inform the player
 of how dire their thirst is
 *************************************************/
int Player::thirstStatus()
{
    thirstCounter--;
    if (thirstCounter == 9)
    {
        cout << "I need to get a move on and get off this rock, I doubt there's\n" <<
        "any water around here." << endl;
    }
    else if (thirstCounter == 5)
    {
        cout << "Ugh, this search is exhausting, I need to figure out a way to get out of here fast!" << endl;
    }
    else if (thirstCounter == 1)
    {
        cout << "I...I can hardly think straight...soooo thirsty. Strength failing, must leave..." << endl;
    }
    else if (thirstCounter == 0)//player dies of dehydration
    {
        gameLoss();
    }
    return thirstCounter;
}

/************************************************
        player::setWin
 This will set the win variable to true
 *************************************************/
void Player::setWin()
{
    winGame = true;
}

/************************************************
            player::setLoss
 This will set the lose variable to true
 *************************************************/
void Player::setLoss()
{
    loseGame = true;
}
/************************************************
            player::gameWon
 This will return true once the game winning condition
 is met
 *************************************************/
bool Player::gameWon()
{
    return winGame;
}

/************************************************
            Player::gameLoss
 This will return true once the game lossing condition
 is met
 *************************************************/
bool Player::gameLoss()
{
    return loseGame;
}

