/*

THIS PROGRAM TELLS YOU IF A NUMBER IS PRIME OR NOT

*/

#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n);

int main() {
	
	int i;
	
	while(true) {
		cout << "Enter number (0 to exit): ";
		cin >> i;
		
		if(i == 0) {
			break;
		} 
		
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