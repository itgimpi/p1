#include<bits/stdc++.h>
using namespace std;

// Noviji C nacin u C++, bez deklaracije
// F-ja ide pre main-a

int kvadrat(int n) { // f-ja kvadrat
	return n*n; }

int main() { // Glavna f-ja, od nje pocinje izvrsenje programa
	cout << "Kvadrat broja " << 5 << " je " << kvadrat(5) << endl;
	cout << "Kvadrat broja " << 9 << " je " << kvadrat(9) << endl;

	return 0; 	}

