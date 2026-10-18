// CSC 134
// M3HW1 - Gold
// Ella Jackson
// 10/18/2026
// This assignment is all four questions in one file.
// The description of each question is in the comments above the code for that question.
// Screenshots of the output for each question are in the Module_3/M3HW1/program_screenshots folder.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main () {

    // Question 1: A simple chat bot program that has a short conversation with the user.
    cout << "Question 1: " << endl;
    // Question 1's code will go here.

    // Establish variables for the chat bot program
    string user_name; // the user's name, whatever they input will be stored in this variable
    std::string answer; // the user's answer to the chat bot's questions, whatever they input will be stored in this variable

    // Greet the user and ask for their name
    cout << "Hello! I am a C++ program. What is your name? " << endl;
    cin >> user_name; 

    // Ask the user a question and store their answer
    cout << "Nice to meet you! " << endl;
    cout << "Do you like me, " << user_name << "? Please type yes or no. " << endl;
    cin >> answer;

    // If else statements
    if (answer == "Yes") {
        cout << "Yay! I like you too!" << endl;
    } else if (answer == "No") {
        cout << "Oh no! That's okay, I still like you!" << endl;
    } else {
        cout << "I'm sorry, I didn't understand your answer. Please type yes or no." << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;



    // Question 2: Prior receipt calculator from Module 2 with the added functionality of asking the user for
    // the meal price and if the order is dine in or takeout, to which a tip is added.
    cout << "Question 2: " << endl;
    // Question 2's code will go here.

    // Declare variables
    string item = "Baked ziti pasta dish";
    double item_price; // to store the price of the item
    int order_type; // to store the order type code (1 = dine in, 2 = takeout)
    double tip_percent = 0.15;  // 15% is 15/100 (based on order type)
    double tip_amount;          // tip in $
    double tax_percent = 0.08;  // 8% is 8/100
    double tax_amount;          // tax in $
    double total;         // price + tax

    // Greet the user and take the order
    cout << "Welcome to our CSC 134 restaurant!" << endl;
    cout << "You ordered one " << item << "." << endl;
    cout << "Please enter the price of the item: ";
    cin >> item_price; // store the input in the variable item_price
    cout << "Is this order for dine in or takeout? Please type '1' for dine in or '2' for takeout: ";
    cin >> order_type; // store the input in the variable order_type

    if (1 == order_type) {
        tip_percent = 0.15; // 15% tip for dine in
    } else if (2 == order_type) {
        tip_percent = 0.0; // 0% tip for takeout
    } else {
        cout << "Invalid input. Please enter '1' for dine in or '2' for takeout. " << endl;
        return 1; // exit with error
    }

    // Calculate the meal price
    // Calculate the sales tax and the total price
    tax_amount = item_price * tax_percent; // take 8% of the item price
    tip_amount = item_price * tip_percent; // take 15% of the item price for dine in
    total = item_price + tax_amount + tip_amount; // total price is item price + tax + tip
    
    // Print the receipt
    cout << fixed << setprecision(2);
    cout << "Thank you for shopping with us!" << endl;
    cout << "--------------------------------" << endl;
    cout << item << "\t$" << item_price        << endl;
    cout << "Tip" << "\t\t\t$" << tip_amount       << endl;
    cout << "Tax" << "\t\t\t$" << tax_amount       << endl;
    cout << "--------------------------------" << endl;
    cout << "Total" << "\t\t\t$" << total << endl;
    cout << endl;
    cout << endl;

    cout << endl;
    cout << endl;



    // Question 3: A simple "Choose Your Own Adventure" game where the user types commands and 
    // the program tells a story based on the user's input.
    cout << "Question 3: " << endl;
    // Question 3's code will go here.

    // Declare variables
    string user_choice; // to store the user's choice

    // Greet the user and set up the story
    cout << "Welcome to the Choose Your Own Adventure game!" << endl;
    cout << "To start, would you like to go on a 'forest' adventure or a 'space' adventure? Please type 'forest' or 'space': ";
    cin >> user_choice; // store the input in the variable user_choice

    if (user_choice == "forest") {
        cout << "You chose the forest adventure! You are walking through a dense forest when you come across a fork in the path. " << endl;
        cout << "Do you want to go 'left' or 'right'? Please type 'left' or 'right': ";
        cin >> user_choice; // store the input in the variable user_choice

        if (user_choice == "left") {
            cout << "You went left and found a hidden treasure chest! Congratulations! " << endl;
        } else if (user_choice == "right") {
            cout << "You went right and encountered a wild bear! You run away safely, but you didn't find any treasure. " << endl;
        } else {
            cout << "Invalid input. Please type 'left' or 'right'." << endl;
        }

    } else if (user_choice == "space") {
        cout << "You chose the space adventure! You are piloting a spaceship when you encounter an alien spacecraft. " << endl;
        cout << "Do you want to 'communicate' with the aliens or 'attack' them? Please type 'communicate' or 'attack': ";
        cin >> user_choice; // store the input in the variable user_choice

        if (user_choice == "communicate") {
            cout << "You communicated with the aliens and made new friends! They shared their advanced technology with you and built you a habitat on their planet! " << endl;
        } else if (user_choice == "attack") {
            cout << "You attacked the aliens, but they were too powerful. Your spaceship was destroyed. " << endl;
        } else {
            cout << "Invalid input. Please type 'communicate' or 'attack'." << endl;
        }

    } else {
        cout << "Invalid input. Please type 'forest' or 'space'." << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;



    // Question 4: A simple math practice program that generates two single digit numbers at random,
    // prints out those numbers as a simple addition problem, asks the user to input the answer, and then 
    // tells the user if they are correct or not.
    cout << "Question 4: " << endl;
    // Question 4's code will go here.

    // Declare variables and random number generator
    srand(time(0)); // seed the random number generator with the current time
    const int MAX = 9; // numbers from 0-9
    int num1; // first random number
    int num2; // second random number
    int user_answer; // user's answer to the addition problem
    int correct_answer; // correct answer to the addition problem
    num1 = rand() % (MAX + 1); // generate a random number between 0 and 9
    num2 = rand() % (MAX + 1); // generate a random number between 0 and 9

    // Greet the user, print the addition problem, and ask for the answer
    cout << "Welcome to the math practice program! " << endl;
    cout << "What is " << num1 << " + " << num2 << "? " << endl;
    cin >> user_answer; // store the input in the variable user_answer

    // if else statements to check if the user's answer is correct
    correct_answer = num1 + num2; // calculate the correct answer
    if (user_answer == correct_answer) {
        cout << "Correct! Great job! " << endl;
    } else {
        cout << "Sorry, that is incorrect. The correct answer is " << correct_answer << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;


    return 0; // exit without error

}