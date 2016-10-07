/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: This is the header file for the
 beach class
 *********************************************/

#ifndef BEACH_HPP
#define BEACH_HPP
#include "Space.hpp"
class Beach: public Space
{
private:
    
public:
    Beach();//constructor
    ~Beach();//destructor
    virtual void describePlace();//this function will describe the unique space
    virtual void describeSpecial();// this will describe the special feature
    virtual void special();//uncovers the key
};


#endif
