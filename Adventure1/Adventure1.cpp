// Adventure1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <string>;
#include <cstdlib>;
#include <ctime>;
using namespace std;

int main()
{                                                               
    srand(time(0));                                                                        //seed the random number generator

    cout << "Greetings player! Ready for an adventure?\n";                                 //welcome the player

    cout << "Hark! A horrifying creature reveals itself! Kill it, before it kills you!\n"; //start the encounter

                                                                                           //set up the game
    int health = 10;                                                                       //int health = 10, attack, block, turns = 0
    int enemyHealth = 10;
    int attack = 0;
    int enemyAttack = 0;
    int block = 0;
    int enemyBlock = 0;
    int turn = 0;
    bool game = true;
    bool death = false;
    string input;
    
    while (game == true) {                                                                 //start the loop
        turn += 1;                                                                         //add 1 to turns

        cout << "You have " << health << " HP.\n";

        cout << "The beast has " << enemyHealth << " HP.\nType roll to fight!\n";

        cin >> input;

        if (input == "roll") {
            attack = rand() % 5;
            block = rand() % 5;
            enemyAttack = rand() % 5;
            enemyBlock = rand() % 5;

            cout << "You rolled a " << attack << " to attack and a " << block << " to block.\n";
            cout << "The terrible beast rolled a " << enemyAttack << " to attack and a " << enemyBlock << " to block.\n";

            if (attack >> enemyBlock) {
                enemyHealth = enemyHealth -= attack -= enemyBlock;

                cout << "You landed a hit!\n";

            }

            if (enemyAttack >> block) {
                health = health -= enemyAttack -= block;

                cout << "You got hit!\n";
            }

            if (enemyHealth <= 0) {
                cout << "Congratulations! You won!\n";
                game = false;
            }

            if (turn >= 4) {
                cout << "The foul beast fled for the hills! You won!\n";
                game = false;
            }

            if (health <= 0) {
                cout << "Oh no! Ya done goofed!\n";
                game = false;
                death = true;
            }
        }
        else {
            cout << "Listen buddy, you gotta roll to play.\n";
        }

        if (game == false) {
            
            if (death == false) {
                cout << "That was quite the adventure, am I right?\nWanna keep going?\nType 'yes' to continue.\n";
                cin >> input;
                if (input == "yes") {
                    cout << "That seals the deal! Here we go again!\n";
                    cout << "Hark! A horrifying creature reveals itself! Kill it, before it kills you!\n";
                    enemyHealth = 10;
                    game = true;
                    turn = 0;
                }
                else {
                    cout << "Alrighty then, have a good day!";
                }
            }
        }
    }

    

    
 
    
    //start the encounter
        //randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
        //if block is greater or equal to attack, successful block
        //otherwise, subtract attack value from health.
        //ask the player if they would like to keep adventuring. if they don't, break out of the loop.
 //keep looping while health is greater than zero and fewer than 4 turns have happened

 //if health is greater than 0, congratulate player
 //otherwise, tell the player they're dead.
    
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
