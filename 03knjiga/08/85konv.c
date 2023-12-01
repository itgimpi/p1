#include <stdio.h>

void f(int a) { // a je int, a = int od 3.5 a to je 3
	printf("%d\n", a);
}

int main() {
	f(3.5); // 3.5 je float...
}