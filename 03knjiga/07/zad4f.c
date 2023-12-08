#include <stdio.h>
// Napisati programe koji ispisuje naredne dijagrame, pri ˇcemu se dimenzija n unosi.
// Get-Content input.txt | ./a.exe > output.txt
int main() {
    FILE *f = fopen("kototamopeva.txt", "w");
    int n; scanf("%i", &n);

    int i, j;

    for ( i = 0; i < n; i++) { // i je 0, 1, 2, 3
        for ( j = 0; j < n; j++ )  // j je 0, 1, 2, 3
            putc('#', f);
        putc('\n', f);  }
    putc('\n', f);

    for ( i = 0; i < n; i++) { // broji redove
        for ( j = 0; j < n - i; j++ )  //  4, 3, 2, 1
            putc('#', f);
        putc('\n', f);  }
    putc('\n', f);

    for ( i = 0; i < n; i++) { // broji redove
        for ( j = 0; j < i + 1; j++ )  // 1, 2, 3, 4
            putc('#', f);
        putc('\n', f);  }
    putc('\n', f);



    fclose(f);

    return 0; }