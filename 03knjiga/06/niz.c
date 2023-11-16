#include<stdio.h>
int main() {
    // promenljive x, y, z
    // kao i niz a su deklarisani u main-u
    int x, y, z;
    int a[1000];

    printf("%i %i %i\n", x, y, z); // 3 promenljive

    printf("%i %i %i\n", a[0], a[1], a[2]); // samo 3 promenljive, ne isplati se...

    for ( int i = 0; i < 1000; i++ ) // C, ispis celog niza
        printf("%d ", a[i]);
    printf("\n");

    return 0;}