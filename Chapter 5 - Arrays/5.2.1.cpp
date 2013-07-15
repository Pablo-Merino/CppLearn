/*

PREDICTABILITY OF RANDOM NUMBERS

*/

#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int rand_0toN1(int n);

int hits[5];

int main() {
	
	int n;
	int i;
	int r;
	
	srand(time(NULL));
	
	cout << "Enter how many trials: ";
	cin >> n;
	
	for(i = 0; i < n; i++) {
		r = rand_0toN1(5);
		hits[r]++;
	}
	
	for(i = 0; i < 5; i++) {
		cout << i << ": " << hits[i] << "  Accuracy: ";
		double results = hits[i];
		cout << results / (n / 10.0) << endl;
	}
	
	return 0;
}

int rand_0toN1(int n) {
	return rand() % n;
}