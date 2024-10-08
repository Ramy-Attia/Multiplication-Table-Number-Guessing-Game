# Multiplication-Table-Number-Guessing-Game
This repository contains two C programming tasks:

1. Multiplication Table
A C program that displays a multiplication table for numbers 1 to 12 in a square table format.
The output resembles a classic multiplication table where rows and columns represent the numbers being multiplied.
2. Number Guessing Game
A C program that generates a random number between 1 and 10 and prompts the user to guess the number.
The game provides feedback ("Too high!" or "Too low!") based on the user’s guess until the correct number is guessed.
Uses rand() function to generate the random number:
int guessAnswer = (rand() % 10) + 1;
How to Run
Clone this repository.
Compile the C files using a C compiler like GCC:
gcc multiplication_table.c -o multiplication_table
gcc number_guessing_game.c -o number_guessing_game
Run the executable:
./multiplication_table
./number_guessing_game
