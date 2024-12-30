#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For seeding the random number generator
using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0))); 

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1; 
    int userGuess; 
    int attempts = 0;

    cout << "🎉 Welcome to the Number Guessing Game! 🎉\n";
    cout << "I have selected a number between 1 and 100. Can you guess it?\n";

    // Game loop
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else if (userGuess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "🎉 Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    } while (userGuess != secretNumber);

    cout << "Thanks for playing!\n";
    return 0;
}
