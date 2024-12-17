#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d",&num);
    int add1,add2;
    long long sum;
    for(int i = 0;i<num;i++){
        scanf("%d%d",&add1,&add2);
        sum = add1+add2;
        printf("%llu\n",sum);
    }


	return 0;
}