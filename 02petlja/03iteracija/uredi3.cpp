#include<bits/stdc++.h>
using namespace std;

int main() {
    //int a, b, c; if...

    int niz[3]; //stat. niz
    cin >> niz[0] >> niz[1] >> niz[2];
    sort(niz, niz+3);
    cout << niz[0] << ' ' << niz[1] << ' ' << niz[2] << '\n';

    vector<int>v(3); // din. niz
    cin >> v[0] >> v[1] >> v[2];
    sort(begin(v), end(v));
    cout << v[0] << ' ' << v[1] << ' ' << v[2] << '\n';    

    vector<int>vv;
    int x; cin >> x; vv.push_back(x);
    cin >> x; vv.push_back(x);
    cin >> x; vv.push_back(x);

    sort(begin(vv), end(vv));
    cout << v[0] << ' ' << v[1] << ' ' << v[2] << '\n';


    return 0;  
}