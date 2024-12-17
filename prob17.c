#include <stdio.h>
#include <stdlib.h>
int main() {
    int time, money;
    scanf("%d%d",&time,&money);
    double salary = 0;
    if(time >= 121){
        salary = salary + (time - 120) * money * 1.66;
        time = 120;
    }
    if(time >= 61){
        salary = salary + (time - 60) * money * 1.33;
        time = 60;
    }
    if(time <= 60)  salary = salary + time * money;
    printf("%.1f\n", salary);
    return 0;
}