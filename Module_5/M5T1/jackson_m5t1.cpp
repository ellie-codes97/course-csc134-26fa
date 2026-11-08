// CSC 134
// M5T1
// Ella Jackson
// 11/8/2026
// For this assignment, I will write one void function, and one value returning function, and call them both in main().

#include <iostream> 
#include <string> 
using namespace std;

// declare our functions 
string formatAnswer(int answer); 
void printAnswer(string msg); 

int main() { 
    int answer = 5; 
    string message; 
    message = formatAnswer(answer); 
    printAnswer(message); 
    return 0; 
} 

// define functions 

string formatAnswer (int answer) { 
    // Make a nice looking string containing the answer 
    string answerMessage; 
    answerMessage = "The answer is "; 
    answerMessage += to_string(answer); 

    return answerMessage; 
} 

void printAnswer(string msg) { 
  // display our message 
  cout << msg << endl; 
}