/*

THIS PROGRAM CALCULATES ALL THE PRIME NUMBER FROM 2 TO 20

*/

#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n);

int main() {
	
	cout << "Calculating primes from 2 to 20..." << endl;
	
	for(int i = 2; i <= 20; i++) {
		if(prime(i)) {
			cout << i << " is a prime number." << endl;
		} else {
			cout << i << " is NOT a prime number." << endl;
		}
	}	
	return 0;
}

bool prime(int n) {
	int i;
	double sqrt_of_n = sqrt(n);
	
	for(i = 2; i <= sqrt_of_n; i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}
