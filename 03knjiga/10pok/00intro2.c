#include<stdio.h>

int main() {
    char c = 5;
    int a = 10;
    long long l = 15;

    char *pc; /* Nevermind */
    int* pa;
    long long * pl;

    pc = &c;
    pa = &a;
    pl = &l;


    printf("%i %i %i", c, a, l);
    printf("%p %p %p", pc, pa, pl);
    return 0;
}