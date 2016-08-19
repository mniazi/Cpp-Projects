#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

void myHeader(string name, int lab, string date, int question); //Function displays personalized header

int main()
{
	int num = 0;
	char yOrN;

	myHeader("Mohammad Niazi", 6, "17", 1); //calls function to display header

	do
	{
		cout << "Enter an integer for the array multiples: " << endl;
		cin >> num;

		int firstArray[10];
		int secondArray[10];

		int multiple = 0;

		int sum = 0;

		for (int i = 1; i <= 10; i++) //calculates multiples of inputted number, stores them in array
		{
			if (i == 1)
			{
				multiple += num;
			}
			else
			{
				multiple = multiple + num;
			}

			sum += multiple;

			firstArray[i - 1] = multiple;
		}

		cout << "Element          Value" << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << i + 1 << "                 " << firstArray[i] << endl;
		}

		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / 10 << endl;
		cout << endl;

		multiple = 0;

		for (int i = 1; i <= 10; i++) //multiplying each element by 2
		{
			multiple = firstArray[i - 1] * 2;

			secondArray[i - 1] = multiple;
		}

		cout << "Multiply by 2:" << endl;
		cout << "Element          Value" << endl;
		for (int i = 0; i < 10; i++)
		{
			cout << i + 1 << "                 " << secondArray[i] << endl;
		}

		cout << endl;
		cout << "Reverse:" << endl;
		cout << "Element          Value" << endl;
		for (int i = 9; i >= 0; i--) //reversing the multiples
		{
			int j = 0;
			cout << j + 1 << "                 " << firstArray[i] << endl;
			j++;
		}


		cout << "Would you like to continue? Y/N: " << endl;
		cin >> yOrN;
		yOrN = toupper(yOrN);
	} while (yOrN != 'N');
}

void myHeader(string name, int lab, string date, int question)
{
	cout << "**********************************************" << endl;
	cout << "Name: " << name << endl;
	cout << "Lab #" << lab << ", November " << date << ", Question #" << question << endl;
	cout << "**********************************************" << endl;
}