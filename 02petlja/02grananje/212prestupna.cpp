#include<bits/stdc++.h>
using namespace std;

int main() {
    int g; cin >> g;
    bool delj4 = g % 4 == 0; // deljiva sa 4?
    bool delj100 = g % 100 == 0;  // deljiva sa 100?
    bool delj400 = g % 400 == 0; // deljiva sa 400?

    // godina je prestupna ako je deljiva sa 400 ili je deljiva sa 4 ali ne i sa 100
    if ( ( delj4 && !delj100 ) || delj400 ) 
        cout << "da" << endl;
    else 
        cout << "ne" << endl;
    

    return 0; 

}