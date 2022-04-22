// Header and Source Code files for Projects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Functions:
// 0. Description -> Stored in header file
// 1. GetNameFromUser -> function to take a string. --> GetUserName
// 2. OpeningStatement -> function that takes the user name string.
// 3. PlayerChoice -> choose option 1 or 2.
// 4. DeathStatement -> Stored in header file
// 5. LifeStatement -> Stored in header file
// 6. ClosingStatement -> Stored in header file



#include <iostream>
#include <string>
#include "MyFuncts.h" // 4 written functions stored into the header

;using namespace std;

//function block with a total of 3 functions

string GetUserName();
void OpeningStatement(string uIn);
void PlayerChoice();

//global variable block - these are declared for later use in the program
string uIn;
int path;

// main function, this is the beginning and the end of the program.
int main()
{
	Description();
	OpeningStatement(GetUserName());
	PlayerChoice();
	ClosingStatement();

	return 0;
}

//funciton descriptions:

//gets username as a string from the user, and returns a string value to be used by another function.
string GetUserName()
{
	cout << "What is your name?" << endl;
	cin >> uIn;

	return uIn;
}

// gives the opening statement of the program, passes the return value of the GetUserName fuction into its arguement
void OpeningStatement(string uIn)
{
	cout << "Welcome " << uIn << endl;
	cout << "There seems to be a commotion happening on your ship\n"
		"There seems to be a load noice coming from the bridge" << endl;		
}

// give user a path choice, collects input as an integer to choose path.
void PlayerChoice()
{
	cout << "What do you do\n"
		"(1) Head towards the bridge to investigate\n"
		"(2) Follow the nearest crew member\n"
		"Please enter '1' or '2'" << endl;
	cin >> path;
	cout << "\nYou chose path: " << path << endl;
	cout << "\n\n";

	// if player chooses 1 do this
	if (path == 1) 
	{
		DeathStatement();
	}
	// if player chooses 2 do this
	else if (path == 2)
	{
		LifeStatement();
	}
	// catchall if user tries to choose anything other than 1 or 2
	else
	{
		cout << "You entered incorreectly please try again\n\n" << endl;
		PlayerChoice();
	}
	
	
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
