Hangman Game

Description

This is a simple Hangman game implemented in C++. The program selects a random word from a text file (words.txt) and allows the player to guess letters one at a time. The player has up to 6 incorrect guesses before the game is over.

How to Play

The game will display a word with underscores representing each letter.

The player enters a letter to guess.

If the letter is in the word, it will be revealed in its correct positions.

If the letter is incorrect, the player loses a life.

The game continues until the player either correctly guesses the word or runs out of lives.

Features

Reads words from an external words.txt file.

Randomly selects a word for each new game session.

Allows players to guess letters and provides feedback.

Limits incorrect guesses to 6.

Requirements

C++ Compiler (e.g., g++, clang++)

words.txt file containing a list of words, one per line.

Installation and Usage

Clone or download the source code.

Ensure a words.txt file is in the same directory.

Compile the program using a C++ compiler:

g++ -o hangman hangman.cpp

Run the program:

./hangman

Example words.txt File

programming
hangman
developer
computer
cplusplus

Future Improvements

Add graphical representation of the Hangman.

Allow multi-word phrases.

Implement difficulty levels.

Save high scores.
