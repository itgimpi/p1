#include<bits/stdc++.h>  // task https://petlja.org/biblioteka/r/Zbirka/razlomak_u_mesovit_broj
using namespace std;

int main() {
    int gore, dole;
    cin >> gore >> dole;
    // npr. gore = 23, dole = 8
    // gore / dole je 2 (celobrojno deljenje), gore % dole je 7 (ostatak), dole je 8
        cout << gore / dole << ' ' << gore % dole << ' ' << dole << '\n'; // korektan ispis
    return 0; }