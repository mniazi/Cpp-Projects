#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;

int main()
{
	int choice = 0, dayNo = 0, date; //variables that hold the users menu choice, day number, and date
	string month, day; //variables that display the month and day
	char yOrN = 'N'; 

	//runs the function of the program
	do
	{
		cout << "Welcome to the smart calendar." << endl;
		cout << "Menu: " << endl;
		cout << "1 - Leap Year" << endl;
		cout << "2 - Normal Year" << endl;
		cout << "Please enter your choice" << endl;
		cin >> choice;
		if (choice != 1 && choice != 2) //making sure user selects only choice 1 or 2
		{
			do
			{
				cout << "Invalid! Try again" << endl;
				cout << "1 - Leap Year" << endl;
				cout << "2 - Normal Year" << endl;
				cout << "Enter your choice: " << endl;
				cin >> choice;
			} while (choice != 1 && choice != 2);
		}

		if (choice != 2) //if leap year
		{
			do
			{
				cout << "Please enter the day: " << endl;
				cin >> dayNo;
			} while (dayNo < 0 || dayNo > 366);

			if (dayNo >= 1 && dayNo <= 31)
			{
				month = "January";
				date = (dayNo - 1 + 1);
			}
			else if (dayNo >= 32 && dayNo <= 60)
			{
				month = "February";
				date = (dayNo - 32 + 1);
			}
			else if (dayNo >= 61 && dayNo <= 91)
			{
				month = "March";
				date = (dayNo - 61 + 1);
			}
			else if (dayNo >= 92 && dayNo <= 121)
			{
				month = "April";
				date = (dayNo - 92 + 1);
			}
			else if (dayNo >= 122 && dayNo <= 152)
			{
				month = "May";
				date = (dayNo - 122 + 1);
			}
			else if (dayNo >= 153 && dayNo <= 182)
			{
				month = "June";
				date = (dayNo - 153 + 1);
			}
			else if (dayNo >= 183 && dayNo <= 213)
			{
				month = "July";
				date = (dayNo - 183 + 1);
			}
			else if (dayNo >= 214 && dayNo <= 243)
			{
				month = "August";
				date = (dayNo - 214 + 1);
			}
			else if (dayNo >= 244 && dayNo <= 274)
			{
				month = "September";
				date = (dayNo - 245 + 1);
			}
			else if (dayNo >= 275 && dayNo <= 304)
			{
				month = "October";
				date = (dayNo - 275 + 1);
			}
			else if (dayNo >= 305 && dayNo <= 335)
			{
				month = "November";
				date = (dayNo - 305 + 1);
			}
			else
			{
				month = "December";
				date = (dayNo - 336);
			}

			if (dayNo % 7 == 1)
			{
				day = "Friday";
			}
			else if (dayNo % 7 == 2)
			{
				day = "Saturday";
			}
			else if (dayNo % 7 == 3)
			{
				day = "Sunday";
			}
			else if (dayNo % 7 == 4)
			{
				day = "Monday";
			}
			else if (dayNo % 7 == 5)
			{
				day = "Tuesday";
			}
			else if (dayNo % 7 == 6)
			{
				day = "Wednesday";
			}
			else
			{
				day = "Thursday";
			}
			
			cout << "Day " << dayNo << " corresponds to " << day << ", " << month << " " << date << "." << endl;
		}
		else //if normal year
		{
			do
			{
				cout << "Please enter the day: " << endl;
				cin >> dayNo;
			} while (dayNo < 0 || dayNo > 365);

			if (dayNo >= 1 && dayNo <= 31)
			{
				month = "January";
				date = (dayNo - 1 + 1);
			}
			else if (dayNo >= 32 && dayNo <= 59)
			{
				month = "February";
				date = (dayNo - 32 + 1);
			}
			else if (dayNo >= 60 && dayNo <= 90)
			{
				month = "March";
				date = (dayNo - 60 + 1);
			}
			else if (dayNo >= 91 && dayNo <= 120)
			{
				month = "April";
				date = (dayNo - 91 + 1);
			}
			else if (dayNo >= 121 && dayNo <= 151)
			{
				month = "May";
				date = (dayNo - 121 + 1);
			}
			else if (dayNo >= 152 && dayNo <= 181)
			{
				month = "June";
				date = (dayNo - 152 + 1);
			}
			else if (dayNo >= 182 && dayNo <= 212)
			{
				month = "July";
				date = (dayNo - 182 + 1);
			}
			else if (dayNo >= 213 && dayNo <= 242)
			{
				month = "August";
				date = (dayNo - 213 + 1);
			}
			else if (dayNo >= 243 && dayNo <= 273)
			{
				month = "September";
				date = (dayNo - 243);
			}
			else if (dayNo >= 274 && dayNo <= 303)
			{
				month = "October";
				date = (dayNo - 274 + 1);
			}
			else if (dayNo >= 304 && dayNo <= 334)
			{
				month = "November";
				date = (dayNo - 293 + 1);
			}
			else
			{
				month = "December";
				date = (dayNo - 335);
			}

			if (dayNo % 7 == 1)
			{
				day = "Friday";
			}
			else if (dayNo % 7 == 2)
			{
				day = "Saturday";
			}
			else if (dayNo % 7 == 3)
			{
				day = "Sunday";
			}
			else if (dayNo % 7 == 4)
			{
				day = "Monday";
			}
			else if (dayNo % 7 == 5)
			{
				day = "Tuesday";
			}
			else if (dayNo % 7 == 6)
			{
				day = "Wednesday";
			}
			else
			{
				day = "Thursday";
			}
			
			cout << "Day " << dayNo << " corresponds to " << day << ", " << month << " " << date << "." << endl;
		}

		cout << "Do you want to play again? (Y/N): ";
		cin >> yOrN;
		yOrN = toupper(yOrN);
	} while (yOrN == 'Y');

	return 0;
}


