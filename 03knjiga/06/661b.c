#include <stdio.h>
int main() {

    int b[1000], i;

    for (i = 0; i < 10; i++) // unos 
        scanf("%d", &b[i]);

    for (i = 0; i < 10; i++) // ispis, 
        printf("%d ", b[i]);    
    printf("\n");

    for (i = 9; i >= 0; i--) // ispis niza, sdesna na levo
        printf("%d ", b[i]);

    return 0; }