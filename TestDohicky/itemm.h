// header files contain declarations
// source files are bigger fans of definitions

#pragma once
#include <iostream>
#include <string>
using namespace std;

enum locations { GREATHALL, DUNGEON, COURTYARD, MARKET, INVENTORY };


class itemm
{
public:
	string name;
	locations location;		// where the item is stored
	itemm();		// contructor	
	void use();			// cout() somethin'
	void examine();		// cout() somethin' else
};

