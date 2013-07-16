/*

SPLITS A STRING WITH A TOKEN (STRTOK)

*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
	
	char string[81], *p;
	int tokens_found = 0;
	
	cout << "Type an string delimited with commas: ";
	cin.getline(string, 81);
	
	p = strtok(string, ", ");
	while(p != NULL) {
		cout << p << endl;
		p = strtok(NULL, ", ");
		tokens_found++;
	}
	cout << "Found " << tokens_found << " tokens." << endl;
	
	return 0;
}