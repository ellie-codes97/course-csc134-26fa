// CSC 134
// M1HW1
// Ella Jackson
// August 30th, 2026

#include <iostream>
using namespace std;
int main ()  {
    // This program will state the name, year, gross box office earnings, and quotes of a movie.
    // The movies's name
    string name = "Project Hail Mary";
    // year released
    int yearReleased = 2026;
    // gross box office earnings
    string boxOfficeEarnings = "$684.2 million";
    // runtime of the movie
    string runtime = "2 hours and 36 minutes"; 
    // rating of the movie
    string rating = "PG-13";

    // print all the information about the movie
    cout << name;
    cout << " is a movie based on the novel written by Andy Weir about an eigth grade science teacher and molecular biologist named Ryland Grace, who finds himself having woken up on a ship in space. After the effects of amnesia wear off, he remembers his mission: to figure out why one star, Tau Ceti, has not started dying, despite being infected by an alien cell known as Astrophage, which is eating Earth's sun. Along the way, he meets an alien named Rocky, who is also trying to save his planet. Together, Rocky and Grace work to save Earth and Erid from the Astrophage." << endl; 
    cout << name;
    cout << " came out in " << yearReleased;
    cout << " and the movie made " << boxOfficeEarnings;
    cout << " worldwide." << endl;

    // Final lines, including quotes from the movie as well as runtime and rating;
    cout << "The movie has a runtime of " << runtime;
    cout << " and is rated " << rating << ". Below are some quotes from the movie:" << endl;
    cout << "\"Life is reason.\" - Rocky" << endl;
    cout << "\"I'm not an astronaut. I put the 'not' in astronaut!\" - Ryland Grace" << endl;
}