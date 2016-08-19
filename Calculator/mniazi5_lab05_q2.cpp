#include <iostream>
#include <ctype.h> //used for char
#include <string>

using namespace std;

//function created to ease the process of calculating powers because powers are used to calculate sin and exp
double myPowerFunction(double x, int y)
{
	if (y >= 0) //calculating powers for positive exponent
	{
		double power = 1;

		for (int i = 1; i <= y; i++)
		{
			power *= x;
		}
		return power;
	}
	else //calculating powers for negative exponents
	{
		double power = 1;
		y = y * -1; //converting negative exponent to positive to make calculation easier
		for (int i = 1; i <= y; i++)
		{
			power /= x;
		}
		return power;
	}
}

//displays the choices the user has
char myChoiceFunction(void)
{
	char menuChoice;
	cout << "Menu: " << endl;
	cout << "A. Sin" << endl;
	cout << "B. Power" << endl;
	cout << "C. Factorial" << endl;
	cout << "D. Exponential" << endl;
	cout << "E. Exit" << endl;
	cout << "Enter the menu choice (A - E): " << endl;
	cin >> menuChoice;
	menuChoice = toupper(menuChoice);

	return menuChoice;
}

//calculates the factorials
double myFactFunction(int number)
{
	double factAnswer;
	int fact1 = number;
	for (factAnswer = 1; fact1 > 0; --fact1)
	{
		factAnswer = factAnswer * fact1;
	}

	return factAnswer;
}

//calculates sin
double mySinFunction(double angle)
{
	double sin = 0;
	for (int n = 0; n <= 30; n++)
	{
		double factorial = (2 * n + 1);
		double denominator = 1;

		while (factorial > 0)
		{
			denominator = denominator * factorial;
			factorial--;
		}

		sin += ((myPowerFunction(-1, n)) * myPowerFunction(angle, (2 * n + 1))) / (denominator);
	}

	return sin;
}

//calculates exp
double myExpFunction(double x)
{
	double tot = 0;
	double factAnswer;
	double top = 1;
	for (int n = 0; n < 10; n++)
	{
		top = myPowerFunction(x, n);
		int fact1 = n;
		for (factAnswer = 1; fact1 > 0; --fact1)
		{
			factAnswer = factAnswer * fact1;
		}
		tot += top / factAnswer;
	}
	
	return tot;
}

//displays header
void myHeader(string name, int lab, string date, int question)
{
	cout << "**********************************************" << endl;
	cout << "Name: " << name << endl;
	cout << "Lab #" << lab << ", October " << date << ", Question #" << question << endl;
}

//displays footer
void myFooter(void)
{
	cout << "***************** End of program ********************" << endl;
	cout << "Thank you for using our C++ program!" << endl;
	cout << "Good bye!" << endl;
	cout << "*****************************************" << endl;

}

int main()
{
	int fact = 0, y = 0; //declaring variables holding exponent for power, factorial to be calculated, and answer to factorial
	double x = 0, sum = 0, degrees = 0, exp = 0, powerAnswer = 1, sin = 0, tot = 0, factAnswer = 1; //declaring variables to store x for power, sum, answer to power, sin, and total for exp
	char menuChoice, powAgain, factAgain, sinAgain, expAgain; //menu choices + function loops
															  
	do //overall do-while loop that runs the main components of program
	{
		menuChoice = myChoiceFunction();

		//Loop until proper menu optionis selected
		while (menuChoice != 'A' && menuChoice != 'B' && menuChoice != 'C' && menuChoice != 'D' && menuChoice != 'E')
		{
			cout << "Invalid menu choice! Please enter the menu choice (A - E): " << endl;
			cin >> menuChoice;
			menuChoice = toupper(menuChoice);
		}

		switch (menuChoice) //using switch to make calculations based on selected menu option
		{
			//Case A is sin calculations
		case('A') :
		{
			do
			{
				cout << "To calculate sin value, please enter the degrees: " << endl;
				cin >> degrees;

				while (degrees > 180 || degrees < -180)
				{
					cout << "The value is not within -180 to 180. Enter the degrees again: " << endl;
					cin >> degrees;
				}

				sin = mySinFunction(degrees);

				cout << "sin(" << degrees << ") = " << sin << endl;

				cout << "Do you want to calculate the sin again? (Y or N): " << endl;
				cin >> sinAgain;
				sinAgain = toupper(sinAgain);
			} while (sinAgain != 'N');

			break;
		}

				  //Case B is power calculations
		case('B') :
		{
			do
			{
				cout << "Enter the base value: " << endl;
				cin >> x;

				cout << "Enter the exponent: " << endl;
				cin >> y;

				powerAnswer = myPowerFunction(x, y);

				cout << x << "^" << y << "=" << powerAnswer << endl;
				powerAnswer = 1;

				cout << "Do you want to calculate the power again? (Y or N): " << endl;
				cin >> powAgain;
				powAgain = toupper(powAgain);
			} while (powAgain != 'N');

			break;
		}

				  //Case C is factorial calculations
		case('C') :
		{
			do
			{
				cout << "Enter the n value: " << endl;
				cin >> fact;

				while (fact < 0)
				{
					cout << "n value needs to be greater than 0. Enter the n value: " << endl;
					cin >> fact;
				}

				factAnswer = myFactFunction(fact);

				cout << fact << "! = " << factAnswer << endl;
				factAnswer = 1;

				cout << "Do you want to calculate the factorial again? (Y or N): " << endl;
				cin >> factAgain;
				factAgain = toupper(factAgain);
			} while (factAgain != 'N');

			break;
		}
				  //Case D is expcalculations
		case('D') :
		{
			do
			{
				cout << "Enter x value to be calculated for exp: " << endl;
				cin >> exp;

				tot = myExpFunction(exp);

				cout << "exp(" << exp << ") = " << tot << endl;


				cout << "Do you want to calculate the exp again? (Y or N): " << endl;
				tot = 0;
				cin >> expAgain;
				expAgain = toupper(expAgain);
			} while (expAgain != 'N');

			break;
		}
		}
	} while (menuChoice != 'E');

	//displays footer
	myFooter();

	return 0;
}