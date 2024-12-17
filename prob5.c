#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    long long sum ,sub ,mul ,div ,remain;
    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;
    remain = x % y;
    if(remain < 0) {
        remain = remain + y;
        div--;
    }
    printf("%d+%d=%lld\n", x, y, sum);
    printf("%d*%d=%lld\n", x, y, mul);
    printf("%d-%d=%lld\n", x, y, sub);
    printf("%d/%d=%lld...%lld\n", x, y, div, remain);
	return 0;
}