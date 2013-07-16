/*

ARRAY SORTER WHICH USES DOUBLES

*/

#include <iostream>
using namespace std;

void sort(double n);
void swap(double *a, double *b);

double a[10];

int main() {
	
	int i;
	
	for(i = 0; i < 10; i++) {
		cout << "Enter array element " << i << ": ";
		cin >> a[i];
	}
	
	sort(10);
	
	cout << "Here's the array sorted: " << endl;
	
	for(i = 0; i < 10; i++) {
		cout << "#" << i << ": " << a[i] << endl;;
	}
	
	return 0;
}

void sort(double n) {
	int i, j, high;
	
	for(i = 0; i < n - 1; i++) {
		high = i;
		for(j = i + 1; j < n; j++)
			if(a[j] < a[high])
				high = j;
		
		if(i != high)
			swap(&a[i], &a[high]);
	}
}

void swap(double *a, double *b) {
	double temp = *a;
	*a = *b;
	*b = temp;
}