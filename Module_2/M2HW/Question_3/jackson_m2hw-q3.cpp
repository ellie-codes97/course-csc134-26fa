// CSC 134
// M2HW - Question 3 - Gold
// Ella Jackson
// 10/4/2026

// This program simulates a pizza ordering/calculator service in which
// the user can order pizzas for a party and the system will calculate 
// the leftover slices of pizza based on the number of visitors, the 
// number of pizzas ordered, and the number of slices per pizza.

#include <iostream>
using namespace std;

int main () {
    
    // Declare variables used in user prompts and calculations
    int visitors; // Number of visitors to the party
    int slicesPerPizza; // Number of slices per pizza the user wants
    int pizzasOrdered; // Number of pizzas ordered by the user
    double slicesPerVisitor = 3.0; // The amount of pizza slices each visitor will get
    double totalSlices; // Total number of slices of pizza
    double leftoverSlices; // The amount of leftover slices of pizza after the party


    // Prompt the user for the number of visitors to the party, the slices per pizza, and the number of pizzas ordered
    cout << "Welcome to the Pizza Ordering Service!" << endl;
    cout << "Please enter the number of visitors to the party: ";
    cin >> visitors;
    cout << "Please enter the number of slices per pizza: ";
    cin >> slicesPerPizza;
    cout << "Please enter the number of pizzas ordered: ";
    cin >> pizzasOrdered;


    // Calculate the total number of slices of pizza based on the number of pizzas ordered and the slices per pizza
    totalSlices = pizzasOrdered * slicesPerPizza;

    // Display the total number of slices of pizza to the user
    cout << "The total number of slices of pizza is: " << totalSlices << endl;


    // Calculate the leftover slices of pizza based on the total number of slices, the slices each visitor should get,
    // and the number of visitors
    leftoverSlices = totalSlices - (visitors * slicesPerVisitor);


    // Display the leftover slices of pizza to the user
    cout << "The number of leftover slices of pizza is: " << leftoverSlices << endl;

    return 0; // no errors
}
