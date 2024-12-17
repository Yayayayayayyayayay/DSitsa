#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n, record;
    scanf("%d", &n);
    record = n / 10;
    printf("NT10=%d",record);
    n = n % 10;
    record = n / 5;
    printf("NT5=%d",record);
    n = n % 5;
    printf("NT1=%d",n);
    return 0;
}