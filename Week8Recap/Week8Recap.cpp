// Week8Recap.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Ian Cook
// Week 8 Recap

#include <iostream>
#include <string>
using namespace std;
#include <cstdlib>      // c standard library
#include <ctime>        // c time library


int main()
{
    /*
    cout << "What's your favorite pizza topping - Cheese or Pepperoni?\n";
    string input = "";
    getline(cin, input);

    if (input == "Cheese") {
        cout << "Hey! That's my favorite too!";
    }
    else if (input == "Pepperoni") {
        cout << "Not my favorite, but cool that you like it.";
    }
    else if (input == "Sausage") {
        cout << "Creative!";
    }
    else {
        cout << "That's a pizza topping?";
    }

    */

    // guess the number game
    // have the computer choose a random number between 1 and 10 (inclusive)
    // while loop
    // have the player guess the number
    // If it's too high or low, let them know
    // If they're right, tell them and end the loop
    // Don't forget
        // #include <cstdlib>
        // #include <ctime>
        // in main(), srand(time(0));

    // seed the RNG
    srand(time(0));
    string input = "";

    // choose the answer using the RNG, then dividing by 10 and getting the remainder and then keeping it inside 1 and 10 instead of 9 and 0
    int answer = rand() % 10 + 1;
    bool debug = true;      // Turn this to false when shipping

    cout << "I'm thinking of a number between 1 and 10 (including 1 and 10). Guess it! If you can't get it, cry 'Uncle!'\n";

    while (true) {
        getline(cin, input);
        
        if (debug == true) {
            cout << answer << "\n";
        }

        if (input == "Uncle!") {
            cout << "Ha! I win!\n";
            break;
        }
        
        try {
            int playerGuess = stoi(input);
        }
        catch (invalid_argument) {
            cout << "Hey! That's not a number or an admission of defeat! Try again!\n";
            continue;
        }
        
        if (stoi(input) == answer) {
            cout << "You got it! I lose!\n";
            break;
        }

        if (stoi(input) > answer) {
            cout << "You're too high! Go lower!\n";
        }
        else {
            cout << "You're too low! Go higher!\n";
        }
    }

    


    return 0;
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
