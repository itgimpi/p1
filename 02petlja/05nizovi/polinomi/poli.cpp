#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// odredi vred. polinoma

ll vrednost(const vector<ll>&a, int x) { // ne valja O(n^2)
    ll n = a.size();
    ll val = 0;
    for (int i = 0; i < n; i++) {
        ll stepen = 1;
        for (int j = 1; j <= i; j++) {
            stepen *= x; }
        val += a[i] * stepen;  }
    return val; }

ll vrednost2(const vector<ll>&a, ll x) { // bolje O(n)
    int n = a.size();
    ll val = 0;
    ll stepen = 1;
    for (int i = 0; i < n; i++) {
        //val += a[i]*stepen; cout << a[i] << ' ' << stepen << ' ' << val << endl;
        val += a[i]*stepen;
        stepen *= x; }
    return val; }

ll horner(const vector<ll>&a, ll x) { // najbolje O(n)
    int n = a.size()-1;
    ll val = 0;
    for ( int i = n; i >= 0; i-- ) {
        val = val * x + a[i]; cout << val << endl; }
    return val; }

int main() {
    int n; cin >> n;
    vector<ll>a(n+1);
    for (int i = n; i >= 0; i--)
        cin >> a[i];
    ll x; cin >> x;

    cout << vrednost(a, x) << endl;
    cout << vrednost2(a, x) << endl;
    cout << horner(a, x) << endl;



    
    return 0; }