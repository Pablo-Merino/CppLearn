/*

THIS PROGRAM GENERATES THE FACTORIAL OF A NUMBER

*/

#include <iostream>

double factorial(double x);

using namespace std;

int main() {
	double x;
	
	cout << "Enter a number: ";
	cin >> x;
	
	cout << "The result is: " << factorial(x) << endl;
	
	return 0;
}

double factorial(double x) {
	double acc_result = 1;
	for(int i = 1; i <= x; i++) {
		acc_result = acc_result * i;
	}
	return acc_result;
}