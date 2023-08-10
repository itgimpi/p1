#include<iostream>
using namespace std;

int main() {
    int t, d; // temp. i dan
    int tmax, dmax; // maks. temp i maks dan

    d= 1;
    cin >> t; // prva temp.
    tmax = t;
    dmax = 1;

    for ( int i = 2; i <= 7; i++) {

        d++;
        cin >> t; // druga i sve ostale
        if ( t > tmax ) { 
            tmax = t;
            dmax = d; }

    }



    //cout << tmax << '\n';
    cout << dmax << '\n';

    return 0;  
}