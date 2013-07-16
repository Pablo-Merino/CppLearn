/*

STRNCPY AND STRNCAT (WITH MAX_SIZE)

*/

#include <iostream>
#include <cstring>
using namespace std;

#define MAX_SIZE 599

int main() {
	char str[MAX_SIZE+1];
	char name[100];
	char addr[200];
	char work[200];
	
	cout << "Name: ";
	cin.getline(name, 99);
	cout << "Address: ";
	cin.getline(addr, 199);
	cout << "Work: ";
	cin.getline(work, 199);
	
	strncpy(str, "\nMy name is ", MAX_SIZE);
	strncat(str, name, MAX_SIZE - strlen(str));
	strncat(str, ", I live at ", MAX_SIZE - strlen(str));
	strncat(str, addr, MAX_SIZE - strlen(str));
	strncat(str, ", and I work at ", MAX_SIZE - strlen(str));
	strncat(str, work, MAX_SIZE - strlen(str));
	
	cout << str << endl;
	
	return 0;
}