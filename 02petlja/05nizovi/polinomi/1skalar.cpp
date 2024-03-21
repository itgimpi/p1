#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int>v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    vector<int>v2;
    for (int i = 0; i < n; i++) {
        int el; cin >> el;
        v2.push_back(el); }
    
    int zbir = 0;
    for (int i =0; i < n; i++)
        zbir += v1[i] * v2[i];
    
    cout << zbir;
    
    return 0;  
}