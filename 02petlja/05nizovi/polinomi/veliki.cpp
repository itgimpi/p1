#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// veliki brojevi

vector<int> unos();
void ispis(vector<int>);
void prenos(vector<int>&r);
vector<int>zbir(const vector<int>&a, const vector<int>&b);
vector<int> proizvod(const vector<int>&a, const vector<int>&b);

int main() {
    vector<int>a, b;
    a = unos(); b = unos();
    // ispis(a); ispis(b);

    ispis(zbir(a,b));
    cout << endl;
    ispis(proizvod(a,b));

    return 0; }

vector<int> unos(){
    string s; cin >> s;
    int n = s.size();
    vector<int>r(n);
    for ( int i = 0; i < n; i++ ) // okreni naopako 
        r[i] = s[n-i-1] - '0'; // i pretvori ASCII u int
    return r; }
void ispis(vector<int>broj){
    for (int i = broj.size()-1; i >= 0; i--)
        cout << broj[i];
    cout << endl; }

void prenos(vector<int>&r){
    for (int i = 0; i < r.size(); i++) {
        r[i+1] += r[i] / 10;
        r[i] %= 10;  } 
        
    if (r.back()==0) r.pop_back();
    }

vector<int> zbir(const vector<int>&a, const vector<int>&b){
    int n = max(a.size(), b.size());
    vector<int>r(n+1);
    for(int i = 0; i < n; i++) {
        r[i] = 0;
        if (i < a.size())
            r[i]+=a[i];
        if (i < b.size())
            r[i]+=b[i];     }
    prenos(r);        
    return r; }

vector<int> proizvod(const vector<int>&a, const vector<int>&b){
    int n = a.size() + b.size();
    vector<int>r(n, 0);
    for(int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            r[i+j] += a[i] * b[j]; }  }
       
    prenos(r);        
    return r; }   