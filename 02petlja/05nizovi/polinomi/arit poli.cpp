#include<bits/stdc++.h>
using namespace std;
// Аритметика над полиномима,                          из делова
struct polinom {
    int n;
    vector<int>a; } ; // moglo je i <double>

polinom napravi(int);
polinom unos();
void ispis(polinom);
polinom zbir(polinom, polinom);
polinom proizvod(polinom, polinom);

int main() {
    polinom p, q;
    p = unos();
    q = unos();
    ispis(p); ispis(q);
    ispis(zbir(p, q));
    //ispis(proizvod(p, q));
    
    return 0; }

polinom napravi(int n) {
    polinom p;
    p.n = n;
    p.a.resize(n+1, 0);
    return p; }

polinom unos(){
    int n; cin >> n;
    polinom p = napravi(n); // napravi 0 polinom, 0 0 0 0 0 (od 0 do n)
    for (int i = p.n; i >= 0; i--)
        cin >> p.a[i];
    return p; }

void ispis(polinom p){
    for (int i = p.n; i >= 0; i--)
        cout << p.a[i] << ' ';
    cout << endl; }

polinom zbir(polinom p, polinom q) {
    polinom r = napravi( max(p.n, q.n) );
    for (int i = 0; i <= r.n; i++) {
        if (i <= p.n)
            r.a[i] += p.a[i];
        if (i <= q.n)
            r.a[i] += q.a[i]; }
    return r; }

polinom proizvod(polinom p, polinom q) {
    polinom r = napravi( p.n + q.n );
    for (int i = 0; i <= p.n; i++) 
        for (int j = 0; j <= q.n; j++)
            r.a[i+j]+=p.a[i]*q.a[j];

    return r; }