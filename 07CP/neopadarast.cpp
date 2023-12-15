#include <bits/stdc++.h>
using namespace std;
//  Неопадајућа растојања суседних елемената
// https://petlja.org/biblioteka/r/Zbirka2/rastuce_razlike_susednih
int main() {
   int n; cin >> n;
   vector<int>a(n);
   for (int i = 0; i < n; i++) cin >> a[i];

   sort( a.begin(), a.end() ); 
   // najmanji je levo, najveci desno, to je i max razlika

   vector<int>res(n);
   int l = 0, d = n - 1, br = n - 1;

   while ( l < d ) {
        res[br--] = a[d--];
        res[br--] = a[l++];    }
    if ( n % 2 == 1 )
        //res[br] = a[l];
        //res[br] = a[d];
        res[br] = a[n/2];

    for (int i = 0; i < n; i++) cout << res[i] << ' ';

    
 }
