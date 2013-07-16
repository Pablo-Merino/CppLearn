/*

ASKS FOR A NUMBER AND MAKES THE SQUARE ROOT OF IT (CIN.GETLINE)

*/

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

int get_number();

int main() {
	
	int x;
	
	while(true) {
		cout << "Enter a number (0 to exit): ";
		x = get_number();
		if(x == 0)
			break;
		cout << "The square root of " << x << " is: " << sqrt(x) << endl;
	}
	
	return 0;
}

int get_number() {
	char s[100];
	
	cin.getline(s, 100);
	if(strlen(s) == 0)
		return 0;
	
	return atoi(s);
}