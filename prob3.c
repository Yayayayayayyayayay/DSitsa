#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    double side;
    for (int i = 0; i < n; i++) {
        scanf("%lf", &side);
        double area = side * side;
        area = round(area * 10) / 10;
        printf("%.1lf\n", area);
    }

    return 0;
}
