#include<stdio.h>
int main() {
    int n, a, b, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        if (a > b) {
            printf("%d\n", (a - b) - 1);
        } else {
            printf("%d\n", (b - a) - 1);
        }
    }
    return 0;
}
