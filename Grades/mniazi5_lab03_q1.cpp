#include <iostream>

using namespace std;

int main()
{
	//Declare the variable that holds number of students, and the iteration factor in the while loop
	int students = 0, iteration = 1;
	//Declare variables that hold the grades and find highest and lowest grade, and average
	double grade = 0, gradeOfAPP = 0, gradeOfA = 0, gradeOfBPP = 0, gradeOfB = 0, gradeOfC = 0, gradeOfF = 0, highestGrade = 0, lowestGrade = 100, totalOfGrades = 0;

	//General program info
	cout << "Lab 3, Question 1" << endl;
	cout << "Grading Program: Allows user to input students grades and manipulates the data to find highest, lowest, and average." << endl;
	cout << "Created By: Mohammad Niazi" << endl;
	
	//Prompt user to input number of students
	cout << "How many students: " << endl;
	cin >> students;

	//Loop makes sure user enters positive number
	while (students <= 0)
	{
		cout << "Invalid Number, please enter a positive number: " << endl;
		cin >> students;
	}

	//Output the number of students grades are needed for
	cout << "Please enter the grades for the " << students << ":" << endl;

	//This loop allows user to enter the students grades
	while (iteration <= students)
	{
		cout << "Enter student " << iteration << " score: " << endl;
		cin >> grade;  //Holds individual grades

		totalOfGrades += grade;  //Adds up all the grades for average calculations

		//Finds highest grade
		if (grade > highestGrade)
		{
			highestGrade = grade;
		}

		//Finds lowest grade
		if (grade < lowestGrade)
		{
			lowestGrade = grade;
		}
		
		//Iterates the number of each grades received
		if (grade >= 95)
		{
			gradeOfAPP++;
		}
		else if (grade < 95 && grade >= 90)
		{
			gradeOfA++;
		}
		else if (grade < 90 && grade >= 85)
		{
			gradeOfBPP++;
		}
		else if (grade < 85 && grade >= 80)
		{
			gradeOfB++;
		}
		else if (grade < 80 && grade >= 70)
		{
			gradeOfC++;
		}
		else
		{
			gradeOfF++;
		}

		iteration++;
	}

	cout << "A++: " << gradeOfAPP << " (" << (gradeOfAPP / students) * 100 << "% of the students received this grade)" << endl;
	cout << "A: " << gradeOfA << " (" << (gradeOfA / students) * 100 << "% of the students received this grade)" << endl;
	cout << "B++: " << gradeOfBPP << " (" << (gradeOfBPP / students) * 100 << "% of the students received this grade)" << endl;
	cout << "B: " << gradeOfB << " (" << (gradeOfB / students) * 100 << "% of the students received this grade)" << endl;
	cout << "C: " << gradeOfC << " (" << (gradeOfC / students) * 100 << "% of the students received this grade)" << endl;
	cout << "F: " << gradeOfF << " (" << (gradeOfF / students) * 100 << "% of the students received this grade)" << endl;

	cout << "Highest grade: " << highestGrade << endl;
	cout << "Lowest grade: " << lowestGrade << endl;
	cout << "The class average is: " << totalOfGrades / students << endl;

	cout << "Good Bye!" << endl;

	return 0;
}