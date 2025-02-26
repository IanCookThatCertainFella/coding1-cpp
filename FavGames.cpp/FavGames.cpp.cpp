// FavGames.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int MAX_SIZE = 15;

	int gameCount = 0;
	string games[MAX_SIZE];

	string input;

	bool full = false;

	bool test = true;

	cout << "I like cool games... let's make a list of your favorite games.\n";

	do {
		cout << "Type:\n";
		cout << "'add' to add one to the list,\n'edit' to change the name of a game you have added,\n";
		cout << "'remove' to get rid of one you have added,\n'show' to see the list,\n 'quit' to quit the program.\n";
		getline(cin, input);

		if (input == "quit") {
			cout << "See ya later!";
			break;
		}

		if (input == "add") {
			if (gameCount > 19) {
				cout << "Maximum game count reached.";
				full = true;
			}
			
			if (full == false) {
				cout << "Alright, what do you want to add?\n";
				getline(cin, input);
				games[gameCount++] = input;
			}
		}

		if (input == "edit") {
			cout << "What game do you want to edit?\n";
			getline(cin, input);

			for (int i = 0; i < gameCount; i++) {
				if (games[i] == input) {
					cout << "What would you like to change it to?\n";
					getline(cin, input);
					games[i] = input;
					test = true;
				}
			}

			if (test == false) {
				cout << "Game not found. Maybe a typo?\n";
			}

			test = false;
		}

		if (input == "remove") {
			cout << "Which game should be removed?\n";
			getline(cin, input);

			for (int i = 0; i < gameCount; i++) {
				if (games[i] == input) {
					games[i] = "";
					test = true;
				}
			}

			if (test == false) {
				cout << "Game not found. Maybe a typo?\n";
			}

			test = false;

		}

		if (input == "show") {
			cout << "Here are your favorite games:\n\n";
			
			for (int i = 0; i < gameCount; i++) {
				if (games[i] == "") {
					continue;
				}
				cout << games[i] << "\n";
			}

			cout << "\n";
		}
		
	} while (true);
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
			if games[i] = "", use continue to not show it
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
