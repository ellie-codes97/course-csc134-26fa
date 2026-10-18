// CSC 134
// M3LAB2
// Ella Jackson
// 10/18/2026
// This program will ask the user to input a numerical grade
// and will output the corresponding letter grade based on the following scale:
// A: 90-100
// B: 80-89
// C: 70-79
// D: 60-69
// F: 0-59

#include <iostream>
using namespace std;

int main () {
    // First establish a layout for the program
    // 1) Prompt user to enter numerical grade (0-100)
    // 2) Use appropriate variable to store the input
    // 3) Use if/else if/else statements to determine letter grade
    // 4) Output the letter grade to the user

    // Declare the variable we will need
    int grade; // to store the numerical grade


    // Prompt the user to enter a numerical grade
    cout << "Welcome to the grade calculator program! " << endl;
    cout << "Please enter a numerical grade (0-100): ";
    cin >> grade; // store the input in the variable grade

    // Use if/else if/else statements to determine letter grade
    if (grade >= 90 && grade <= 100) {
        cout << "Based on your numerical grade, your letter grade is: A" << endl;
    } else if (grade >= 80 && grade < 90) {
        cout << "Based on your numerical grade, your letter grade is: B" << endl;

    } else if (grade >= 70 && grade < 80) {
        cout << "Based on your numerical grade, your letter grade is: C" << endl;

    } else if (grade >= 60 && grade < 70) {
        cout << "Based on your numerical grade, your letter grade is: D" << endl;

    } else if (grade >= 0 && grade < 60) {
        cout << "Based on your numerical grade, your letter grade is: F" << endl;

    } else {
        cout << "Invalid input. Please enter a number between 0 and 100." << endl;
    }

    // Finish the interaction with the user
    cout << "Thank you for using the grade calculator program! " << endl;
    cout << "Have a great day! " << endl;

    return 0; // exit without error

}