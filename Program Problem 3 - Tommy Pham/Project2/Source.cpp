/*

Tommy Pham - October 5, 2017 - 1st Period

Program Problem 3 : Three Digit Ascend Descend Selection

Create a program that a perfect user will enter a 3 digit number.

*/

// Libraries

#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . ." << endl;

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {
	// Variables
	int three_dig_num;

	// Questions
	cout << "Enter a number that has 3 digits." << endl;
	cin >> three_dig_num;

	int x = three_dig_num;
	int c = x % 10;
	int b = (x / 10) % 10;
	int a = (x / 100);
	
	if (a > b && b > c) {
		cout << "The number " << a << b << c << " is descending" << endl;
		//Descending
	}
	else if (a < b && b < c) {
		cout << "The number " << a << b << c << " is ascending" << endl;
		//Ascending
	}
	
		
		else {
			cout << "The number " << a << b << c << " is neither" << endl;
			//neither
		}
	pause(); // pauses to see the displayed text
}