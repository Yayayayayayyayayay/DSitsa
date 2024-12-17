#include <stdio.h>
#include <stdlib.h>
int main() {
    int h1, m1, h2, m2;
    int time = 0, money = 0;
    scanf("%d%d%d%d", &h1,&m1,&h2,&m2);
    if(h2 < h1) h2 = h2 + 24;
    if(m2 < m1){
        h2--;
        m2 = m2 + 60;
    }
    time = (h2 - h1) * 60 + (m2 - m1);
    if(time > 240){
        money = money + (time - 240) / 30 * 60;
        time = 240;
    }
    if(time > 120){
        money = money + (time - 120) / 30 * 40;
        time = 120;
    }
    if(time <= 120) money = money + time / 30 * 30;
    printf("%d\n", money); 
    return 0;
}