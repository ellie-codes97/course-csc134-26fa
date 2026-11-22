// CSC 134
// M5HW1 - Gold Tier
// Ella Jackson
// 11/22/2026

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// ---------- Question 1: Average rainfall ----------
void question1()
{
    string month1, month2, month3;
    double rain1, rain2, rain3, average;

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    average = (rain1 + rain2 + rain3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2
         << ", and " << month3 << " is " << average << " inches." << endl;

    // Reset formatting so the other questions aren't stuck at 2 decimals
    cout.unsetf(ios::fixed);
    cout << setprecision(6);
}

// ---------- Question 2: Block volume ----------
void question2()
{
    double width, length, height, volume;

    cout << "Enter the block's width: ";
    cin >> width;
    while (width <= 0)
    {
        cout << "Width must be greater than zero. Try again: ";
        cin >> width;
    }

    cout << "Enter the block's length: ";
    cin >> length;
    while (length <= 0)
    {
        cout << "Length must be greater than zero. Try again: ";
        cin >> length;
    }

    cout << "Enter the block's height: ";
    cin >> height;
    while (height <= 0)
    {
        cout << "Height must be greater than zero. Try again: ";
        cin >> height;
    }

    volume = width * length * height;
    cout << "The volume of the block is " << volume << endl;
}

// ---------- Question 3: Roman numerals ----------
void question3()
{
    int number;

    cout << "Enter a number (1 - 10): ";
    cin >> number;
    while (number < 1 || number > 10)
    {
        cout << "The number must be between 1 and 10. Try again: ";
        cin >> number;
    }

    cout << "The Roman numeral version of " << number << " is ";
    switch (number)
    {
        case 1:  cout << "I";    break;
        case 2:  cout << "II";   break;
        case 3:  cout << "III";  break;
        case 4:  cout << "IV";   break;
        case 5:  cout << "V";    break;
        case 6:  cout << "VI";   break;
        case 7:  cout << "VII";  break;
        case 8:  cout << "VIII"; break;
        case 9:  cout << "IX";   break;
        case 10: cout << "X";    break;
    }
    cout << "." << endl;
}

// ---------- Question 4: Geometry calculator ----------
void question4()
{
    const double PI = 3.14159;
    int choice = 0;

    while (choice != 4)
    {
        cout << endl;
        cout << "Geometry Calculator" << endl;
        cout << "1. Calculate the Area of a Circle" << endl;
        cout << "2. Calculate the Area of a Rectangle" << endl;
        cout << "3. Calculate the Area of a Triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 1)
        {
            double radius;
            cout << "Enter the circle's radius: ";
            cin >> radius;
            if (radius < 0)
            {
                cout << "The radius cannot be less than zero." << endl;
            }
            else
            {
                cout << "The area is " << PI * radius * radius << endl;
            }
        }
        else if (choice == 2)
        {
            double length, width;
            cout << "Enter the rectangle's length: ";
            cin >> length;
            cout << "Enter the rectangle's width: ";
            cin >> width;
            if (length < 0 || width < 0)
            {
                cout << "Only enter positive values for length and width." << endl;
            }
            else
            {
                cout << "The area is " << length * width << endl;
            }
        }
        else if (choice == 3)
        {
            double base, height;
            cout << "Enter the triangle's base: ";
            cin >> base;
            cout << "Enter the triangle's height: ";
            cin >> height;
            if (base < 0 || height < 0)
            {
                cout << "Only enter positive values for base and height." << endl;
            }
            else
            {
                cout << "The area is " << base * height * 0.5 << endl;
            }
        }
        else if (choice == 4)
        {
            cout << "Returning to the main menu." << endl;
        }
        else
        {
            cout << "The valid choices are 1 through 4. Select one of those." << endl;
        }
    }
}

// ---------- Question 5: Distance traveled ----------
void question5()
{
    double speed;
    int hours;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    while (speed < 0)
    {
        cout << "Speed cannot be negative. Try again: ";
        cin >> speed;
    }

    cout << "How many hours has it traveled? ";
    cin >> hours;
    while (hours < 1)
    {
        cout << "Hours must be at least 1. Try again: ";
        cin >> hours;
    }

    cout << endl;
    cout << "Hour    Distance Traveled" << endl;
    cout << "--------------------------------" << endl;
    for (int hour = 1; hour <= hours; hour++)
    {
        cout << setw(4) << hour << setw(12) << speed * hour << endl;
    }
}

// ---------- Question 6: Main menu ----------
int main()
{
    int choice = 0;

    while (choice != 6)
    {
        cout << endl;
        cout << "Main Menu" << endl;
        cout << "1. Average Rainfall" << endl;
        cout << "2. Block Volume" << endl;
        cout << "3. Roman Numerals" << endl;
        cout << "4. Geometry Calculator" << endl;
        cout << "5. Distance Traveled" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        cout << endl;

        if (choice == 1)
        {
            question1();
        }
        else if (choice == 2)
        {
            question2();
        }
        else if (choice == 3)
        {
            question3();
        }
        else if (choice == 4)
        {
            question4();
        }
        else if (choice == 5)
        {
            question5();
        }
        else if (choice == 6)
        {
            cout << "Goodbye!" << endl;
        }
        else
        {
            cout << "Invalid choice. Please enter a number from 1 to 6." << endl;
        }
    }

    return 0;
}