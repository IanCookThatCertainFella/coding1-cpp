// Actually_Funcitonal_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

// global variables go at the top, so that all the functions can use them
int currentShirtSizeElement = 0;        // this keeps track of our shirtSize array


// declaring and defining a new function
// the function must be declared before it can be used (say it exists)
// the function CAN be defined later in the code (say what it does)
// this function returns nothing, hence "void"
// this function's name is "sayHello()"
void sayHello() {
    cout << "Ahoy!\n";
}

void sayGoodbye() {
    cout << "Yo, see ya!\n";
}


// adding 2 numbers with (parameters)
// parameters go inside the parenthesis
// they are the INPUTS for our function
// optionally, we can add default values for the input parameters
// if there is a default value, ALL of the values need default values
// you're creating two varaibls in the input parameter that only exist in their function by default
void add(int number1 = 2, int number2 = 0) {
    // cout << "the sum of number1 and number2 is";
    cout << "The sum of " << number1 << " and " << number2 << " is ";
    cout << number1 + number2 << endl;
}

// overload the add function
// this one adds two floats!
// don't forget to call this function in main
void add(float firstNum, float secondNum) {
    cout << firstNum << " plus " << secondNum << " equals ";
    cout << firstNum + secondNum << endl;
}

// overload add() to accept two strings and make no sense
// using concatenation!
void add(string ber1, string ber2) {
    cout << ber1 << " plus " << ber2 << " equals ";
    cout << ber1 + ber2 << endl;
}

// return types - the OUTPUT of the function
bool askYN(string question = "y/n?") {
    // in a do while loop
        // ask the user the question
        // get input
        // if y, return true
        // if n, return false
        // else, loop again

    do {
        cout << question << " (y/n) " << endl;
        string input;
        getline(cin, input);

        if (input == "y") {
            return true;        // this quits the function
        }
        else if (input == "n") {
            return false;
        }
        else {
            cout << "Please type 'y' or 'n'.\n";
        }
    } while (true);
}

// show array elements function
// doesn't return anything.
// accepts one parameter as a pointer (classified info for the future)
// call with show(names, 3;

void show(string* array, int arraySize) {
    cout << "Here be the contents of this array:\n";
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << endl;
    }
}

// create a function that accepts a pointer to an array of strings
// let it add another element as long as there are spaces

void addShirtSize(string* array) {
    string input;
    bool full = false;

    while(true) {
        if (currentShirtSizeElement > 9) {
            cout << "That is all the shirt sizes we can support. Please purchase the next version for more storage!";
            break;
        }
        cout << "Please add a shirt size to the array.\n";
        cout << "Or type 'done' to stop\n";
        getline(cin, input);

        if (input == "done") {
            break;
        }

        array[currentShirtSizeElement++] = input;
    }
}

int main()
{
    // SETUP
    string shirtSizes[10];      // creates the array of shirtSHizes (told to keep the typo)
    // int currentSize = 0;
    addShirtSize(shirtSizes);
    show(shirtSizes, currentShirtSizeElement);

    string playerName = "Ian";  // local variable that only exists in the area where it is declared (playerName only exists in main and i only exists in for loops)
    // global variables exist in EVERY script, which can cause problems when combining scripts (global variables that share the same name get extremely crashy-y)
    // avoid global variables if at all possible
        // unless you're careful/have a cool idea

    // calling sayHello() function
    sayHello();

    sayGoodbye();

    add(23, 2);     // when you call the function, you can set to input parameters
    add();
    add(24, 1);

    add(0.6f, 0.7f);    // float needs 'f' after the numbers

    add("five", "seven");

    string names[3];

    names[0] = "Jack";
    names[1] = "Sam";
    names[2] = "Armstrong";

    int nameCount = 0;

    for (int i = 0; i < 3; i++) {
        cout << names[i] << endl;
    }

    show(names, 3);

    if (askYN("Do you like pizza?")) {
        cout << "Lets get some pizza for lunch!\n";
    }
    else {
        cout << "Go away!";
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
