// rockPaperScissors v1.0
// Created 1/16/17

#include "stdafx.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

// Function Declarations

int game();


int main()
{
	while (true) {
		game();
		cout << "Play again? 'y' for yes and 'n' for no.\n";
		char playAgain;
		cout << ">> ";
		cin >> playAgain;
		cout << endl;
		if (playAgain == 'n')
			break;
		else if (playAgain != 'y')
		{
			cerr << "Error.\n";
			break;
		}

	}
	system("pause");
    return 0;
}

// Function Definitions

int game()
{
	cout << "Enter 'r' for rock, 'p' for paper, or 's' for scissors.\n";
	char userChoice;
	cout << ">> ";
	cin >> userChoice;
	
	
	srand(time(0));
	int randNum = rand() % 2;
	char compChoice;

	switch (randNum)
	{
	case 0:
		compChoice = 'r';
		if (userChoice == 'r') {
			cout << "Computer picked 'rock'! It is a tie.\n\n";
			break;
		}
		else if (userChoice == 'p') {
			cout << "Computer picked 'rock'! You win!\n\n";
			break;
		}
		else if (userChoice == 's') {
			cout << "Computer picked 'rock'! You lose!\n\n";
			break;
		}
	case 1:
		compChoice = 'p';
		if (userChoice == 'r') {
			cout << "Computer picked 'paper'! You lose!\n\n";
			break;
		}
		else if (userChoice == 'p') {
			cout << "Computer picked 'paper'! It is a tie.\n\n";
			break;
		}
		else if (userChoice == 's') {
			cout << "Computer picked 'paper'! You win!\n\n";
			break;
		}
	case 2:
		compChoice = 's';
		if (userChoice == 'r') {
			cout << "Computer picked 'scissors'! You win!\n\n";
			break;
		}
		else if (userChoice == 'p') {
			cout << "Computer picked 'scissors'! It is a tie.\n\n";
			break;
		}
		else if (userChoice == 's') {
			cout << "Computer picked 'scissors! You lose!\n\n";
			break;
		}
	}
	
	return 0;
}