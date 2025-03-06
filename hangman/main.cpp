#include "game.h"
#include "game.cpp"

int main() {
    srand(time(0));
    bool playAgain = true;
    char choice;
    cout << "Welcome to Hangman!" << endl;
    while (playAgain) {
        hangman();
        cout << "Do you want to play again? Y/N" << endl;
        cin >> choice;
        if (choice == 'Y') {
            continue;
        }
        else if (choice == 'N') {
            playAgain = false;
        }
        else {
            cout << "Invalid choice. Exiting program." << endl;
            playAgain = false;
        }
        cout << "Have a great day!" << endl;
    }


}