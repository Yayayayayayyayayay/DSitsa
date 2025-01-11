#include <stdio.h>

int main() {
    int arr[100], n = 0;
    while (scanf("%d", &arr[n]) != EOF) {//輸入陣列
        n++;
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]); //從尾端開始輸出陣列
        if (i > 0) {
            printf(" ");//不到尾端輸出就空格
        }
    }
    printf("\n");

    return 0;
}
