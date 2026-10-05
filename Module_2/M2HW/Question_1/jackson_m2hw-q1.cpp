// CSC 134
// M2HW - Question 1 - Gold
// Ella Jackson
// 10/4/2026

// This program simulates bank transactions by
// prompting the user to enter their name, starting
// account balance, amount of deposit, and amount of withdrawal.
// The program will then display the name on the account, the
// account number, and the final account balance.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables for user input
    string first_name, last_name, full_name; // holds the user's name
    int account_number = 127601526; // the user's banking account number
    int amount_deposit; // the amount the user wants to deposit
    int amount_withdrawal; // the amount the user wants to withdraw
    double starting_balance; // the user's starting account balance
    double final_balance; // the user's final account balance


    // Prompt account holder for their name and greet them
    cout << "Welcome to the bank!" << endl;
    cout << "Please enter your first name: ";
    cin >> first_name;
    cout << "Please enter your last name: ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Account holder name confirmed! Thank you, " << full_name << ". Let's get started with your account." << endl;


    // Prompt the user for their starting balance, deposit amount, and withdrawal amount
    cout << "Please enter your starting account balance: $ ";
    cin >> starting_balance;
    cout << "Please enter the amount you would like to deposit: $ ";
    cin >> amount_deposit;
    cout << "Please enter the amount you would like to withdraw: $ ";
    cin >> amount_withdrawal;


    // Calculate the final account balance
    final_balance = starting_balance + amount_deposit - amount_withdrawal;

    // Display all the necessary information to the user
    cout << "Account Summary for " << full_name << ": " << endl;
    cout << "--------------------------------" << endl;
    cout << "Account Number: " << account_number << endl;
    cout << "Current Balance: $ " << final_balance << endl;
    cout << "Thank you for banking with us, " << full_name << " ! Have a great day!" << endl;

    return 0; // no errors
}