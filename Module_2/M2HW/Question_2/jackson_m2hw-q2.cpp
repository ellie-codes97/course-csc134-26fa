// CSC 134
// M2HW - Question 2
// Ella Jackson
// 10/4/26

// This program is used by General Crates, Inc. to calculate
// the volume, cost, customer charge, and profit of a crate
// of any size. It calculates this data from user input, which
// consists of the dimensions of the crate.
// Due to economic fluctuations, the cost and charge per cubic 
// foot have been changed. The cost is now $0.30 per cubic foot,
// and the charge is now $0.52 per cubic foot, per Management's 
// request, as they determined that a charge any higher than $0.52
// would cause General Crates, Inc. to lose customers.

#include <iostream>
#include <iomanip>
using namespace std;

int main () 
{
    // Constants for cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGED_PER_CUBIC_FOOT = 0.52;

    // Variables
    double length,  // The crate's length
           width,   // The crate's width
           height,  // The crate's height
           volume,  // The volume of the crate
           cost,    // The cost to build the crate
        charge,     // The customer charge for the crate
        profit;     // The profit made on the crate
    
    // Set the desired output formatting for nummbers.
    cout << setprecision(2) << fixed << showpoint;

    // Prompt the user for the crate's length, width, and height
    cout << "Enter the dimensions of the crate (in feet):\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // Calculate the crate's volum, the cost to produce it,
    // the charge to the customer, and the profit.
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGED_PER_CUBIC_FOOT;
    profit = charge - cost;

    // Display the calculated data
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet. \n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "ProfitL $" << profit << endl;
    return 0;
}