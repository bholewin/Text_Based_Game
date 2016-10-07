/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: This contains the member functions
 for the lighthouse class
 *********************************************/

#include "Lighthouse.hpp"

/**************************************************
            Lighthouse::Lighthouse
This is the clas constructor and it will inititalize
the variables
***************************************************/
Lighthouse::Lighthouse()
{
    searchLight = false;
    item1 = "crumpled note";
    itemStorage.push_back(item1);
}

/**************************************************
        Lighthouse::Lighthouse
 This is the clas destructor
 ***************************************************/
Lighthouse::~Lighthouse()
{
    
}

/**************************************************
        Lighthouse::describePlace
 This function will describe the lighthouse
 ***************************************************/
void Lighthouse::describePlace()
{
    if (usedSpecial == false)
    {
        cout << "As you enter the lighthouse to your right is a rickety metal staircase that\n" <<
        "leads up to the search light. Striaght ahead is a control panel next to some busted\n" <<
        "wooden crates. And to the left on the floor is a metal plate that's slightly ajar...\n" <<
        "you listen and can hear sloshing water coming from below the crate and howling wind..." <<endl;
    }
    else
    {
        cout << "The search light is on now...flashing and searching the horizon...is it looking for\n" <<
        "something or ... warning someone..?" << endl;
    }
    if (hero.possessHoe() == true)
    {
        cout << "Hmm I bet this garden hoe will let me pry open the metal crate so I can see what's below there." << endl;
    }
}

/**************************************************
        Lighthouse::describeSpecial
 This function will describe the lighthouse's special
 function
 ***************************************************/
void Lighthouse::describeSpecial()
{
    cout << "You examine the control panel on the main floor, looks like flipping the switch may turn\n" <<
    "that search light on." << endl;
    cout << "Hmmm I bet that metal crate may have something of use under it..." << endl;
}

/**************************************************
            Lighthouse::special
 This function turns on the search light
 ***************************************************/
void Lighthouse::special()
{
    int specialSelection;
    do
    {
        cout << "What would you like to do: " << endl <<
        "1. Turn on the lighthouse search light" << endl <<
        "2. Try to pry open the metal crate" << endl <<
        "3. Do nothing" << endl;
        cin >> specialSelection;
        if (specialSelection == 1)
        {
            usedSpecial = true;
            cout << "Some light would probably get me out of here safely...let's give this switch a go...\n" <<
            "Looks like we've got some light, nice to have something go my way." << endl;
            searchLight = true;
        }
        else if (specialSelection == 2)
        {
            //if (hero1.possessHoe() == true)
            //{
                usedSpecial = true;
                cout << "You wedge the garden hoe in a slight gap of the crate. \n" <<
                "You heave and press down to leverage the garden hoe with the crate.\n" <<
                "It creaks as it slowly prys off it's resting place. You heave again\n" <<
                "and it comes completely off. And below you see a canister of gas resting\n" <<
                "on some rocks above the waves. This is just what you need to leave this\n" <<
                "nightmare behind you." << endl;
                item2 = "gasoline";
                itemStorage.push_back(item2);
            //}
            //else
                //cout << "You try to pry open the metal crate but fail...it appears that you need\n" <<
                //"something to leverage it open...maybe a tool of some sorts." << endl;
        }
        else
            specialSelection = 3;
    } while (specialSelection !=3);
    
}

/**************************************************
            Lighthouse::lightOn
 This function returns the status of the search light
 ***************************************************/
bool Lighthouse::lightOn()
{
    return searchLight;
}
