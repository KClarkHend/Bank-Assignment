/*Keyana Clark-Henderson
CS2, Section #0123
Assignment 0, Problem 1
Write a program that lets the user enter the total  amount of money spent  on a
credit card for each of 12 months into  an array of doubles.*/

// preprocessor directives
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
	// variable declaration
	const int MONTHS = 12;
	string name[MONTHS] = {"January :  ",
						   "Febuary :  ",
						   "March :  ",
						   "April :  ",
						   "May :  ",
						   "June :  ",
						   "July :  ",
						   "August :  ",
						   "September :  ",
						   "October :  ",
						   "November :  ",
						   "December :  "};
	int count = 0;
	double totalAmount[MONTHS], averageAmount, largest, smallest, year = 0;
	string largestMonth, smallestMonth;

	for (count = 0; count < MONTHS; count++) {
		cout << "Please input total amount spent in " << name[count] << "$ ";
		cin >> totalAmount[count];

		while (totalAmount[count] < 0) // negative inputs will equate to 0
		{
			totalAmount[count] = 0;
		}
	}
	largest = totalAmount[0];  // finds month with the highest amount of money
	smallest = totalAmount[0]; // finds month with the least amount of money

	for (count = 1; count < MONTHS; count++) // Totals all money
	{
		if (totalAmount[count] > largest) {
			largestMonth = name[count];
			largest = totalAmount[count];
		} else if (totalAmount[count] < smallest) {
			smallestMonth = name[count];
			smallest = totalAmount[count];
		}
	}

	cout << endl;
	cout << "Here are the credit card totals for each month:" << endl;

	for (count = 0; count < MONTHS; count++) {
		year += totalAmount[count];
		averageAmount = year / MONTHS;
		cout << setw(11) << left << name[count];
		cout << right << setw(10) << "  $ " << totalAmount[count] << fixed
			 << setprecision(2) << endl;
	}

	cout << "The total amount of money spent was "
		 << " $" << year << endl;
	cout << "The average amount of money spent per month was "
		 << " $" << averageAmount << endl;
	cout << "The most amount of money spent in a month was "
		 << " $" << largest << endl;
	cout << "The least amount of money spent in a month was "
		 << " $" << smallest << endl;
	return 0;
}