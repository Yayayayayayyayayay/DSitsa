#include <stdio.h>

int main() {
    int base, height;      
    double area;           
    scanf("%d %d", &base, &height);
    area = (double)(base * height) / 2;
    printf("Triangle area:%.1f\n", area);

    return 0;
}
