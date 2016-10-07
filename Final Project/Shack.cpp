/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: This contains the member files for
 shack class
 *********************************************/

#include "Shack.hpp"


/***********************************************
                Shack::Shack
This is the class constructor that initializes the 
variables
**************************************************/
Shack::Shack()
{
    
}

/***********************************************
                Shack::Shack
 This is the class destructor
 **************************************************/
Shack::~Shack()
{
    
}

/***********************************************
                Shack::describePlace
 This function describes what the shack is like
 **************************************************/
void Shack::describePlace()
{
    //describes the shack with intact chair
    if (usedSpecial == false)
    {
        cout << "You enter the shack, inside is the chair that you were bound in\n" <<
        "with your blood pooled around its legs. The air is damp and it's hard to see\n" <<
        "since the windows are still boarded up." << endl;
    }
    //describes the shack without the chair
    else
    {
        cout << "You enter the shack, inside is the remains of the chair that you\n" <<
        "dismembered. Splinters now mingle in the pool of your blood as shown through\n" <<
        "the faint light coming through the boarded windows." << endl;
    }
}

/***********************************************
            Shack::describeSpecial
 This function describes what the special will 
 accomplish
 **************************************************/
void Shack::describeSpecial()
{
    if (usedSpecial == false)
    {
        cout << "Surveying the shack you take another look at that awful chair \n" <<
        "and decide it would be of more use to you broken up into pieces." << endl;
    }
}

/***********************************************
                Shack::special
 This function "dismembers" the chair and adds a
 new item to the items in the shack
 **************************************************/
void Shack::special()
{
    cout << "You decide to smash the chair against the wall leaving some more\n" <<
    "manageable pieces to gather." << endl;
    usedSpecial = true;
    item1 = "Wooden leg";
    itemStorage.push_back(item1);
}
