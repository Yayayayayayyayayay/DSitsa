#include <stdio.h>

int main() {
    int upper, base, height;     
    double area;           
    scanf("%d %d %d", &upper, &base, &height);
    area = (double)((upper + base) * height) / 2;
    printf("Trapezoid area:%.1f\n", area);

    return 0;
}
