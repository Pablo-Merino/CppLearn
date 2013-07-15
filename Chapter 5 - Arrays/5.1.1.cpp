/*

CREATES AN ARRAY OF 8 ELEMENTS AND PRINTS THEM

*/

#include <iostream>
using namespace std;

int main() {
	
	int scores[8] = {5, 15, 25, 35, 45, 55, 65, 75};
	
	for(int i = 0; i < 8; i++) {
		cout << scores[i] << endl;
	} 
	
	return 0;
}