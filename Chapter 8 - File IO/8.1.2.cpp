/*

WHAT DOES IT DO

*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#define MAX_PATH 999
int main() {
	
	char text[MAX_PATH+1] = "";
	char line[MAX_PATH+1];
	
	cout << "You can now write text..." << endl;

	while(true) {
		cin.getline(line, MAX_PATH);
		if(strlen(line) == 0) {
			break;
		} 
		strncat(line, "\n", MAX_PATH);
		strncat(text, line, MAX_PATH);
	}
	
	ofstream file_out("data.txt");
	if(!file_out) {
		cout << "Error! The file stream couldn't be opened!" << endl;
		return -1;
	}
	
	cout << "The file was saved." << endl;
	file_out << text << endl;
	file_out.close();
	
	return 0;
}