/*

ASKS FOR A TEMP AND CONVERTS IT TO FAHRENHEIT

*/

#include <iostream>
#include <stdlib.h>
using namespace std;

void convert_temp(double *p);

int main() {
	
	double temp;
	
	cout << "Enter a Centigrade temperature: ";
	cin >> temp; 
	
	convert_temp(&temp);
	
	cout << "Converted: " << temp << "ºF" << endl;
	
	return 0;
}

void convert_temp(double *p) {
	*p = ((*p * 1.8) + 32);
}