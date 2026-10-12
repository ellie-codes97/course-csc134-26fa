// CSc 134
// M3LAB1
// Ella Jackson
// 10/11/2026
// This program asks the user to choose between two buttons that
// cause two different outcomes and responds accordingly.
// I tested this by using the following values: 1, 2, 3, strawberry

#include <iostream>
using namespace std;


int main() {

  // Declare the variable we need
  int choice; 


  // Set up scenario and ask the user the question
  cout << "------------------------------------------------ " << endl;
  cout << "Imagine that in front of you are two buttons. " << endl;
  cout << "One button is purple and the other is pink. \n" << endl;
  cout << "The purple button will immediately make your current dream come true. " << endl;
  cout << "The pink button will immediately make you a billionaire. \n" << endl;
  cout << "But there is a small catch: the purple button only makes one dream come true, and it will be whatever your most recent dream is. " << endl;
  cout << "If your current dream is to be an astronaut, that is what will happen. \n" << endl; 
  cout << "Alternatively, the pink button will immediately make you a billionaire, but you will only receive three billion dollars, " << endl;
  cout << "and that amount will be finite. It will not be replaced once it runs out. \n" << endl;
  cout << "Knowing this, which button do you choose?" << endl;
  cout << "Do you choose the purple button or the pink button? \n\n" << endl;
  cout << "Type '1' for purple or '2' for pink: "; 
  cin >> choice;

  
  // Using if, make a decision based on the user's choice
  if (1 == choice) {
  	cout << "You chose the purple button" << endl;
  }
  else if (2 == choice) {
  	cout << "You chose the pink button" << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // Finish the interaction with the user
  cout << "Interesting choice! Thanks for playing!" << endl; // this runs no matter what they choose
  cout << "------------------------------------------------ " << endl;

  return 0; // exit without error

} 