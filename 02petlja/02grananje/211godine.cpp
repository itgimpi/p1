#include<bits/stdc++.h>
using namespace std; // https://petlja.org/biblioteka/r/Zbirka/zbir_godina_brace_i_sestre

int main() {
    int zbir; cin >> zbir;
    /*
    
    blizanci   ... po x
    seka   ....... x + 3
    ukupnu ....... 3x + x + 3 = 4x + 3

    dakle, ukupan broj je moguc ako je oblika 4x+3
    */

    zbir -= 3; // od broja se oduzme 3

    if ( zbir % 4 == 0 ) // to sto ostane mora da bude deljivo sa 4
        cout << "da\n";
    else
        cout << "ne\n";

    return 0; 

}