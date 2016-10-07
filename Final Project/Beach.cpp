/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: This contains the member functions
 for the beach class
 *********************************************/

#include "Beach.hpp"

/**********************************************
                Beach::Beach()
This is the constructor for beach
**********************************************/
Beach::Beach()
{
    
}

/**********************************************
                Beach::~Beach()
 This is the destructor for beach
 **********************************************/
Beach::~Beach()
{
    
}

/**********************************************
                Beach::describePlace()
 This function will describe the beach for when
 the player arrives there
 **********************************************/
void Beach::describePlace()
{
    //describes the beach before the user digs around
    if (usedSpecial == false)
    {
        cout << "You walk over to the beach, taking in the impeccable white sand and\n" <<
        "the sound of the gentle waves rolling into the shoreline. All the while wondering\n" <<
        "how something so beautiful could be a prison to you..." << endl;
    }
    else
    {
        cout << "Back at the beach, it's got that same beauty but now that you've got the key\n" <<
        "it's just taunting you with its beauty." << endl;
    }
}

/**********************************************
            Beach::describeSpecial()
 This function will describe the beach's special
 that there might be a key hidden in the sand
 **********************************************/
void Beach::describeSpecial()
{
    if (usedSpecial == false)
    {
        cout << "Walking around the beach you notice that there's some recently displaced\n" <<
        "rocks and something gleaming between them...it looks metallic and small.." << endl;
    }
    else
    {
        cout << "You've already uncovered the key, probably best to move on and get out of here." << endl;
    }
}

/**********************************************
            Beach::special()
 The special reveals the key and let's it be usable
 for picking up
 **********************************************/
void Beach::special()
{
    usedSpecial = true;
    cout << "You reach between the rocks and pull out a key! That may be useful for the lighthouse..." << endl;
    item1 = "key";
    itemStorage.push_back(item1);
}