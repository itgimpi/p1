#include <stdio.h>
// O(n)

int stepen(int x, int n) {
	if (n == 0)
		return 1;
	else
		return x*stepen(x, n-1); }

int main() {
	int x = 2, n = 10;
	printf("%d", stepen(2, 10));
}