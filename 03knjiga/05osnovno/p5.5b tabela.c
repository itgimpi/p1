#include <stdio.h>
#include <math.h> /* kraca verzija */

int main() {
    for ( int i = 1; i <= 100; i++) /* za brojeve od 1 do 100... */
        printf("%3d %5d %7.4f\n", i, i * i, sqrt(i));
    return 0; }