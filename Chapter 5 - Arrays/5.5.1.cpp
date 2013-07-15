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
int select_next_available(int n);

bool thing_drawn[8];
int things_remaining = 8;

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
	if(things_remaining == 0) {
		cout << "Reshuffling..." << endl;
		things_remaining = 8;
		for(int i = 0; i < 8; i++) 
			thing_drawn[i] = false;
	}
	int r;
	int s;
	
	int n, thing;
	
	n = rand_0toN1(things_remaining--);
	thing = select_next_available(n);
	
	r = thing % 2;
	s = thing / 2;
	
	cout << "A " << shapes[r] << " shaped " << colors[s] << " thing." << endl;
}

int select_next_available(int n) {
	int i = 0;
	
	while(thing_drawn[i])
		i++;
	
	while(n-- > 0) {
		i++;
		while(thing_drawn[i])
			i++;
	}
	thing_drawn[i] = true;
	return i;
	
}