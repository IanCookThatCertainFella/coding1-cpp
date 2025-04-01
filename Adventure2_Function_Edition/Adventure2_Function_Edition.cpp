// Adventure2_Function_Edition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>;
#include <ctime>;

using namespace std;

int health = 20;

int totalTreasure;

bool askYesNo(string question = "Question?") {
    do {
        cout << question;

        // cout << "Debug\n";

        string input;

        getline(cin, input);

        if (input == "Yes") {
            return true;
        }
        else if (input == "No") {
            return false;
        }
        else {
            cout << "I asked 'Yes' or 'No' and I mean 'Yes' or 'No'.\n";
        }
    } while (true);
}

int rollDice(int sides = 6) {
    return rand() % sides;
}

void ending() {
    cout << "With a horrible, guttural yet wet crunch, your lifeless body hits the ground.\n";
    cout << "Your last thoughts being, 'I probably should have became a farmer instead...'\n";
    cout << "Your lifeless corpse had " << totalTreasure << " lining its pockets.\n\n";

}

void adventure() {
    int attack = rollDice(5);
    int block = rollDice(5);
    int goldEarned = rollDice(20) + 1;

    cout << "\nA foul beast attacks! Your blades clash! And...!\n\n";

    cout << "You rolled a " << block << " and the beast rolled a " << attack << endl << endl;

    if (attack > block) {
        cout << "Oh no! The beast lands its blow and flees! That hurt, and no treasure for you!\n";
        health = health -= attack -= block;
    }
    else {
        cout << "Nice! The beast was slain! Now you get paid! " << goldEarned << " gold for you!\n";
        totalTreasure = totalTreasure += goldEarned;
    }

    cout << "Your total health is " << health << " right now.\n";
    if (totalTreasure != 1) {
        cout << "And " << totalTreasure << " shiny coins line your pocket at the moment.\n\n";
    }
    else {
        cout << "And a single shiny coin lines your pocket at the moment.\n\n";
    }
    
}

void story() {
    cout << "Your uncle died and gave you a sword... perfect time to make some cash fighting monsters!\n";
}



int main()
{
    srand(time(0));

    story();
    do {
        if (askYesNo("Would you like to go out, and pillage the land for treasure? 'Yes' or 'No'?\n")) {
            adventure();
        }
        else {
            if (health <= 5) {
                cout << "Yeah, that's probably a smart idea. I don't think arms are supposed to bend that way! You should get that checked out.\n";
            }

            cout << "And with that, your journey ends. Your final health and earnings are " << health << " and " << totalTreasure << " respectively.\n\n";
            break;
        }
    } while (health > 0);

    if (health <= 0) {
        ending();
    }
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
