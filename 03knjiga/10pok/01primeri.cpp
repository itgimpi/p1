#include <bits/stdc++.h>
using namespace std;

int main() { 
    int prva, druga; // deklaracije
    // prva = 5; druga = 10;
    int *pok; // pok je pokazivac na tip int (4B)

    pok = &prva; // u pok. ide adresa od prve prom., tj. njena adresa
    *pok = 5; // sadrzaj adrese na koju ukazuje pok je 5

    pok = &druga;
    *pok = 10;

    cout << prva << ' ' << druga << endl;
    
	
	return 0; }