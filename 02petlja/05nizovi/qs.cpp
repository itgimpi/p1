#include<bits/stdc++.h>
using namespace std;
// qs

void qs(vector<int>&a, int l, int d){ // l=0, d=n-1
    if ( l < d ) { // BC, ima bar 2 el.
        swap( a[l], a[l + rand() % (d-l+1)] );
        int m = l;
        for ( int i = l + 1; i <= d; i++ )
            if ( a[i] <= a[l] )
                swap( a[i], a[++m] );
        swap(a[l], a[m]);
        qs( a, l, m-1 );
        qs( a, m+1, d ); } }

int main() {
    vector<int>a {1,3,5,4,8,5,7,2,3,6};
    qs(a, 0, a.size()-1);
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << ' ';


    
    return 0;  
}