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
int dayOfTheWeek(int month, int day, int year);
string dayOfTheWeekWord(int month, int day, int year);


//constant variables
const int DAYS_IN_MONTHS[13] = { 31,28,31,30,31,30,31,31,30,31,30,31,29 };

int main() {
	string input;


	while (true) {
		string input;
		int day, month, year;

		cout << "Enter a date or Q to quit: ";
		cin >> input;

		// breaks if Q or q
		if (input == "Q" || input == "q") {
			break;
		}

		month = stoi(input);
		cin >> day >> year;


		if (year < 1582) {
			cout << day << " " << month << " " << year << endl;
		}
		else {
			cout << dayOfTheWeekWord(month, day, year) << ", " << monthOfTheYear(month) << " " << day << ", " <<
				year << endl;
		}
	}

}

//Declerations

//Checks if it is a leap year
bool isLeapYear(int year) {
	if ((year % 4 == 0 &&  0 != (year % 100)) || year % 400 == 0) {
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

//Find the day of the week given a date
int dayOfTheWeek(int month, int day, int year) {
	if (month == 1 || month == 2) {
		month += 12;
		year -= 1;
	}
	
		return (day + (((month + 1) * 26) / 10) + year + (year / 4) + (6 * (year / 100)) + (year / 400)) % 7;	
}

//converts day of the week number to words
string dayOfTheWeekWord(int month, int day, int year) {
	if (dayOfTheWeek(month, day, year) == 0){
		return "Sauturday";
	} 
	else if (dayOfTheWeek(month, day, year) == 1) {
		return "Sunday";
	}
	else if (dayOfTheWeek(month, day, year) == 2) {
		return "Monday";
	}
	else if (dayOfTheWeek(month, day, year) == 3) {
		return "Tuesday";
	}
	else if (dayOfTheWeek(month, day, year) == 4) {
		return "Wednesday";
	}
	else if (dayOfTheWeek(month, day, year) == 5) {
		return "Thurday";
	}
	else if (dayOfTheWeek(month, day, year) == 6) {
		return "Friday";
	}
}

// converts the number month into a word
string monthOfTheYear(int month) {
	if (month == 1) {
		return "January";
	}
	else if (month == 2) {
		return "Febuary";
	}
	else if (month == 3) {
		return "March";
	}
	else if (month == 4) {
		return "April";
	}
	else if (month == 5) {
		return "May";
	}
	else if (month == 6) {
		return "June";
	}
	else if (month == 7) {
		return "July";
	}
	else if (month == 8) {
		return "August";
	}
	else if (month == 9) {
		return "September";
	}
	else if (month == 10) {
		return "October";
	}
	else if (month == 11) {
		return "November";
	}
	else if (month == 12) {
		return "December";
	}
}