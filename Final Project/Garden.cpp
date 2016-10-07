/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: This contains the member functions
 for the garden class
 *********************************************/

#include "Garden.hpp"

/*********************************************
            Garden::Garden
This is the class constructor that initializes 
the values for the garden class
***********************************************/
Garden::Garden()
{
    currentLocation = "Garden";
    
}

/*********************************************
            Garden::~Garden
 This is the class destructor
 ***********************************************/
Garden::~Garden()
{
    
}

/*********************************************
            Garden::describePlace
 This describes the garden's layout
 ***********************************************/
void Garden::describePlace()
{
    cout << "The garden has a nice tranquility about it, a far\n" <<
    "cry from the awfulness of the shack. There's a few rows of\n" <<
    "corn, potatoes, carrots, and some other veggies. It appears that\n" <<
    "whoever had been maintaining the lighthouse used this garden for\n" <<
    "some subsistence farming. Over in the corner of the garden, lying\n" <<
    "next to the shack are some tools that may be of use..." << endl;
}

/*********************************************
            Garden::describeSpecial
 This describes what the special will accomplish
 ***********************************************/
void Garden::describeSpecial()
{
    if (usedSpecial == false)
    {
        cout << "Getting closer to the scattered tools at the edge of the\n" <<
        "garden you notice a broken shovel and a garden hoe that is tangled up\n" <<
        "in a wildly growing shrub. That garden hoe looks like it could provide\n" <<
        "some good leverage...." << endl;
    }
    else
    {
        cout << "You've already cleared out the garden hoe from the shrub." << endl;
    }
}

/*********************************************
            Garden::special
 This describes clearing away the garden hoe and
 making it available to be picked up
 ***********************************************/
void Garden::special()
{
    usedSpecial = true;
    cout << "You go up to the shrub with the garden hoe in it and being yanking.\n" <<
    "You pull with all of your failing strength on the garden hoe until it slides free!" << endl;
    item1 = "Garden Hoe";
    itemStorage.push_back(item1);
}