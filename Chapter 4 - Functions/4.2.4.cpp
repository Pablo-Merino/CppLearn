/*

THIS PROGRAM TELLS YOU THE FIRST PRIME NUMBER LARGER THAN N

*/

#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n);

int main() {
	
	int i;

	
	cout << "Enter number (0 to exit): ";
	cin >> i;
	int x = i;
		
	if(i == 0) {
		exit(0);
	} 
	
	while(!prime(x)) {
		x++;
	}
	
	cout << x << " is the first prime number larger than " << i << "." << endl;
			
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