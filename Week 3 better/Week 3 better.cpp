// Week 3 better.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //this sends and receives text from the console
#include <string> //this lets you use string variables
#include <cstdlib> //for rand and srand()
#include <ctime> // for tiem
using namespace std; //adds bloat, but stops us from typing "std:: " all the time


//this is where the program starts running
int main() {
	//Always seed your random number ONCE at the beginning to avoid shenanigans
	srand(time(0));      //seeding the number generator
	/*
	bool debug = true;			//TURN THIS TO FALSE before shipping

	if (debug) cout << "DEBUG MODE IS ON\n";

	cout << "This is the start of Week 3's lecture on \n";
	cout << "\tVariables and Logic!\n";

	if (1 + 1 == 2) {
		cout << "We have the basics down.\n";
	} //end of if(1 + 1)

	if (2 + 1 == 4) {
		cout << "Hang on a minute...!\n";
	} //end of if(2+ 1)

	if (1 + 1 != 2) {
		cout << "What is the world coming to?!\n";
	} //end of if(1 + 1 !=)


	if (true) {
		cout << "This line of code will always run\n";
	} //end of if(true)

	if (false) {
		cout << "This line of code will never run \n";
	} //end of if(false)

	//variables!
	//integets, floats, doubles, characters, strings and booleans
	//we're making a new variable of the type "int" awith the name "playerScore",
	//with the value of 255
	int playerScore = 255;

	//declaring (and defining) the variable, type int, name = playerTwoScore;
	int playerTwoScore = 0;

	//constant values cannot change their value, generally written in all caps so they can be seen
	//in a crowd 
	const float EARTH_GRAVITY = -9.81f;	//acceleration in meters/second

	cout << "Player 1 score = " << playerScore << ".\n";
	cout << "Player 2 score = " << playerTwoScore << ".\n";
	cout << "Earth's gravity is " << EARTH_GRAVITY << " meters/second.\n";

	//we're making a constant variable, type double, named PI, with the value of 3.14159
	const double PI = 3.14159;
	
	char answer = 'n';	//this stores the user's input

	cout << "Would you like to keep playing?\n";	//ask the user a qustion
	cin >> answer;	                                //get input

	if (answer == 'y') {	                        //test the input
		cout << "Hooray! Let's do it again!\n";	    //print text
				                                    //quit the program early
	}
	else {
		cout << "Thanks for playing!\n";
		return 0;
	}
	
	string profName = "Dumbledore";
	string user = "BMO";
	string pass = "videogames";
	string input = "";                              //this will store the user's text input

	cout << "What is your username?\n";
	cin >> input;                                   //fore example: input = "BMO"

	if (input == user) {
		cout << "Whats is your password?\n";
		cin >> input;

		if (input == pass) {
			cout << "Hellow Bmo! Professor " << profName << " has a question for you.\n";
		}
		else {
			cout << "Wrong password. Nice try, Jake!\n";
		}
	}
	else {
		cout << "Username not recognized.\n";
	}
	*/
	bool playerIsAlive = true;
	int score = 0;								    //keeps track of the player's score

	//while loop, it runs as long as the test is true
	//while(test) { code block }
	while (playerIsAlive) {
		string input;

		//score == score + 5;
		score += 5; //combined assignment operator, it adds 5 to the value of score

		//if (debug) cout << "score = " << score << ".\n";

		cout << "You live!\n";
		cin >> input;

		if (input == "no") {
			playerIsAlive = false;
			if (playerIsAlive == false) {
				cout << "Alright, if you want.\n";
				cout << "Your score is " << score;
			}
		}

	}
	//random

	//#include <cstdlib> for rand and srand and #

	cout << "This is a random number: " << rand() << ".\n";

	cout << "here are ten random numbers:\n";
	int count = 0;
	while(count < 10) {
		count += 1;        // add one to the count
		cout << (rand() % 10) + 1 << "\n";  //display a random number
	}
	


} //this is the end of main

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
