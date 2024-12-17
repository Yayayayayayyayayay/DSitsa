#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int num;
    long long ans, ans2;
    for(int i = 0; i < n; i++){
        scanf("%d",&num);
        ans = num * num;
        ans2 = num * ans;
        printf("%lld %lld %lld\n", num, ans, ans2);
    }
	return 0;
}