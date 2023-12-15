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
    int l = 0, d = n-1;
    while( l < d ){       
        if( a[l] + a[d] > s ){
            d--;
        }
        else if( a[l] + a[d] < s){
            l++;
        }
        else{
            br++;
            l++;
            d--;
        }
    }
    
    cout << br;

    
 }
