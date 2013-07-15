/*

CREATES AN ARRAY OF 7 ELEMENTS, ASKS THE USER FOR THE DATA, PRINTS THEM AND THE SUM

*/

#include <iostream>
using namespace std;

int main() {
	
	int scores[7];
	
	int sum = 0;
	
	for(int i = 0; i < 7; i++) {
		cout << "Value for " << i << ": ";
		cin >> scores[i];
	} 
	
	for(int i = 0; i < 7; i++) {
		cout << scores[i] << endl;
		sum = sum + scores[i];
	} 
	
	cout << "Sum: " << sum << endl;
	
	return 0;
}
