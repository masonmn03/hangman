#include "game.h"

void hangman() {
    cout << "\n-- Hangman --\n\n";
    // open file
    ifstream inFile;
    inFile.open("words.txt");
    if (!inFile.good()) {
        cout << "Error in input file\n";
        return;
    }
    
    string word, guessWord, realWord;
    vector<string> words;
    while (getline(inFile, word)) {
        words.push_back(word);
    }
    inFile.close();
    
    //choose random word
    int wordPos = rand() % words.size();
    
    realWord = words[wordPos];
    cout << realWord << endl; // TESTING
    
    //setup guess word
    guessWord = "";
    for (int i = 0; i < realWord.size(); i++) {
        guessWord += "_";
    }
    
    cout << endl;
    int wrongGuesses = 0;
    while (wrongGuesses < 6 && guessWord != realWord) {
        cout << "Word: ";
        for (int i = 0; i < guessWord.size(); i++) {
            cout << guessWord[i] << " ";
        }
        cout << endl;
        cout << "Wrong guesses left: " << (6 - wrongGuesses) << endl;

        char guess;
        cout << "Enter a letter: ";
        cin >> guess;

        // Check if guess is in the word
        bool found = false;
        for (int i = 0; i < realWord.size(); i++) {
            if (realWord[i] == guess) {
                guessWord[i] = guess;
                found = true;
            }
        }

        if (!found) {
            wrongGuesses++;
            cout << endl << "Incorrect guess!\n" << endl;
        } else {
            cout << endl << "Good guess!\n" << endl;
        }
    }

    // Endgame messages
    if (guessWord == realWord) {
        cout << "\nCongratulations! You guessed the word: " << realWord << endl;
    } else {
        cout << "\nGame over! The correct word was: " << realWord << endl;
    }
}