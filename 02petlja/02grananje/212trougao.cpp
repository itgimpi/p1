#include<bits/stdc++.h> https://petlja.org/biblioteka/r/Zbirka/postoji_li_trougao_datih_duzina_stranica
using namespace std;

int main() {
    float a, b, c; cin >> a >> b >> c;

    /* nemoguce...
    a = 5 -----
          - -
    b = 1, c = 1

    moguce...
    a = 5 -----
           ------
    b = 4, c = 2   

    dakle, da bi trougao bio moguc, svaka strana treba da bude manja od zbira ostale dve...
    */

    if ( a < b + c && b < a + c && c < a + b ) cout << "da"; // moguce?
    else cout << "ne";

    return 0; 

}