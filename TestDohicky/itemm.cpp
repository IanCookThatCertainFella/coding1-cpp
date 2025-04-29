#include "itemm.h"



itemm::itemm() {
	location = DUNGEON;		// set the default location for items

}

void itemm::use() {
	cout << "You used the " << name << " to do... something or other in ";
	if (location == DUNGEON) {
		cout << "the dungeon.\n";
	}
	else if (location == COURTYARD) {
		cout << "the courtyard.\n";

	}
	else if (location == MARKET) {
		cout << "the market.\n";

	}
	else if (location == GREATHALL) {
		cout << "the great hall.\n";

	}
	else if (location == INVENTORY) {
		cout << "your inventory\n";

	}
}

void itemm::examine() {
	cout << "This is a " << name << ". It does things.\n";
}
