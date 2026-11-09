// CSC 134
// M5LAB1 - Choose Your Own Adventure
// Ella Jackson
// 11/8/2026
// This program will be using void functions to tell a simple story,
// where the user gets to make choices. Because I'm a Marvel nerd, the story will be based around
// the X-Men. Also RIP Patrick Stewart, you will be missed. I hope this program is fun to play and that it works as intended.

// Function Prototypes
#include <iostream>
#include <limits>
using namespace std;

void main_menu();
void choice_accept();
void choice_decline();
void choice_slam_door();
void choice_quit();
void choice_Logan();
void choice_Rogue_Nightcrawler();
void choice_wait();
void choice_fight_Mystique();
void choice_joke();
void choice_heartfelt_conversation();


int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;

  // load up the main menu

  main_menu();
  // when we return here, we're done

  cout << "Thanks for playing!" << endl;

  return 0; // finished with no errors
}

void main_menu() {
  int choice;
  while (true) {
    cout << "Main Menu" << endl;
    cout << "--------------------------------" << endl;
    cout << "You're a mutant, living their peaceful life as usual. But today, you wake up to find Charles Xavier on your doorstep... " << endl;
    cout << "He tells you that he has been monitoring your powers, and that you have been chosen to join the X-Men. " << endl;
    cout << "Do you:" << endl;
    cout << "1. Go with him -- what's the worst that could happen? " << endl;
    cout << "2. Politely decline -- there's no reason to be rude to this nice old man. " << endl;
    cout << "3. Slam the door in his face -- you're just trying to live in peace... " << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";

    if (!(cin >> choice)) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "That's not a valid choice, please try again." << endl;
      continue;
    }

    if (choice == 1) {
      choice_accept();
    } else if (choice == 2) {
      choice_decline();
    } else if (choice == 3) {
      choice_slam_door();
    } else if (choice == 4) {
      choice_quit();
    } else {
      cout << "That's not a valid choice, please try again." << endl;
      continue;
    }
    return;
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().

void choice_accept() {
  cout << "You accept your new job as a member of the X-Men! " << endl;
  cout << "He brings you to the X-Mansion and there, you meet three of the X-Men: Wolverine, Rogue, and Nightcrawler. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Go play pool with Logan? -- maybe this will be fun? " << endl;
  cout << "2. Or go on a mission with Rogue and Nightcrawler? -- this is your chance to prove yourself!! " << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_Logan();
  } else if (2 == choice) {
    choice_Rogue_Nightcrawler();
  }
}

void choice_decline() {
  cout << "You politely decline Xavier's offer and return to your peaceful life. You can only hope he's the last person that bothers you..." << endl;
}

void choice_slam_door() {
  cout << "You slam the door and hope Xavier understands that you want to be left alone. He takes offense but leaves." << endl;
}

void choice_quit() { 
    cout << "Ok, quitting game" << endl; 
}


void choice_Logan() {
    cout << "You go play pool with Logan at a local bar! " << endl;
    cout << "You try to befriend him all night, but he still seems grumpy... " << endl;
    cout << "Do you:" << endl;
    cout << "1. Crack a few jokes about nothing in particular! -- surely, even a grumpy old man like him likes jokes, right? " << endl;
    cout << "2. Try to have a heart-to-heart. -- maybe he's sad and just needs someone to talk to... " << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
     if (1 == choice) {
        choice_joke();
    }   else if (2 == choice) {
        choice_heartfelt_conversation();
  }
}

void choice_joke() {
  cout << "For a whole five seconds, he's completely silent... " << endl;
  cout << "He chuckles!! Well, as close to one as you're going to get. But, he liked your joke, and he decides that you're not half-bad! " << endl;
  cout << "You and Logan become friends, and he even gives you a few pointers on how to be a better X-Man! " << endl;
}

void choice_heartfelt_conversation() {
  cout << "He just stares at you for a long time... " << endl;
  cout << "You aren't close enough with Logan yet to attempt a heartfelt conversation. " << endl;
  cout << "He leaves the bar, and you go home, feeling a little sad that you didn't get to know him better. " << endl;
  cout << "Maybe next time, you'll have better luck. " << endl;
}

void choice_Rogue_Nightcrawler() {
    cout << "You go on a mission with Rogue and Kurt! " << endl;
    cout << "The goal is to stop Mystique from attacking Senator Kelly (again). After coming face-to-face with Mystique by yourself, you're left with two options. " << endl;
    cout << "Do you:" << endl;
    cout << "1. Wait for Rogue and Kurt to catch up with you -- fighting alone will get you nowhere. " << endl;
    cout << "2. Fight her off as best you can while Rogue and Kurt catch up -- keeping her in one place, even if it means fighting alone, is clearly the best move. " << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
     if (1 == choice) {
        choice_wait();
    }   else if (2 == choice) {
        choice_fight_Mystique();
  }
}

void choice_wait() {
  cout << "You wait for Rogue and Kurt, and Mystique gets away with Senator Kelly in tow. You fail the mission, " << endl;
  cout << "and the rest of the team has to get involved. " << endl;
  cout << "Maybe you're not cut out to be an X-Man... " << endl;
}

void choice_fight_Mystique() {
  cout << "You hold Mystique off the best you can, and succeed!! You get fairly injured, and you get a thorough lecture from Rogue on recklessness, but the three of you get Mystique into custody and stop her from attacking the Senator. " << endl;
  cout << "You are a hero, and the X-Men are proud to have you on their team! Looks like you're pretty good at this X-Man thing! " << endl;
}