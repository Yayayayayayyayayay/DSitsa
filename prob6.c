#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d",&num);
    int x, y;
    long long ans, sum;
    for(int i = 0; i < num; i++){
        scanf("%d%d",&x,&y);
        sum = x + y;
        ans = sum * sum;
        printf("%lld\n",ans);
    }
	return 0;
}