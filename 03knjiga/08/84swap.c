#include <stdio.h>
// NE VALJA!!!

void swap(int a, int b) { // kopije x i y
	int temp = a;
	a = b;
	b = temp; 	
	//printf("a = %d, b = %d\n", a, b);
}

int main() { // x i y su u main-u
	int x = 3, y = 5;
	swap(x, y);
	printf("x = %d, y = %d\n", x, y); 	}