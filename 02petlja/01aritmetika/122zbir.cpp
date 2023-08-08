#include<bits/stdc++.h>
using namespace std;
// https://petlja.org/biblioteka/r/Zbirka/zbir_cifara
int main() {
    int n; cin >> n;
    // neka je n = 1234 problem je dimenzije 4, ima 4 cifre
    int j, d, s, h; // cifre jedinice, desetice, ...
    j = n % 10; // ostatak pri deljenju 1234 / 10 = 123 (4), 4 je cifra jedinice
    n /= 10; // n = 123, novi problem je dimenzije 3, ostale su tri cifre...
    d = n % 10; // d = 3, cifra desetice se odredjuje lako
    n /= 10; // n = 12, problem dimenzije 2, dve cifre...
    s = n % 10; // s = 2
    n /= 10; // n = 1
    h = n; // cifra hiljade


    cout << h + s + d + j << '\n'; // ispis resenja
    return 0; 
}