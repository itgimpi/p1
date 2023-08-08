#include<bits/stdc++.h>
using namespace std;
// zameni cifre jedinice i stotine u npr. 9-cifrenom broju
int main() {
    int n; cin >> n;
    int nn = n; // n se u programu menja, zato se pamti u nn
    // n = 2349 problem dimenzije 4, 4 cifre 

    int j, d, s, h; // problem je slican prethodnom...
    j = n % 10; // 9 
    n /= 10; // 
    d = n % 10; // 4, nije neophodno za resenje
    n /= 10; // 
    s = n % 10; // 3
    n /= 10; //
    h = n; // 2, nije neophodno za resenje
    
    nn -= j * 1; // nn = 2349 -> 2340, na poziciju jedinice se postavlja 0
    nn -= s * 100; // nn = 2340 -> 2040, na poziciju stotine se postavlja 0

    nn += s;  // nn = 2040 -> 2043, na mesto jedinice ide cifra stotine
    nn += j * 100; // nn = 2043 -> 2943, na mesto stotine ide cifra jedinice

    cout << nn << '\n';
    return 0; }