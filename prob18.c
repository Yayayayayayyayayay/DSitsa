#include <stdio.h>
#include <stdlib.h>
int main() {
    int time, ans;
    scanf("%d",&time);
    ans = time / 86400;
    time = time % 86400;
    printf("%d days\n", ans);
    ans = time / 3600;
    time = time % 3600;
    printf("%d hours\n", ans);
    ans = time / 60;
    time = time % 60;
    printf("%d minutes\n", ans);
    printf("%d seconds\n", time);
    return 0;
}