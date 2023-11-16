#include <stdio.h>
int main() {

    int a[5] = { 1, 2, 3, 4, 5 };
    int aa[] = { 1, 2, 3, 4, 5 };

    int n = sizeof(a) / sizeof(int); // 20 (5 el * 4) / 4 (int je 4B)
    printf("%d\n", n);

    for (int i = 0; i < 5; i++) 
        printf("%d", aa[i]);

    return 0; }