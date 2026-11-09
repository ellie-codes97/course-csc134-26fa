## Prompt 1 - Plan

You are my pair-programming navigator. I am the driver. I type all code. Do
not write the full program or full function bodies.
Audience: first-semester C++ student, Module 5 (functions).
Task: print the numbers 1 to 10 with their squares, one line each, like "3
squared is 9".
Required functions: main(); int square(int num) returns the square; void
printAnswerLine(int number, int squared) prints one line.
Scope: plan only. 8 steps maximum.
Format: numbered steps. Name each prototype. For each step, say what I should
see when I compile and run.
Path: one file, m5t2.cpp. Prototypes at top, main() in the middle,
definitions at the bottom.

What I did: I followed the plan it gave me, which was to set up the document first by adding #include <iostream> and the helper prototypes, and then go through and implement and run square(int num), printAnswerLine(int number, int squared), and then finally main() and the loop of numbers squared from 1 to 10.

## Prompt 2 (done 3 times) - Gate Checks

Because I did this prompt three times for steps 2-4 of my plan,  I will only put the prompt that I completed things for in this part. Please note that I ran into no errors in the terminal, so I did not run an error prompt. 

Prompt: Navigator only. Do not write code.
I am about to loop numbers 1 to 10 using a for loop, call square(number), then pass both values to printAnswerLine(number, squared), from step 4 of our plan. Here are my four gate checks:
1. Function(s): square(number), printAnswerLine(int number, int squared), for () { loop
2. Prototype: void printAnswerLine(int number, int squared), int square(int num)
3. Place: The functions are listed at the top of M5T2 in lines 11-16, the definitions of the functions are on lines 13- 15 and lines 17-19, and the final combined definitions are at the bottom of M5T2, after int main() {
4. Test: I compile this. Then, this should print ten lines, from 1 squared is 1 through 10 squared is 100, with one number and square per line.
Is anything wrong or missing? Answer in 3 lines or fewer. If all four are
correct, say "Gate checks pass."

What I did: After this, Copilot told me that the definitions (the lines listed below:
void printAnswerLine(int number, int squared) {
    cout << number << " squared is " << squared << endl;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        int squared = square(i);
        printAnswerLine(i, squared);
    }
    (cont.) needed to be at the bottom after main(). I then placed them at the bottom of M5T2 after main() and Copilot told me that it then passed the gate checks.

## Prompt 3 - Review

Prompt: Navigator only. Do not rewrite my code.
Review m5t2.cpp against this spec: main(); int square(int num) returns the
square; void printAnswerLine(int number, int squared) prints one line; output
is 10 lines, 1 to 10.
Format: a list of problems. Each item = line number + one sentence. If there
are no problems, say "Matches the spec."
// CSC 134
// M5T2 - More Practice with Functions
// Ella Jackson
// Partner: AI navigator - GitHub Copilot Chat
// This program will print the numbers 1 to 10 with their squares, one line each


#include <iostream>
using namespace std;

int square(int num); // returns the square of a number
void printAnswerLine(int number, int squared); // prints one line

int square(int num) {
    return num * num;
}

void printAnswerLine(int number, int squared) {
    cout << number << " squared is " << squared << endl;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        int squared = square(i);
        printAnswerLine(i, squared);
    }

What I did: Nothing. Copilot confirmed my code matched the specs, so I took a screenshot of my running program for assignment submission and saved my code.