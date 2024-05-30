#include <bits/stdc++.h>
using namespace std;

// spajanje 2 SORTIRANA niza
void spoji( vector<int>&a, int i, int m, // prvi niz, od i do m
            vector<int>&b, int j, int n, // drugi niz, od j do n
            vector<int>&c, int k ) {     // treci, od k
    while ( i <= m && j <= n ) 
        c[k++] = a[i] <= b[j] ? a[i++] : b[j++];
    while ( i <= m ) // preostalo
        c[k++] = a[i++];
    while ( j <= n ) // preostalo
        c[k++] = b[j++];  }

void msort(vector<int>&a, int l, int d, vector<int>&tmp) {
    if ( l < d ) { // deljenje dok ima bar 2 elementa...
        int s = ( l + d ) / 2; // sredina
        msort(a, l, s, tmp); // leva polovina
        msort(a, s + 1, d, tmp); // desna polovina
        spoji(a, l, s, a, s+1, d, tmp, l); // spajanje
        // vrati sortirani deo iz tmp u a
        for ( int i = l; i <= d; i++ )
            a[i] = tmp[i];   } }

int main() {
    int n; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int>tmp(a.size());
    msort(a, 0, n-1, tmp); // pocetak i kraj
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
   
    
 }
