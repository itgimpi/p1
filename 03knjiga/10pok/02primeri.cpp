#include <bits/stdc++.h>
using namespace std;

int main() { 
    int prvi = 5, drugi = 15;
    int *p1, *p2;

    p1 = &prvi; // p1 --------------> prvi = 5
    p2 = &drugi;// p2 --------------> drugi = 15

    cout << p1 << ' ' << p2 << endl; // adrese od prvi, drugi
    cout << prvi << ' ' << drugi << endl; // 5 15
    cout << *p1 << ' ' << *p2 << endl; // 5 15

    *p1 = 50; // prvi = 50
    *p2 = 100; // drugi = 100

    p2 = p1;

    cout << prvi << ' ' << drugi << endl; // 50 100


    
	
	return 0; }