#include <stdio.h>
#include <math.h> /* matematicka biblioteka, zbog korena */

#define N 100 /* konstante mogu i ovako da se koriste */

int main() {
    int i;
    for (i = 1; i <= N; i++) /* za brojeve od 1 do 100... */
        printf("%3d %5d %7.4f\n", i, i*i, sqrt(i));
        /* ispis broja, kvadrata i korena */
        /* %3d je ispis celog broja u 3 polja */
        /* %7.4f je ispis dekadnog broja u 7 polja, od kojih su 4 decimale */
    return 0; }