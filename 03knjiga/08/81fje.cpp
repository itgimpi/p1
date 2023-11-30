#include<bits/stdc++.h>
using namespace std;

// Originalni C nacin

int kvadrat(int ); // kao int x; ovo je deklaracija f-je

int main() { // Glavna f-ja, od nje pocinje izvrsenje programa
	printf("Kvadrat broja %i je %i\n", 5, kvadrat(5));
	printf("Kvadrat broja %i je %i\n", 9, kvadrat(9));
	return 0; 	}

int kvadrat(int n) { // definicija f-je kvadrat
	return n*n; }