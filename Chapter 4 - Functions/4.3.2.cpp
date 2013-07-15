/*

THIS PROGRAM CALCULATES THE TRIANGLE OF N

*/

#include <iostream>
#include <cmath>
using namespace std;

double triangle(int n);

int main() {
	
	while(true) {
		int i;
		cout << "Enter a number (0 to exit): ";
		cin >> i;
		
		if(i == 0)
			break;
		
		cout << triangle(i);
		cout << endl;
		
	}
	return 0;
}

double triangle(int n) {
	if(n == 0) {
		return 0;
	} else {
		return n + triangle(n - 1);
	}
}
