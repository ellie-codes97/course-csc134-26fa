// CSC 134
// M2HW - Question 4
// Ella Jackson
// 10/4/2026

// This program will display a cheer for FTCC's Trojans. 

#include <iostream>
using namespace std;

int main () 
{
    // List all variables
    string letsGo, school, team;
    string cheerOne;
    string cheerTwo;

    // Assign values to variables
    letsGo = "Let's go";
    school = "FTCC";
    team = "Trojans";
    cheerOne = letsGo + " " + school + "!";
    cheerTwo = letsGo + " " + team + "!";

    // Display the cheer
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

    return 0; // no errors
}