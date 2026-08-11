#include<iostream>
#include<ctime>
using namespace std;

void choice (char choice);
char comp_choice();
bool winner (char player, char computer);


int main () {
    char player;
    bool running = true;

    cout << "****************************************" << endl;
    cout << "***** THE ROCK PAPER SCISSORS GAME *****" << endl;
    cout << "****************************************" << endl;

    cout << "Choose....." << endl;
    cout << "****************************************" << endl;
    cout << "'r' for ROCK" << endl;
    cout << "'p' for PAPER" << endl;
    cout << "'s' for SCISSORS" << endl;
    cout << "****************************************" << endl;
    cin >> player;
    cout << "****************************************" << endl;

    if (player == 'r' || player == 'p' || player == 's') {
        cout << "Your choice : ";
        choice(player);
    } else {
        cout << "INVALID CHOICE!!!" << endl;
        cout << "****************************************" << endl;
        running = false;
    }

    if (running == false) {
        return 0;
    }

    char computer = comp_choice();
    cout << "Computer's choice : ";
    choice (computer);

    cout << "****************************************" << endl;
             
    running = winner(player, computer);

    cout << "****************************************" << endl;

    if (running == false) {
        return 0;
    }
}

void choice (char choice) {
    switch (choice) {
        case 'r' : cout << "ROCK" << endl;
                break;
        case 'p' : cout << "PAPER" << endl;
                break;
        case 's' : cout << "SCISSORS" << endl;
                break;
    }   
}

char comp_choice() {
    srand(time(0));

    char computer;
    int number = rand() % 3;

    switch (number) {
        case 0 : computer = 'r';
                break;
        case 1 : computer = 'p';
                break;
        case 2 : computer = 's';   
                break;             
    }

    return computer;
}

bool winner (char player, char computer) {
    switch (player) {
        case 'r' : 
            if (computer == 'r') {
                cout << "It's a tie!!!" << endl;
            }
            else if (computer == 'p') {
                cout << "You lose!!!" << endl;
            }
            else {
                cout << "You win!!!" << endl;
            }
                break;
        case 'p' : 
            if (computer == 'r') {
                cout << "You win!!!" << endl;
            }
            else if (computer == 'p') {
                cout << "It's a tie!!!" << endl;
            }
            else {
                cout << "You lose!!!" << endl;
            }
                break;
        case 's' : 
            if (computer == 'r') {
                cout << "You lose!!!" << endl;
            }
            else if (computer == 'p') {
                cout << "You win!!!" << endl;
            }
            else {
                cout << "It's a tie!!!" << endl;
            }
                break;                
    }

    return false;
}