// Week 4 or maybe 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ian Cook Coding 1 Week 6 spring 25, Feb 25th, 2025

#include <iostream>
#include <string>

using namespace std;

int main()
{
	// building arrays
	// arrays are ordered list of a single type of variable

	// create array of integers with a [size of 10]

	const int MAX_SIZE = 10;	// this variable cannot be changed after this line
								// use all ALL_CAPS to show constants for clarity

	int element = 0;			// keeps track of where in the array we are

	int scores[MAX_SIZE];		// this array has created 10 spots for integers

	// add a value to the first element in the array
	scores[0] = 9001;

	// display the value to confirm that it works
	cout << "The highest score in scores is " << scores[0] << ".\n";

	// add 3 more scores using element++ to keep track of where you are in the list

	element = 1;				// the point at the second element in the list
	scores[element++] = 682;	// the postfix increment operator adds 1 AFTER the line runs
	scores[element++] = 604;
	scores[element++] = 412;

	cout << "the second score is " << scores[1] << ".\n";

	// print all the scores.
		// use a while loop to run through all of the scores.
		// the loop is done when the loop counter is equal to element.

	int counter = 0;
	while (counter < element) {	// while counter is less than element, keep looping
		cout << scores[counter] << ".\n";
		counter += 1;			// add one to the counter every loop
	}

	// create an array of strings named bestFriends
	// use a do-while loop to ask the user to add names or quit.

	//create an array of string variables
	string bestFriends[20];
	int friendCount = 0;

	string input;

	do {
		cout << "Who are your best friends? Add them below!\n";
		cout << "or type 'quit' to quit.\n";
		getline(cin, input);

		// add the fail cases first
		if (input == "quit") {						// if they type quit, stop the loop
			cout << "Thanks for adding!\n";
			break;
		}

		if (friendCount >= 19) {					// if they fill up the list, stop the loop
			cout << "Whoops! That's all the friends we can have!\n";
			break;
		}

		//then add ye functionality
		bestFriends[friendCount++] = input;			// add what the player typed to the array
													// add 1 to friendCount!

	} while (true);

	cout << "Here are your best friends:\n";

	// a for loop runs "for a certain amount of times"
	// a for loop includes the counter, the test and the increment action all on the same line

	// standard for loop looks like this:
	//for(setup; test; action) { code }
	for (int i = 0; i < friendCount; i++) {			// for as long as i (starting at 0)
		cout << i + 1 << ".\t";							// is less than friendCount,
		cout << bestFriends[i] << ".\n";				// add 1 to i and keep looping
	}							

	/*
	
	Setup
		int gameCount = 0;
		string games[size];
	start loop

	0. Greet Player and ask for input
		if input doesn't equal any of the 5 options, tell the player this
	1. Add
		ask the player "what game they want to add"
		get input
		add that name to the array and increment
			gameCount
	2. Edit
		ask the player "what game do they want to edit"
		get input
		for loop to check if the input equals any of the games in the array
			if any do, ask the player "what should it change to?"
				get input
				games[i] = input;
			if nothing does, tell them "game not found"
	3. Remove
		ask the player "what game to they want to remove"
		get input
		for loop to check if the input equals any of the games in the array
			if any do, games[i] = ""
		if nothing does, tell them "game not found"
	4. Show
		for loop to print out all of the values in the array using a comparison to gameCount
			if games[i] = "", use continue to not show it (don't forget to counter += 1 anyway)
	5. Quit
		tell the player "bye"
		break
	
	*/
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
