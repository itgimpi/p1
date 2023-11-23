#include <stdio.h>
// Operator uslova 
// izraz1 ? izraz2 : izraz3
int main() {
    int a, b, maks, aps;
    a = 2; b = 1;

    maks = (a > b) ? a : b; // 2>1, vraca 2

    aps = ( a > 0 ) ? a : -a; // ako je a poz vrati a
    // ako je a neg. (a je -5) vrati --5 = 5

    // sta se desava?
    int n = 0;
    int x = (2 > 3) ? n++ : 9;
    // n je 0
    // 2>3 je !T
    // u x ide 9
    // n ostane 0

    int n2 = 0;
    int x2 = (5 > 3) ? n2++ : 9;    
    // n2 je 0
    // 5>3 je T
    // u x2 ide 0
    // n2 postane 1

    int n3 = 0;
    int x3 = (5 > 3) ? ++n3 : 9;    
    // n3 je 0
    // 5>3 je T
    // u x3 ide 1
    // n3 postane 1

    }