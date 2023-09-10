#include <stdio.h>
#include <math.h>

/* primer iz knjige, sa tekstom */

int main() {
    double x1, y1, x2, y2;
    printf("Unesi koordinate prve tacke: ");
    scanf("%lf%lf", &x1, &y1);
    printf("Unesi koordinate druge tacke: ");
    scanf("%lf%lf", &x2, &y2);
    printf("Rastojanje je: %lf\n", sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)));
    return 0; }