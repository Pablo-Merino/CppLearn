/*

THIS PROGRAM PRINTS ALL THE NUMBERS FROM 1 TO N

*/

#include <iostream>

void print_out(double x);

using namespace std;

int main() {
	double x;
	
	cout << "Enter a number: ";
	cin >> x;
	
	print_out(x);
	
	return 0;
}

void print_out(double x) {	
	for(int i = 1; i <= x; i++) {
		cout << i << endl;
	}
}