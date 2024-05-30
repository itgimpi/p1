#include<bits/stdc++.h>
using namespace std;
// C++ biblio f-je
int main() {
    vector<int>v {1,3,5,4,8,5,7,2,3,6};
    int n = v.size();
    vector<int>v1(n);
    vector<int>v2(n);
    vector<int>v3(n);
    int dg = 3, gg = 5;
    int br1 = 0, br2 = 0, br3 = 0;
    for(int i = 0; i < n; i++){
        if(v[i] < dg)
            v1[br1++] = v[i];
        else if(v[i] > gg)
            v3[br3++] = v[i];
        
        else
            v2[br2++] = v[i];
        
    }
    for(int i = 0; i < br1; i++){
        cout << v1[i] << ' ';
    }
    cout << '\n';
    for(int i = 0; i < br2; i++){
        cout << v2[i] << ' ';
    }
    cout << '\n';
    for(int i = 0; i < br3; i++){
        cout << v3[i] << ' ';
    }
    cout << '\n';

    
    return 0;  
}