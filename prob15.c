#include <stdio.h>
#include <stdlib.h>
int main() {
    int min;
    scanf("%d", &min);
    double money;
    if(min <= 800)  money = min * 0.9;
    else if(min < 1500)    money = min * 0.9 * 0.9;
    else money = min * 0.9 * 0.79;
    printf("%.1f\n", money); 
    return 0;
}