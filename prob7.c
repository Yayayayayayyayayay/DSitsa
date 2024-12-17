#include <stdio.h>

int main() {
    int a, b, c; // 定義三個整數變數
    scanf("%d %d %d", &a, &b, &c); // 輸入三個整數

    // 比較三個數，找出最大值
    int max = a; // 假設 a 是最大值
    if (b > max) {
        max = b; // 如果 b 比 max 大，更新 max
    }
    if (c > max) {
        max = c; // 如果 c 比 max 大，更新 max
    }

    // 輸出最大值
    printf("%d\n", max);

    return 0;
}