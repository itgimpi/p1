#include <stdio.h>
// Napisati programe koji ispisuje naredne dijagrame, pri ˇcemu se dimenzija n unosi.

int main() {
    int n; scanf("%i", &n);

    int i, j;
    for ( i = 0; i < n; i++) { // i je 0, 1, 2, 3
        for ( j = 0; j < n; j++ )  // j je 0, 1, 2, 3
            //putchar('#');
            putc('#', stdout);
        putchar('\n');  }
    putchar('\n');



    return 0; }