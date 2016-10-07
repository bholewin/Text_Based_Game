/*********************************************
 *Name: Bryce Holewinski
 *Date: March 10, 2016
 Assignment: This contains the member functions 
 for the game class
 *********************************************/

#include "Game.hpp"

/*********************************************
                Game::Game
This is the class constructor that will initialize
the variables
*************************************************/
Game::Game()
{
    userSelection = " ";
    locationSelection = 0;
}

/*********************************************
                Game::~Game
 This is the class destructor
 *************************************************/
Game::~Game()
{
    for (int i = 0; i < locations.size(); i++)
    {
        Space *tempLocale = this->locations.back();
        this->locations.pop_back();
        delete tempLocale;
    }
}

/*************************************************
                Game::gameIntro
 This function describes the opening sequence that 
 the player finds themself in
 *************************************************/
void Game::gameIntro()
{
    cout << "You slowly wake up, head pounding as your eyes begin to open." << endl <<
    "As your head lifts off your chest you notice that there's blood pooling around \n" <<
    "your feet. Partially soaked in the blood are some worn zip ties, looking to your\n" <<
    "now hurting wrists you realize you were bound. Bound to ... a wooden chair. You slowly \n" <<
    "begin moving and realize that your entire body aches and feels as though you've been\n" <<
    "strapped to the chair long enough to have some serious skin depressions matching the wood.\n\n" <<
    "Standing up you run your hand through your hair and notice that there's a large bump in the back\n" <<
    "of your head and your hair is sticky. Looking at your hand it now has some congealed blood mixed\n" <<
    "with some hair. \n\n" <<
    "Eyes gazing the rest of your surroundings you realize that you've been in an empty shack, lord\n" <<
    "knows how long. The windows are boarded up with light barely peaking through the cracks.\n" <<
    "The shack is empty aside from the wooden chair and the pool of your blood. You try to remember\n" <<
    "how you could've ended up in this...this shack...your head is throbbing too much for the thoughts\n" <<
    "to come through. Thoughts quickly turn towards water and getting out of this shack. You try \n" <<
    "the shack door but it's not opening. Slamming your body against the door provides a satisfying crack\n" <<
    "as the wood starts to splinter. A couple more tries and you burst through!" << endl << endl <<
    "Your eyes are blinded by the radiating light of the sun. As your eyes orient themselves you hear\n"
    "the splashing of waves...your eyes finish adjusting and you realize that you're on fairly small island.\n" <<
    "You find yourself in a garden next to the shack, there's shoreline all around and off in the distance a\n" <<
    "lighthouse juts out of the ground, and next to it...a boat! You decide it's time to get off this rock\n" <<
    "before dehydration sets in...." << endl; 
    
}


/************************************************
                    Game::addSpace
 This function takes a pointer to space and pushes
 it back onto the locations vector
 *************************************************/
void Game::addSpace(Space* location)
{
    this->locations.push_back(location);
}

/************************************************
                Game::getCurrentSpace
 This function returns a pointer to the current room
 *************************************************/
Space* Game::getCurrentSpace()
{
    return this->currentSpace;
}

/************************************************
                Game::getStart
 This function returns a pointer to the starting room
 *************************************************/
Space* Game::getStart()
{
    return this->startingSpace;
}

/************************************************
            Game::setCurrentSpace
 This function takes a space pointer and sets it
 to the current space
 *************************************************/
void Game::setCurrentSpace(Space* newRoom)
{
    this->currentSpace = newRoom;
}

/************************************************
            Game::setStart
 This function takes a space pointer and sets it
 to the starting space
 *************************************************/
void Game::setStart(Space* initialRoom)
{
    this->startingSpace = initialRoom;
}
