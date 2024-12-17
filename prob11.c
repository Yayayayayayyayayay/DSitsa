#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    double degree, Fahrenheit;
    scanf("%lf", &degree);
    Fahrenheit = degree * 9 / 5 + 32;
    // Fahrenheit = round((Fahrenheit * 10 ) / 10);
    printf("%.1f\n", Fahrenheit);
    return 0;
}