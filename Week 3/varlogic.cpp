#include <iostring> //this sends and receives text from the console
#include <string> //this lets you use string variables
using namespace std; //adds bloat, but stops us from typing "std:: " all the time


//this is where the program starts running
int main() {
	
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
		return 0;	                                //quit the program early
	}
} //this is the end of main