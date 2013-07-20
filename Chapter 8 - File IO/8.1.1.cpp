/*

WHAT DOES IT DO

*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#define MAX_PATH 999
int main() {
	
	char file_path[MAX_PATH + 1];	
	char file_name[MAX_PATH + 1];
	
	cout << "Insert a file path: ";
	cin.getline(file_path, MAX_PATH);
	cout << "Insert a file name: ";
	cin.getline(file_name, MAX_PATH);
	
	char full_file_path[MAX_PATH + 1];
	
	strncpy(full_file_path, file_path, MAX_PATH);
	strncat(full_file_path, "/", MAX_PATH - strlen("/"));
	strncat(full_file_path, file_name, MAX_PATH - strlen(full_file_path));
	
	cout << "Full file path: " << full_file_path << endl;
	
	ofstream file_out(full_file_path);
	if(!file_out) {
		cout << "Error! The file stream couldn't be opened!" << endl;
		return -1;
	}
	
	cout << full_file_path << " was opened." << endl;
	file_out << "Hey man!" << endl;
	file_out << "How's goin'?" << endl;
	file_out.close();
	
	return 0;
}