#include <bits/stdc++.h>
using namespace std;

int main() { 
    int a[10]; // 10 je samo kolko broja da se rezervisu...
    int *p;

    p = a; // ne treba & (NIZ)

    *p = 10; // a0 = 10
    p++;
    *p = 20; // a1 = 20
    p = &a[2]; *p = 30; // a2 = 30
    p = a + 3; *p = 40; //a3 = 40
    p = a; *(p + 4) = 50;

    
    cout << a[0] << endl; // 50 100


    
	
	return 0; }