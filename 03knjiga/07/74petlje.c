#include <stdio.h>
// Petlje, Loops

int main() {

/*
while(izraz) // Sve dok je izraz tacan...
    naredba

while(izraz) { 
    naredba 1;
    ...
    neredba n; }

int i, j;
i = 1; j = 100;
while (i < j) // 
    i++;

while (1) // infinity loop, 1 je True
    i++;

for (izraz1; izraz2; izraz3)
    naredba

svaki for moze da se napise preko while i obrnuto:

izraz1;
while (izraz2) {
    naredba
    izraz3; }    

izraz1 se izvrsi samo jednom, na pocetku 
izraz2 je uslov da se petlja izvrsava 
izraz3 se izvrsava posle svake iteracije

for (int i = 0; i < n; i++)
for (int i = 1; i <= n; i++)

for (izraz1; izraz2; izraz3); <- pocetnicka graska!!!


for ( ; ; ) // infinity

i=0;
for( ; i < n; i++)

do { // ovde se baredba obavezno izvrse
    naredbe
    } while(izraz)


int i, j;
for (i = 0, j = 10; i < j; i++, j--)
    printf("i=%d, j=%d\t", i, j); */


    unsigned n;
    printf("Unesi broj: "); scanf("%u", &n); // n je 12345
    do {
        printf("%u ", n % 10); // prvo 5
        n /= 10;               // 1234
    } while (n > 0);
    return 0;


    }