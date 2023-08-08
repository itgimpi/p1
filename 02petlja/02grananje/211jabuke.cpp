#include<bits/stdc++.h> // https://petlja.org/biblioteka/r/Zbirka/jabuke
using namespace std;

int main() {
    int prvi, drugi; cin >> prvi >> drugi; // broj jabuka prvog i drugog

    if ( prvi > drugi ) // ako prvi ima vise...
        cout << "DA" << endl; // ispisi DA
    else // u suprotnom...
        cout << "NE" << endl; // ispisi NE

    return 0; 

}