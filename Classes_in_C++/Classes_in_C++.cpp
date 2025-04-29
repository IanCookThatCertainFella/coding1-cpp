// Classes_in_C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool debug = true;

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
protected:
    string name;
    int health;
    int damage;

public:

    human(string givenName = "", int baseHealth = 10, int baseDamage = 4) {
        name = givenName;
        health = baseHealth;
        damage = baseDamage;
    }

    void sayHello() {
        cout << "This is the human " << name << ".\nThey have " << health << " health and if they punched you, they'd deal " << damage << " damage.\n";
    }

    virtual void sethealth(int amountHealth) {
        if (debug) {
            cout << "at top of sethealth(amounthealth), health = " << health << ", amountHealth = " << amountHealth << ".\n";
        }

        health += amountHealth;

        if (health < 0) {
            health = 0;
        } 
        else if (health > 999) {
            health = 999;
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

    string getname() {
        return name;
    }

    void setName(string givenName) {
        name = givenName;
    }

    void setHurt(int amounthurt) {
        amounthurt = damage;
        health -= amounthurt;
    }
};  // end of human class

// if private or protected, all public things in the human class are made private
class barbarian : public human {
    // this class should inhereit all of the things that a human has
    // add a constructor
    // add a yell() funciton
    // add a doubleSwing() function.

public:
    barbarian(string givenName = "", int baseHealth = 10, int baseDamage = 4) {
        sethealth(baseHealth);
        setName(givenName);
        setdamage(baseDamage);
    }

    void Yell() {
        cout << "The Barbarian unleashes an inhuman yell, hurting his teams' ears and boosting their stats in frustration!.\n";
    }

    void doubleSwing(human& target) {
        cout << "The barbarian swings both weapons at " << target.getname() << "!\n";

        // call the setDamage() function on the human target
        // use the damage from "This" instance of a barbarian
        // the damage because it's a double swing
        int tempDamage = this->getdamage() * 2;
        target.sethealth(-tempDamage);
    }

};  // end of barbarian class

class shopkeep : public human {
protected:
    int gold;
    string shopName;
public:
    shopkeep() {
        gold = 15;
    }

    void setShop(string givenShop) {
        shopName = givenShop;
    }

    string getShop() {
        return shopName;
    }

    void sethealth(int baseHealth) override {
        health += baseHealth; 

        if (health <= 0) {
            cout << "The proprietor of " << shopName << " has died.\n";
            cout << "They dropped " << gold << " gold.\n";
        }

    }

    





};

int main()
{
    barbarian destructor("Destructor", 22, 4);
    destructor.sayHello();

    shopkeep Geraldo();

    human brother("Nathaniel", 3, 5);
    brother.sayHello();
    brother.setdamage(37);
    brother.sethealth(78);
    cout << "Shazibby!!! Their damage is now " << brother.getdamage() << "!!!\n";
    cout << "Shazooby!!! Their health is now " << brother.gethealth() << "!!!\n";
    brother.sayHello();

    destructor.doubleSwing(brother);
    brother.sayHello();

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
