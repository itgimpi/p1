#include<bits/stdc++.h>
using namespace std;
// dajkstra
int main() {
    vector<int>v {1,3,5,4,8,5,7,2,3,6};
    int n = v.size();
    int dg = 3, gg = 5;
    int l = 0, d = n-1;
    int br1 = 0, br2 = 0, br3 = 0;
    int i = 0;
    while(i<=d){
        if(v[i] < dg){
            swap(v[i++],v[l++]);
        } 
        else if(v[i] > gg){
            swap(v[i],v[d--]);
        }
        else
            i++;
            
        
    }
    for( i = 0; i < l; i++){
        cout << v[i] << ' ';
    }
    cout << '\n';
    for(; i <= d; i++){
        cout << v[i] << ' ';
    }
    cout << '\n';
    for( ; i < n; i++){
        cout << v[i] << ' ';
    }
    cout << '\n';

    
    return 0;  
}