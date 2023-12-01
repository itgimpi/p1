#include <stdio.h>

int a = 5; // globalna 

void f(int a) {
    a = 3;
    printf("f: a = %d\n", a);     }

int main() {

    f(a);
    printf("main: a = %d\n", a);    }