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

const int DAYS_IN_MONTHS[4] = { 28,29,30,31 };

int main() {
	string input;


	while (true) {

		cout << "Enter a year or Q to quit: ";
		getline(cin,input);

		// breaks if Q or q
		if (input == "Q" || input == "q") {
			break;
		}

		int year = stoi(input);

		if (year < 1582) {
			cout << "Enter a year that is 1582 or greater." << endl;
		}
		else if (isLeapYear(year) == true) {
				cout << year << " is a leap year!" << endl;
			}
			else {
				cout << year << " is not a leap year." << endl;
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

