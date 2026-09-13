// CSC 134
// M2T2 - Receipt Calculator
// Ella Jackson
// 9/13/26
#include <iostream>
#include <iomanip>
using namespace std;


int main () {
    // Purpose - Create a simple receipt
    // should also handle sales tax (8%)

    // Declare variables
    string item = "Baked ziti pasta dish";
    double item_price = 5.99;
    double tax_percent = 0.08;  // 8% is 8/100
    double tax_amount;          // tax in $
    double total;         // price + tax


    // Greet the user and take the order
    cout << "Welcome to our CSC 134 restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl;

    // Calculate the meal price
    // Calculate the sales tax and the total price
    tax_amount = item_price * tax_percent; // take 8% of the item price
    total = item_price + tax_amount;



    
    // Print the receipt
    cout << fixed << setprecision(2);
    cout << "Thank you for shopping with us!" << endl;
    cout << "--------------------------------" << endl;
    cout << item << "\t$" << item_price        << endl;
    cout << "Tax" << "\t\t\t$" << tax_amount       << endl;
    cout << "--------------------------------" << endl;
    cout << "Total" << "\t\t\t$" << total << endl;
    cout << endl;
    cout << endl;

    return 0; // no errors
}