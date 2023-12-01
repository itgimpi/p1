#include <stdio.h>



void f(int a) {
    a = 3;
    printf("f: a = %d\n", a);     }

int main() {
    int a = 5;
    f(a);
    printf("main: a = %d\n", a);    }