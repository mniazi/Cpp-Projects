#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

int main(void);
void race(void);
int race(int, int);
int placeBet(int);
int menu(void);

int money = 100;

int main(void)
{
	srand((unsigned int)time(NULL));
	int userInput;

	cout << "Welcome to the Horce Race." << endl << endl;

	while (userInput = menu())
	{
		if (userInput == 1 || userInput == 2 || userInput == 3)
		{
			money += race(placeBet(userInput), userInput);
		}
		else
		{
			race();
		}
	}
}

int menu(void)
{
	int userInput;
	cout << "You have $" << money << endl << endl;
	do
	{
		cout << "This is the Horse Racing Menu" << endl;
		cout << "Here are your options" << endl;
		cout << "[1] to place bet on Horse 1" << endl;
		cout << "[2] to place bet on Horse 2" << endl;
		cout << "[3] to place bet on Horse 3" << endl;
		cout << "[4] to just watch the race without placing bet" << endl;
		cin >> userInput;
	} while (userInput < 0 && userInput > 4);

	return userInput;
}

int placeBet(int userInput)
{
	int bet;

	cout << " " << endl;
	cout << "You are placing a bet on Horse number " << userInput << ". How much would you like to bet?" << endl;
	cin >> bet;
	cout << "You have bet $" << bet << " on Horse " << userInput << endl << endl;
	return bet;
}

void race(void)
{
	race(0, 0);
}

int race(int bet, int horseNum)
{
	int winner = rand() % 3 + 1;
	cout << "The race begins!" << endl;
	cout << ".....and the winner is Horse " << winner << endl << endl;
	if (winner == horseNum)
	{
		cout << "The horse you bet on won the race!" << endl;
		cout << "You have now earned 2 times the amount you bet." << endl << endl;
		return 2 * bet;
	}
	else
	{
		cout << "The horse you bet on lost the race." << endl;
		cout << "You have now lost the money you have bet." << endl << endl;
		return -1 * bet;
	}
}

