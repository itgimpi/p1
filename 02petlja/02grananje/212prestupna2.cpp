#include<bits/stdc++.h>
using namespace std;

int main() { // https://petlja.org/biblioteka/r/Zbirka/prestupna_godina
    int g; cin >> g;
    // nisu neophodne logicke promenljive...
    if ( ( g % 4 == 0 && g % 100 != 0 ) || g % 400 == 0 ) 
        cout << "da" << endl;
    else 
        cout << "ne" << endl;
    

    return 0; 

}