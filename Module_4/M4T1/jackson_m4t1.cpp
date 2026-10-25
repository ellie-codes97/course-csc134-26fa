// CSC 134
// M4T1
// Ella Jackson
// 10/25/26
// Program Loops 5-3 and 5-6                        

#include <iostream>
using namespace std;

int main() 
{
    // Loop 5-3 Program First
    cout << "Loop 5-3: " << endl;
    // This program demonstrates a simple while loop. 

    int number = 0;

    while (number < 5)
    {
        cout << "Hello\n";
        number++;
    }
    cout << "That's all!\n";

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;


    // Loop 5-6 Program Next
    cout << "Loop 5-6: " << endl;
    // This program displays a list of numbers and
    // their squares.

    const int   MIN_NUMBER = 1,     // Starting number to square
                MAX_NUMBER = 10;    // Maximum number to square

    int num = MIN_NUMBER;           // Counter

    cout << "Number Number Squared\n";
    cout << "----------------------\n";
    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++; // Increment the counter
    }
    return 0;

}