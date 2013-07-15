/*

THIS PROGRAM TELLS YOU THE FIRST PRIME NUMBER LARGER THAN ONE BILLION
*/

#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n);

int main() {
	
	int i = 1000000000;

	cout << "First prime number after one billion: ";
		
	while(!prime(i)) {
		i++;
	}
	
	cout << i << endl;
			
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