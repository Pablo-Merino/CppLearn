/*

PREDICTABILITY OF RANDOM NUMBERS

*/

#include <iostream>
#include <ctime>
#include <cmath>

#define NUMBER_OF_VALUES 10

using namespace std;

int rand_0toN1(int n);

int hits[NUMBER_OF_VALUES];

int main() {
	
	int n;
	int i;
	int r;
	
	srand(time(NULL));
	
	cout << "Enter how many trials: ";
	cin >> n;
	
	for(i = 0; i < n; i++) {
		r = rand_0toN1(NUMBER_OF_VALUES);
		hits[r]++;
	}
	
	for(i = 0; i < NUMBER_OF_VALUES; i++) {
		cout << i << ": " << hits[i] << "  Accuracy: ";
		double results = hits[i];
		cout << results / (n / 10.0) << endl;
	}
	
	return 0;
}

int rand_0toN1(int n) {
	return rand() % n;
}
