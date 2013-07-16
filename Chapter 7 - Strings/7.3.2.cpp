/*

CONVERTS A STRING TO UPPERCASE (USING POINTERS)

*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void convert_to_uppercase(char *s);

int main() {
	
	char s[100];
	cout << "Enter a string to convert to uppercase: ";
	cin.getline(s, 100);
	
	convert_to_uppercase(s);
	
	cout << "The uppercased string is: " << s << endl;
	
	return 0;
}

void convert_to_uppercase(char *s) {
	int length = strlen(s);
	while(*s) {
		*s++ = toupper(*s);
	}
}
