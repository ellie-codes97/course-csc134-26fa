// CSC 134
// M4HW1 - Gold
// Ella Jackson
// 11/1/2026
// This program will print a times table based on user input.
// The user will input a number between 1-12 and the program will print a times table for all numbers from 1 
// to the user input number.
// As a bonus, the program will also ask the user for the initial number they want to be multiplied by their second
// input number (the number between 1-12). The program will also repeatedly ask for a number between 1-12 until
// the user inputs a valid number.

#include <iostream>
using namespace std;

int main() {

    int userInput;
    int initialNumber;

    // Ask the user for the initial number.
    cout << "Please enter the initial number you want to be multiplied by: ";
    cin >> initialNumber;

    // Ask the user for a number between 1-12 and validate the input.
    cout << "Please enter a number between 1 and 12: ";
    cin >> userInput;

    while (userInput < 1 || userInput > 12) {
        cout << "Invalid input. Please enter a number between 1 and 12: ";
        cin >> userInput;
    }

    // Print the times table based on user input.
    cout << "Times Table for " << initialNumber << " up to " << userInput << ":\n";
    for (int i = 1; i <= userInput; ++i) {
        cout << initialNumber << " times " << i << " is " << initialNumber * i << endl;
    }
}