#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int stepen(int osn, int st) { // O(n)
    int res = 1;
    for (int i = 0; i < st; i++)
        res *= osn;
    
    return res; }

// int * int -> long long

ull stepen2(int a, int b) { // O(log n) rekurzija

    if ( b == 0 ) // BC, osnovni slucaj
        return 1;

    ull tmp = stepen2(a, b/2);

    if ( b % 2 == 0 ) // stepen je par
        return tmp * tmp;

    else return tmp * tmp * a; 

}

ull stepen3(int x, int n) { // O(log n) iteracija najresenje
    ull res = 1;

    while ( n > 0 ) {

        if ( n % 2 == 1 ) // nepar?
            res *= x;

        x *= x;
        n /= 2;     }

    return res; }

ull stepen4(int x, int n) { // O(log n) iteracija najresenje
    ull res = 1;

    while ( n > 0 ) {

        if ( n & 1 ) // bitska provera neparnosti 
            res *= x;

        x *= x;
        n >> 1;     } // bitsko deljenje sa 2

    return res; }

int main() {
    // int x, n; cin >> x >> n;
    int x = 2, n = 10;

    cout << stepen(x, n) << '\n';
    cout << stepen2(x, n) << '\n';
    cout << stepen3(x, n) << '\n';
    cout << stepen4(x, n) << '\n'



    }