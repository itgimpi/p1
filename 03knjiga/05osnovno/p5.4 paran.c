#include <stdio.h>
/* Ispituje da li je uneti broj paran */
int main() {
    int a;
    printf("Unesi broj: ");
    scanf("%d", &a); 
    /* Umesto %i moze i %d. %i je zato sto je podatak tipa int, a %d jer je u dekadnom brojevnom sistemu. */
    if (a % 2 == 0) /* ako je ostatak prilikom deljenja sa 2 nula... */
        printf("Broj %d je paran\n", a);
    else /* ako nije nula... */
        printf("Broj %d je neparan\n", a);
    return 0; }