#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[1010]; // stat. niz
    int n; cin >> n;

    for( int i = 0; i < n; i++ ){
        cin >> a[i];
    }
    for( int i = n-1; i >= 0; i-- ){
        cout << a[i] << endl;
    }
    
    return 0;  
}