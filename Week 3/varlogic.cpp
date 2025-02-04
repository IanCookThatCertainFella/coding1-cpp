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
} //this is the end of main