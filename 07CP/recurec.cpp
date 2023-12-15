#include <bits/stdc++.h>
using namespace std;
//  Реч у реч прецртавањем слова
// https://petlja.org/biblioteka/r/Zbirka2/rec_u_rec_precrtavanjem_slova
int main() {
    string s1, s2; cin >> s1 >> s2;
    int i1 = 0, i2 = 0; // na pocetak prvog i drugog

    while( i1 < s1.size() && i2 < s2.size() ) {
        if ( s1[i1] == s2[i2] ) i2++;
        i1++;
    }
    if (i2 == s2.size())
        cout << "da";
    else
        cout << "ne";



    
 }
