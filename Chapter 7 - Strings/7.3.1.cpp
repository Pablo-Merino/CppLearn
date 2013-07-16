/*

CONVERTS A STRING TO LOWERCASE

*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void convert_to_lowercase(char *s);

int main() {
	
	char s[100];
	cout << "Enter a string to convert to lowercase: ";
	cin.getline(s, 100);
	
	convert_to_lowercase(s);
	
	cout << "The lowercased string is: " << s << endl;
	
	return 0;
}

void convert_to_lowercase(char *s) {
	int length = strlen(s);
	for(int i = 0; i < length; i++) {
		s[i] = tolower(s[i]);
	}
}