#include <stdio.h>
#include <math.h>

/* kraca verzija, bez teksta */

int main() {
    double x1, y1, x2, y2;
    scanf("%lf%lf", &x1, &y1);
    scanf("%lf%lf", &x2, &y2);
    printf("%lf\n", sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)));
    return 0; }