#include <stdio.h>
#include <stdlib.h>
int main() {
    int w, h;
    double BMI, H;
    scanf("%d%d", &w, &h);
    H = h / 100.0;
    BMI = w / (H * H);
    printf("%.2f\n", BMI);
    return 0;
}
