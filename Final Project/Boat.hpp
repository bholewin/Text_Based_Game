/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: This is the header file for the
 boat class
 *********************************************/

#ifndef BOAT_HPP
#define BOAT_HPP
#include "Space.hpp"
#include "Lighthouse.hpp"
class Boat: public Space
{
private:
    Lighthouse *passage;
public:
    Boat();//constructor
    ~Boat();//destructor
    virtual void describePlace();//this function will describe the unique space
    virtual void describeSpecial();// this will describe the special feature
    virtual void special();//starts the boat!
};

#endif
