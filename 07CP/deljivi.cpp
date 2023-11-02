#include <bits/stdc++.h>
using namespace std;
//sporo

int main() {
    int a, b, k, br = 0;
    cin >> a >> b >> k;
    for(int i = a; i <= b; i++){
        if(i % k == 0){
            br++;
        }
    }
    cout << br;
    
    


    
 }
