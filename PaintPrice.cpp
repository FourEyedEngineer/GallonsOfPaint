#include <iostream>
#include <iomanip>
using namespace std;

void main() {
	double gallons, total, tax = .0625;
	int gcost = 5;

	cout << "Please enter the number of gallons of paint you want: ";
	cin >> gallons; //Get number of gallons from user
	cout << endl;

	cout << "Total amount with tax: $";
	total = gallons * gcost; // Cost without tax
	total += total * tax; // Cost with tax
	cout << setprecision(4) << total << endl;

	cin.get(); // Considers the the null terminator
	cin.get(); // Considers user input
}