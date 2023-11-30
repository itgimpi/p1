#include<bits/stdc++.h>
using namespace std;

// Originalni C nacin u C++

int kvadrat(int ); // kao int x; ovo je deklaracija f-je

int main() { // Glavna f-ja, od nje pocinje izvrsenje programa
	cout << "Kvadrat broja " << 5 << " je " << kvadrat(5) << endl;
	cout << "Kvadrat broja " << 9 << " je " << kvadrat(9) << endl;
	//printf("Kvadrat broja %i je %i\n", 9, kvadrat(9));
	return 0; 	}

int kvadrat(int n) { // f-ja kvadrat
	return n*n; }