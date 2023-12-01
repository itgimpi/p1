#include <stdio.h>
// O(log n)

int stepen(int x, unsigned n) {
	if (n == 0)
		return 1;
	if (n % 2 == 0)
		return stepen(x*x, n/2);
	return x*stepen(x, n-1); }

int main() {
	int x = 2, n = 10;
	printf("%d", stepen(2, 10));
}