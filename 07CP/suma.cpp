#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int s; cin >> s;
    int n, br = 0 ; cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(a[i]+ a[j] == s){
                br++;
                cout << a[i] << ' ' << a[j] << '\n';
            }
        }
    }
    cout << br;

    
 }
