/*

STRNCPY AND STRNCAT

*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[600];
	char name[100];
	char addr[200];
	char work[200];
	
	cout << "Name: ";
	cin.getline(name, 99);
	cout << "Address: ";
	cin.getline(addr, 199);
	cout << "Work: ";
	cin.getline(work, 199);
	
	strncpy(str, "\nMy name is ", 599);
	strncat(str, name, 599 - strlen(str));
	strncat(str, ", I live at ", 599 - strlen(str));
	strncat(str, addr, 599 - strlen(str));
	strncat(str, ", and I work at ", 599 - strlen(str));
	strncat(str, work, 599 - strlen(str));
	
	cout << str << endl;
	
	return 0;
}