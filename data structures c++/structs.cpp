#include <iostream>
#include <stdio.h>

/*

Structs

A structure data type that allows grouping different types of data together.
Great for organizing and efficiency. 

*/

struct Player {
    // member data
    std::string name = "Unknown"; // using std::string to allow for variable name lengths
    int score = 0;

    // member constructors
    Player() : name("Unknown"), score(0) {} // default constructor
    Player(std::string n, int s) : name(n), score(s) {}

    // member deconstructor
    ~Player() {
        std::cout << "Deconstructor for Player Struct";
    }

    // member functions
    void displayStats() {
        printf("Player Name: %s\n Score: %i\n", name.c_str(), score);
        // std::cout << "Player Name: " << name << "Score: " << score << "\n";
    }

};


int main() {

    Player Tanish;
    Tanish.name = "Tanish";
    Tanish.score = 50;

    Player UserTwo = {"UserTwo", 45}; // Another way to initialize structs

    Tanish.displayStats();

    return 0;
}