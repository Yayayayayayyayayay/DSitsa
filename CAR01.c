#include <stdio.h>

int main() {
    int arr[100], n = 0;
    while (scanf("%d", &arr[n]) != EOF) {
        n++;
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i > 0) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
