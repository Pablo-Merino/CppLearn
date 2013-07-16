/*

TAKES A POINTER TO AN INT WITH VALUE 15 AND MULTIPLIES IT BY 3

*/

#include <iostream>
#include <stdlib.h>
using namespace std;

void triple_it(int *p);

int main() {
	
	int a = 15;
	
	cout << "Val of a before tripling: " << a << endl;
	
	triple_it(&a);
	
	cout << "Val of a after tripling: " << a << endl;
	
	return 0;
}

void triple_it(int *p) {
	*p = *p * 3;
}