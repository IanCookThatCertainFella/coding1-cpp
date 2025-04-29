#include <string>
#include <iostream>			// for In OUt stream
#include <fstream>			// for File Stream		// (Alternatvely, use ifstream for reading)
using namespace std;

void ReadFromFile() {
	// string holds what the file contains
	string fileContents;		// how do I add the contents of the file without using cout in the while loop?

	ifstream file("file.txt");

	while (getline(file, fileContents)) {
		cout << fileContents << "\n";
	}

	file.close();
}

void WriteToFile() {
	// opening the "filt.txt file. if it doesn't exist, create it
	ofstream file("file.txt");

	//write a line fo the file... well, to the buffer of the open file
	file << "Play Age of Calamity instead!\n";

	// close the file (saves it to disk)
	file.close();
}

void WriteArrayToFile(string* arr, int size) {

	ofstream file("favs.txt");					// open (or create) the file "favs.txt"

	if (!file.is_open()) {
		return;
	}

	for (int i = 0; i < size; i++) {			// for each line in the array, add a line to the file
		file << arr[i] << "\n";
	}
}

void ReadArrayFromFile() {
	string arr[10];


	
	ifstream file("favs.txt");					// open (or create) the file "favs.txt"

	if (!file.is_open()) {
		return;
	}
	for (int i = 0; i < 10; ++i) {
		file >> arr[i];
	}

	file.close();

	for (int i = 0; i < 10; ++i) {
		if (arr[i] == "") {
			break;
		}
		else {
			cout << arr[i] << "\n";
		}
	}
}