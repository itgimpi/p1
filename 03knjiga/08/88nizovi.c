#include <stdio.h>
#include <stdlib.h>

void f(int a[]) {
	int n = sizeof(a); printf("%d\n", n); 
	//printf("f: %d\n", sizeof(a));
}

int main() {
	int a[] = {1, 2, 3, 4, 5};     // a0=1, a1=2, ...
	int n = sizeof(a); printf("%d\n", n); 
	//printf("main: %d\n", sizeof(a));    //
	f(a);
	return 0;
}