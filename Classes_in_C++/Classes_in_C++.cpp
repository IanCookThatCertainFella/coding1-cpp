// Classes_in_C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// Make a 'Human Class with
// String Name
// Int Health
// Int Damage
// A Constructor for parameters for name, health and baseDamage
// void Say Hello()
// void setHealth(by int amount)
// void setDamage(by int amount)
// int gethealth()
// int getdamage

class human {
private:
    string name = "";
    int health = 10;
    int damage = 4;

public:

    human(string givenName, int baseHealth, int baseDamage) {
        name = givenName;
        health = baseHealth;
        damage = baseDamage;

    }

    human() {
        cout << "Oi! This is using the default constructor!";
    }

    void sayHello() {
        cout << "This is the human " << name << ".\nThey have " << health << " health and if they punched you, they'd deal " << damage << " damage.\n";
    }

    void sethealth(int amountHealth) {
        if (amountHealth < 0) {
            health = 0;
        } 
        else if (amountHealth > 999) {
            health = 999;
        }
        else {
            health = amountHealth;
        }
    }

    int gethealth() {
        return health;
    }

    void setdamage(int amountDamage) {
        if (amountDamage < 0) {
            damage = 0;
        }
        else if (amountDamage > 999) {
            damage = 999;
        }
        else {
            damage = amountDamage;
        }
    }

    int getdamage() {
        return damage;
    }
};

int main()
{

    human brother("Nathaniel", 3, 5);
    brother.sayHello();
    brother.setdamage(37);
    brother.sethealth(78);
    cout << "Shazibby!!! Their damage is now " << brother.getdamage() << "!!!\n";
    cout << "Shazooby!!! Their health is now " << brother.gethealth() << "!!!\n";


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
