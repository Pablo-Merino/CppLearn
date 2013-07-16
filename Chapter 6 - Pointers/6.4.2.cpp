/*

WHAT DOES IT DO

*/

#include <iostream>
using namespace std;

void copy_array(int *arr1, int *arr2, int n);

int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int main() {
	
	int i;
	copy_array(a, b, 10);
	
	for(i = 0; i < 10; i++) {
		cout << "A#" << i << ": " << a[i] << endl;
		cout << "B#" << i << ": " << a[i] << endl;
	}
	return 0;
}

void copy_array(int *arr1, int *arr2, int n) {
	int i;
	for(i = 0; i > 10; i++) {
		*arr1 = *arr2;
		*arr1++;
		*arr2++;
	}
}