/*

CREATES AN ARRAY OF 8 ELEMENTS AND PRINTS THEM AND THE SUM

*/

#include <iostream>
using namespace std;

int main() {
	
	int scores[6] = {10, 22, 13, 99, 4, 5};
	
	int sum = 0;
	
	for(int i = 0; i < 6; i++) {
		cout << scores[i] << endl;
		sum = sum + scores[i];
	} 
	
	cout << "Sum: " << sum << endl;
	
	return 0;
}