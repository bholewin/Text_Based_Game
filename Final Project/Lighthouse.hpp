/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: This is the header file for the
 lighthouse class
 *********************************************/

#ifndef LIGHTHOUSE_HPP
#define LIGHTHOUSE_HPP
#include "Space.hpp"

class Lighthouse: public Space
{
private:
    bool searchLight;
public:
    Lighthouse();//class constructor
    ~Lighthouse();//destructor
    virtual void describePlace();//this function will describe the unique space
    virtual void describeSpecial();// this will describe the special feature
    virtual void special();//uncovers the key
    bool lightOn();//returns true if the lighthouse search light is on
};

#endif 
