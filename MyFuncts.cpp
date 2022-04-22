#include "MyFuncts.h"
#include <iostream>

using namespace std;

//print statement for a description of the game and how to play.
void Description()
{
	cout << "This is a spaced them interactive simulation\n"
		"You will be given a couple of options\n"
		"From then fate will decide your choice\n\n"
		"How to play\n"
		"Only enter numbers shown with the question\n" << endl;
}
//print statement for choice 1
void DeathStatement()
{
	cout << "Against all odds, you decide to head towards the commotion\n"
		"You hear screams in the distance as you approach the bridge.\n"
		"You decide to continue, just to be met face to face with a xenomorph.\n"
		"Before you know it, you feel nothing and your vision goes black.\n"
		"Perhaps you should have followed the crowd like the sheep you are.\n" << endl;
}
//print statement for choice 2
void LifeStatement()
{
	cout << "You decide to follow the nearest crew memeber.\n"
		"As you regroup with them, you overhear them talking about an alien breach at the bridge.\n"
		"Luckily you did not investigate the bridge.\n"
		"You all head towards the escape pods.\n"
		"Luckily, this is not the Titanic and there are enough vessles for the crew.\n"
		"You all get into a lifepod together and launch to the nearest allied ship\n" << endl;
}
//print statement for the end of the game
void ClosingStatement()
{
	cout << "Congratulations, you have played my interactive simulation in space\n"
		"I hope you enjoyed this simulation!\n"
		"Goodbye\n" << endl;
}
