#include "filemgmt.h"		// import the extra functions that we have made
#include "itemm.h"







// read array from file. that's homework.
// in class assignment:
// in a new source file (.cpp) with a header file (.h)
// create a new class named item with the following variables and functions
	// string name, enum location, item(), use(), examine()

int main() {
	cout << "Play Age of Calamity instead!\n";

	ReadFromFile();
	WriteToFile();

	itemm itemArray[5];			// this calls the constructor 5 times...

	itemm gun;					// each of these also calls the constructor

	gun.name = "Sasha";

	gun.location = DUNGEON;

	itemArray[0] = gun;

	itemm sandvich;

	sandvich.name = "Sandvich";

	sandvich.location = COURTYARD;

	itemArray[1] = sandvich;

	itemm shotgun;

	shotgun.name = "Frontier Justice";

	shotgun.location = GREATHALL;

	itemArray[2] = shotgun;

	itemm sword;

	sword.name = "Fi";

	sword.location = INVENTORY;

	itemArray[3] = sword;

	itemm hammer;

	hammer.name = "Mjölnir";

	hammer.location = MARKET;

	itemArray[4] = hammer;

	gun.use();

	for (int i = 0; i < 5; i++) {
		itemArray[i].examine();
	}

	cout << "The 4th thing's name is " << itemArray[2].name << ".\n";

	string favs[100];
	int nextIndex = 0;
	cout << "Gimme your favorites:\n";

	while (true) {
		string input;
		cout << ">> ";					// to store the user's input
		getline(cin, input);				// get the user's input

		if (input == "done") {				// check to see if they're done
			break;							// if so, skedaddle
		}
		favs[nextIndex] = input;			// otherwise, assign the user's input to the array
		nextIndex++;						// and point to the next element in the array
	}

	WriteArrayToFile(favs, nextIndex);

	ReadArrayFromFile();
}
