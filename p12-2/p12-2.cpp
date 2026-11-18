/*
* Korbin Landrum 
* Calender lab
*/

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

//Function Prototypes
bool isLeapYear(int year);
int daysInMonth(int month, int year);
string monthOfTheYear(int month);

//constant variables
const int DAYS_IN_MONTHS[13] = { 31,28,31,30,31,31,30,31,30,31,30,31,29 };

int main() {
	string input;


	while (true) {
		string input;
		int month, year;

		cout << "Enter a month and a year or Q to quit: ";
		cin >> input;

		// breaks if Q or q
		if (input == "Q" || input == "q") {
			break;
		}

		month = stoi(input);
		cin >> year;

		if (year < 1582) {
			cout << "Enter a year 1582 or higher" << endl;
		}
			else {
				cout << monthOfTheYear(month) << " " << year << " has " << daysInMonth(month,year) << " days." << endl;
			}
		}

}

//Declerations

//Checks if it is a leap year
bool isLeapYear(int year) {
	if (year % 4 == 0) {
		return true;
	}
	else {
		return false;
	}
}

int daysInMonth(int month, int year) {

	if (isLeapYear(year) == true && month == 2) {
		return DAYS_IN_MONTHS[12];
	}
	else {
		return DAYS_IN_MONTHS[month - 1];
	}
}

string monthOfTheYear(int month) {
	if (month == 1) {
		return "January";
	} else if (month == 2) {
		return "Febuary";
	} else if (month == 3) {
		return "March";
	} else if (month == 4) {
		return "April";
	} else if (month == 5) {
		return "May";
	} else if (month == 6) {
		return "June";
	} else if (month == 7) {
		return "July";
	} else if (month == 8) {
		return "August";
	} else if (month == 9) {
		return "September";
	} else if (month == 10) {
		return "October";
	} else if (month == 11) {
		return "November";
	} else if (month == 12) {
		return "December";
	}
}

