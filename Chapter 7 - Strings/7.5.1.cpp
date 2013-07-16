/*

ASKS FOR DOG INFO AND CONCATENATES IT INTO A STRING AND PRINTS IT

*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string name;
	string breed;
	string age;
	
	cout << "What's your dog's name? ";
	getline(cin, name);
	
	cout << "What's your dog's breed? ";
	getline(cin, breed);
	
	cout << "What's your dog's age? ";
	getline(cin, age);
	
	string all_together = "Your dog's name is " + name + ". The dog's age is " + age + " and it's breed is " + breed;
	
	cout << all_together << endl;
	
	return 0;
}