// CSC 134
// M2T1 - Product Sales
// Ella Jackson
// 9/12/26
// We're going to make the simplest possible
// "checkout" machine.
#include <iostream>
#include <iomanip> // for adding two decimal places to the prices
using namespace std;


int main() {

    // Set up all variables
    string first_name, last_name, full_name; // holds customer name
    string product = "comics"; // changed from "apples" to "comics"
    int amount_requested; // how many the customer wants to buy
    double cost_each = 0.99;
    double total_cost;


    // Greet the customer
    cout << "Welcome to our " << product << " store!" << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    // Ask how much they'd like to purchase
    cout << "How many " << product << " would you like to purchase today? ";
    cin >> amount_requested;

    // Calculate total price
    total_cost = amount_requested * cost_each;

    // Formatting: Set all prices to 2 decimal places
    cout << setprecision(2) << fixed;

    // Give the result
    cout << "For " << amount_requested << " " << product << "," << endl;
    cout << "the total cost will be: $ " << total_cost << endl;
    cout << "Thank you for shopping with us, " << first_name << "!" << endl;
    cout << "Have a great day!" << endl;



    return 0; // no errors
}