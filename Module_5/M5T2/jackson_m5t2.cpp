// CSC 134
// M5T2 - More Practice with Functions
// Ella Jackson
// 11/8/2026
// Partner: AI navigator - GitHub Copilot Chat
// This program will print the numbers 1 to 10 with their squares, one line each


#include <iostream>
using namespace std;

int square(int num); // returns the square of a number
void printAnswerLine(int number, int squared); // prints one line


int main() {
    for (int i = 1; i <= 10; i++) {
        int squared = square(i);
        printAnswerLine(i, squared);
    }
    return 0;
}

int square(int num) {
    return num * num;
}

void printAnswerLine(int number, int squared) {
    cout << number << " squared is " << squared << endl;
}