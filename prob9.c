#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (int j = 0; j < n; j++) {
        scanf("%d", &i);
        if (i > 31) {
            printf("Value of more than 31\n");
        } else {
            printf("%d\n", 1 << i);
        }
    }
    return 0;
}
