#include <iostream>			// for In OUt stream
#include <fstream>			// for File Stream		// (Alternatvely, use ifstream for reading)
using namespace std;								// use ofstream for writing

void ReadFromFile() {
	string fileContents;

	ifstream file("file.txt");

	while (getline(file, fileContents)) {
		fileContents << file;
	}
}

void WriteToFile() {
	// opening the "filt.txt file. if it doesn't exist, create it
	ofstream file("file.txt");

	//write a line fo the file... well, to the buffer of the open file
	file << "Play Age of Calamity instead!\n";

	// close the file (saves it to disk)
	file.close();
}

int main() {
	cout << "Play Age of Calamity instead!\n";
}