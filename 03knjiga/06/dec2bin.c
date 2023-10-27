#include<stdio.h>
// deka -> bin
long long dekabin(int n) {
    long long res = 0, stepen = 1;
    int ost, korak = 1;

    while ( n != 0 ) {
        ost = n % 2;
        n /= 2;
        printf("%d %d %d %d\n", korak, n, ost, stepen);
        korak++;
        res += ost * stepen;
        stepen *= 10;    }
    return res; }

int main() {
    int n; scanf("%d", &n);
    printf("%lld\n", dekabin(n));

    return 0;}