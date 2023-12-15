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
    sort(a.begin(), a.end());
    for(int i = 0; i < n-2; i++){
        if(binary_search(a.begin()+i+1, a.end(),s-a[i])){
            br++;
        }

    }
    
    cout << br;

    
 }
