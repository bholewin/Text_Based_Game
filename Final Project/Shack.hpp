/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: This is the header file for the
 shack class
 *********************************************/

#ifndef SHACK_HPP
#define SHACK_HPP
#include "Space.hpp"

class Shack: public Space
{
private:
    
public:
    Shack();//class constructor
    ~Shack();//class destructor
    virtual void describePlace();//this function will describe the unique space
    virtual void describeSpecial();// this will describe the special feature
    virtual void special();//dismembers the chair
    };

#endif
