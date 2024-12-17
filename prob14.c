#include <stdio.h>
#include <stdlib.h>
int main() {
    int distance;
    scanf("%d", &distance);
    distance = distance * 100;
    double speed;
    speed = 100.0 - 30 * 2.54;
    int time;
    time = distance / speed;
    time++;
    printf("%d\n", time); 
    return 0;
}