#include <stdio.h>
// Naredbe grananja

int main() {

/*
if (izraz)
    naredba1
else
    naredba2
*/

int a;

if (5 > 7) // 5>7 je !T
    a = 1;
else
    a = 2; // a je 2

if (15 > 7) // 15>7 je T
    a = 1;  // a je 1
else
    a = 2;

// U C-u samo 0 je !T, sve ostalo je T
if (7) //  7 je T
    a = 1; // a je 1
else
    a = 2;

if (0) //  0 je !T
    a = 1;
else
    a = 2; // a je 2

// pocetnicka greska, umesto poredjenja - dodela
a = 3; // a je 3
if (a = 0) // greskom dodela 
// a je 0, izraz je 0, a to je !T
    printf("a je nula\n");
else
    printf("a nije nula\n"); // zato ispisuje 

// problem je sto n vise nije 3, nego 0!!!


    }