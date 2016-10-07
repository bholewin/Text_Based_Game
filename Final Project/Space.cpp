/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: These are the member functions for
 the space class
 *********************************************/

#include "Space.hpp"

/************************************************
            Space::Space
This is the class constructor for the space class
that will initialize the variables
*************************************************/
Space::Space()
{
    item1 = " ";
    item2 = " ";
    item3 = " ";
    item4 = " ";
    removedItem = " ";
    usedSpecial = false;
    pickItem = 0;
    this->shackPtr = NULL;
    this->beachPtr = NULL;
    this->boatPtr = NULL;
    this->gardenPtr = NULL;
    this->lighthousePtr = NULL;
    
}

/************************************************
            Space::~Space
 This is the class destructor
 *************************************************/
Space::~Space()
{
    
}


/************************************************
            Space::displayItems
 This function will iterate through the vector and
 display the items contained within
 *************************************************/
void Space::displayItems()
{
    
    for (int i = 0; i < itemStorage.size(); i++)
    {
        cout << i+1 << " a " <<itemStorage[i] << " ";
    }
}

/************************************************
            Space::addItem()
 This function will add an item to the space
 *************************************************/
void Space::addItem(string newItem)
{
    itemStorage.push_back(newItem);
}

/************************************************
            Space::removeItem()
 This function will compare whether the player added
 or removed items from their pack and then add or
 remove items from the space accordingly
 *************************************************/
string Space::removeItem()
{
    cout << "Which item would you like to pick up: " << endl;
    displayItems();
    cin >> pickItem;
    if (pickItem == 1) //selects the first item
    {
        //get the item that will be dropped
        removedItem = itemStorage.at(0);
        //delete item
        itemStorage.erase(itemStorage.begin());
    }
    else if (pickItem == 2) //selects the second item
    {
        removedItem = itemStorage.at(1);
        itemStorage.erase(itemStorage.begin()+1);
    }
    else if (pickItem == 3) //selects the third item
    {
        removedItem = itemStorage.at(2);
        itemStorage.erase(itemStorage.begin()+2);
    }
    else if (pickItem == 4)//selects the last item
    {
        removedItem = itemStorage.at(3);
        itemStorage.pop_back();
    }
    cout << "You picked up the " << removedItem << endl;
    return removedItem;
}

/************************************************
            Space::revealInvestigation
 This function will give a description of the area that can
 be interacted with (special) and what items are 
 available to be picked up
 *************************************************/
void Space::revealInvestigation()
{
    cout << "You look around and find: " << endl;
    //shows what items are about in the area
    displayItems();
    //describes the feature that can be interacted with
    describeSpecial();
}

/************************************************
                Space::setPointers
 This function will take 4 pointers and assign them
 *************************************************/
void Space::setLocationPtrs(Space* location1, Space* location2, Space* location3, Space* location4, Space* location5)
{
    this->shackPtr = location1;
    this->gardenPtr = location2;
    this->beachPtr = location3;
    this->lighthousePtr = location4;
    this->boatPtr = location5;
}


/*************************************************
            Space::moveToLocation
This function will take an int and based on that int
it will reset the pointer to the proper location
***************************************************/
Space* Space::moveToLocation(int selection, Player hero1)
{
    
    if (selection == 1)
    {
        return this->shackPtr;
    }
    else if (selection == 2)
    {
        return this->gardenPtr;
    }
    else if (selection == 3)
    {
        return this->beachPtr;
    }
    else if (selection == 4)
    {
        if (hero1.possessKey() == true)
        {
            return this->lighthousePtr;
        }
        else
        {
            cout << "It looks like the lighthouse is locked, looks like I'll need to find a key." << endl <<
            "I better go search by the beach." << endl;
            return beachPtr;
        }
    }
    else if (selection == 5)
    {
        return this->boatPtr;
    }
    else
        return NULL;
}

/*************************************************
            Space::itemAvailability
 This function will return true or false depending on 
 item availability
 ***************************************************/
bool Space::itemAvailability()
{
    if (itemStorage.empty() == true)
    {
        availableItems = false;
    }
    else
        availableItems = true;
    
    return availableItems;
}
