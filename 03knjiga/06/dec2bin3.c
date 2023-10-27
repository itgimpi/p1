#include<stdio.h>
// deka -> bin
void naopako(unsigned x) {
    long long res = 0, stepen = 1;
    int vel = sizeof(unsigned) * 8; // vel je 32
    unsigned maska;
    for (maska = 1; maska != 0; maska <<= 1)
        putchar( maska & x ? '1' : '0' );
    putchar('\n');  }

int main() {
    int n; scanf("%d", &n);
    naopako(n);

    return 0;}