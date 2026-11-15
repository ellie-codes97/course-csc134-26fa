// CSC 134
// M5LAB2
// Ella Jackson
// 11/15/2026
// This program will ask the user for the length and width of a rectangle, calculate the area, and display all three values in
// a well-formatted manner.

#include <iostream>
#include <iomanip>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

// These are the getLength, getWidth, getArea, and displayData functions.

double getLength()
{
   double length;
   cout << "Enter the length of the rectangle: ";
   cin >> length;
   return length;
}

double getWidth()
{
   double width;
   cout << "Enter the width of the rectangle: ";
   cin >> width;
   return width;
}

double getArea(double length, double width)
{
   return length * width;
}

void displayData(double length, double width, double area)
{
   cout << "Based on your input, the length of the rectangle is: " << length << endl;
   cout << "Based on your input, the width of the rectangle is: " << width << endl;
   cout << "Based on the dimensions you provided, the area of the rectangle is: " << area << endl;
}