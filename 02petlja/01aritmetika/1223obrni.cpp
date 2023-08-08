#include<bits/stdc++.h> // https://petlja.org/biblioteka/r/Zbirka/obrni_cifre
using namespace std;

int main() {
    int n; cin >> n; 
    //int nn = n;
    // neka je n = 1234567 -> 123 7654
    int j, d, s, h; // odredi zadnje 4 cifre...
    j = n % 10; // 7
    n /= 10; // n = 123456
    d = n % 10; // 6
    n /= 10; // n = 12345
    s = n % 10; // 5
    n /= 10; // n = 1234
    h = n % 10; // 4
    n /= 10; // n = 123
    n *= 10000; // n = 1230000, zadnje 4 cifre postavi na 0

    n += h; // n = 1230004, na mesto jedinice ide stara cifra hiljade, 4
    n += s * 10; // n = 1230054, na mesto desetice ide stara cifra stotine, 5
    n += d * 100; // n = 1230654, na mesto stotine ide stara cifra desetice, 6
    n += j * 1000; // n = 1237654, na mesto hiljade ide stara cifra jedinice, 7

    cout << n << '\n';
    return 0; 

}