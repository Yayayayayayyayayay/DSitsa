#include <stdio.h>
#include <stdlib.h>
int main() {
    long long num;
    long long arr[7];
    long long ans = 0;
    for(int i = 0;i < 6;i++){
        scanf("%llu",&num);
        arr[i] = num * num * num; 
    }
    for(int i = 0;i < 6;i++){
        ans = arr[i]+ans; 
    }
    printf("%lld\n",ans);
    return 0;
}