#include <bits/stdc++.h>
using namespace std;
// konj
int brr, brk; // br. redova i kolona
int tabla[10][10];
int br = 1;
vector<vector<int>>potezi = { {-2, -1}, {-2, 1}, {-1, -2}, {-1, 2},
                              {1, -2}, {1, 2}, {2, -1}, {2, 1} };

void ispis() {
    cout << br++ << '\n';
    for (int r = 0; r < brr; r++) {
        for (int k = 0; k < brk; k++)
            cout << setw(2) << tabla[r][k] << ' ';
        cout << '\n'; }
    cout << '\n'; }

void obidji(int r, int k, int potez) {
    tabla[r][k] = potez; // upis poteza
    if ( potez == brr * brk ) // kraj?
        ispis();
    for ( int i = 0; i < 8; i++ ) { // probaj sve poteze...
        int rr = r + potezi[i][0];
        int kk = k + potezi[i][1];
        if ( ( 0 <= rr && rr < brr ) && // red nije -1 ni 1234
             ( 0 <= kk && kk < brk ) && // kolona ...
             ( tabla[rr][kk] == 0 ) ) // polje nije poseceno
            obidji(rr, kk, potez + 1); }
    tabla[r][k] = 0; }

int main() {
    cin >> brr >> brk;
    obidji(0, 0, 1); // pocetna poz. (0,0) i r.b.     
} 
