//Gustavo Nomra
//c++ Fall2019
//lab 5
//october 24, 2019

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iomanip>


using namespace std;


void wining()
{
	int randomWin = rand() % 10 + 1;
	switch (randomWin)
	{
	case 1:
		cout << "Good job!!" << endl;
		break;
	case 2:
		cout << "What a shot!!!" << endl;
		break;
	case 3:
		cout << "You won!" << endl;
		break;
	case 4:
		cout << "Bravo !! You are the winner of the game." << endl;
		break;
	case 5:
		cout << "Well done! You won." << endl;
		break;
	case 6:
		cout << "Yes!! You got it." << endl;
		break;
	case 7:
		cout << "You are the winner" << endl;
		break;
	case 8:
		cout << "You are smart." << endl;
		break;
	case 9:
		cout << "Nice played!! You won." << endl;
		break;
	case 10:
		cout << "Amazing!!! You won the game. " << endl;
		break;

	}
}
void losses()
{
	int randomLoss = rand() % 10 + 1;
	switch (randomLoss)
	{
	case 1:
		cout << "Sorry you lost the game" << endl;
		break;
	case 2:
		cout << "Sorry, bad shot." << endl;
		break;
	case 3:
		cout << "Sorry you lost the game again." << endl;
		break;
	case 4:
		cout << "You failed !" << endl;
		break;
	case 5:
		cout << "Not this time." << endl;
		break;
	case 6:
		cout << "Try again" << endl;
		break;
	case 7:
		cout << " you are not too smart." << endl;
		break;
	case 8:
		cout << "you are loser" << endl;
		break;
	case 9:
		cout << " Hahahah You lost." << endl;
		break;
	case 10:
		cout << "stupid" << endl;
		break;
	}
}
void result(int wonCounts, int lostCounts)
{
	cout << "Number Guessing games you have played: " << (wonCounts + lostCounts) << endl;
	cout << "Number guessing games you have won: " << wonCounts << endl;
	cout << "Number guessing games you have lost: " << lostCounts << endl;
}
void playagain()
{
	int randomWin = rand() % 10 + 1;
	switch(randomWin)
	{
	case 1:
		cout << " If You wanna play again press 'a' or 'A' ? " << endl;
		break;
	case 2:
		cout << "If you wanna play again press 'a' or 'A' ?" << endl;
		break;
	case 3:
		cout << "If you wanna play again press 'a' or 'A' ?" << endl;
		break;
	case 4:
		cout << "If you wanna play again press 'a' or 'A' ?" << endl;
		break;
	case 5:
		cout << "If you wanna play again press 'a' or 'A' ?" << endl;
		break;
	case 6:
		cout << "Do you wanna play again ? press 'a', if yeah ?" << endl;
		break;
	case 7:
		cout << "Press 'a' to play again. " << endl;
		break;
	case 8:
		cout << "Enter 'a' to replay." << endl;
		break;
	case 9:
		cout << " 'a' to play again !!!" << endl;
		break;
	case 10:
		cout << "To reload the game press 'a'." << endl;
		break;
	
	}
}
int main()
{
	int randomValue;
	int trys = 1;
	int guessNumber;
	char ch = 'a';
	int wonCOunts = 0;
	int lostCounts = 0;
	srand(time(NULL));

	randomValue = rand() % 100;
	cout << "My guess Nummber challenge" << endl;
	do
	{

		cout << "Shots " << trys << ": ";
		cin >> guessNumber;
		if (guessNumber == randomValue)
		{
			wonCOunts++;
			wining();
			cout << "The program choose random values: " << randomValue << endl;

		}
		else
		{
			trys++;
		}
		if (trys == 21)
		{
			lostCounts++;
			losses();
			cout << "The program choose random values: " << randomValue << endl;
		}
		if (trys >= 21)
		{
			playagain();
			cout << "Too skip and quit the game press 'x' " << endl;
			cin >> ch;
			if (ch == 'a' || ch == 'A')
			{
				randomValue = (rand() % 100);
				cout << "Guess my number" << endl;
				trys = 1;
			}
		}
	} 
	while (ch == 'a' || ch == 'A');

	result(wonCOunts, lostCounts);
	if (ch == 'x')
	{
			system("pause");
			return 0;
	}		
}