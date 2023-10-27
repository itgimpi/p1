#include<stdio.h>
// deka -> bin
long long dekabin(int n) {
    long long res = 0, stepen = 1;
    int ost;

    while ( n != 0 ) {
        ost = n % 2;
        n /= 2;
        res += ost * stepen;
        stepen *= 10;    }

    return res; }

int main() {
    int n; scanf("%d", &n);
    printf("%lld\n", dekabin(n));

    return 0;}