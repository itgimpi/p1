#include <stdio.h>
/* verzija iz knjige, sa tekstom */
int main() {
    int a;
    printf("Unesite ceo broj: "); /* tekst je za korisnika, da zna sta da unese... */
    scanf("%i", &a); /* za unos u C-u je neophodan znak & */
    printf("Kvadrat unetog broja je: %i", a*a); 
    return 0; }