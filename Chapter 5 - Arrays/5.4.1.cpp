/*

CHOOSES A RANDOM COLOR AND RANDOM SHAPE

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int rand_0toN1(int n);
void get_a_bag();

char *colors[4] = {"red", "blue", "orange", "green"};
char *shapes[2] = {"ball", "cube"}; 

int main() {
	
	int n, i;
	
	srand(time(NULL));
	
	while(1) {
		cout << "Enter no. of things to draw (0 to exit): ";
		cin >> n;
		if(n == 0)
			break;
		
		for(i = 1; i <= n; i++)
			get_a_bag();
	}
	
	return 0;
}

int rand_0toN1(int n) {
	return rand() % n;
}

void get_a_bag() {
	int r;
	int s;
	int thing;
	
	thing = rand_0toN1(8);
	r = thing % 2;
	s = thing / 2;
	
	cout << "A " << shapes[r] << " shaped " << colors[s] << " thing." << endl;
}
