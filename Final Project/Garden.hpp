/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: This is the header file for the
 garden class
 *********************************************/

#ifndef GARDEN_HPP
#define GARDEN_HPP
#include "Space.hpp" 

class Garden: public Space
{
private:
    
public:
    Garden();//class constructor
    ~Garden();//class destructor
    virtual void describePlace();//this function will describe the unique space
    virtual void describeSpecial();// this will describe the special feature
    virtual void special();//uncovers the garden hoe
    
};

#endif
