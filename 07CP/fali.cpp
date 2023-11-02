#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, s = 0, x;
    cin >> n;
    for(int i = 0;i < n; i++){
        cin >> x;
        s+= x;
    }
    cout << (n*(n+1))/2-s;
    
    


    
 }
