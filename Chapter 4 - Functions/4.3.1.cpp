/*

THIS PROGRAM CALCULATES THE DIVISORS OF N

*/

#include <iostream>
#include <cmath>
using namespace std;

void get_divisors(int n);

int main() {
	
	while(true) {
		int i;
		cout << "Enter a number (0 to exit): ";
		cin >> i;
		
		if(i == 0)
			break;
		
		get_divisors(i);
		cout << endl;
		
	}
	return 0;
}

void get_divisors(int n) {
	int i;
	double sqrt_of_n = sqrt(n);
	
	for(i = 2; i <= sqrt_of_n; i++) {
		if(n % i == 0) {
			cout << i << ", ";
			get_divisors(n / i);
			return;
		}
	}
	cout << n;
}
