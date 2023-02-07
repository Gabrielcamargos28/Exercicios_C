#include<stdio.h>
int main() {
    int n, i;
    int v[101];
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 1; i <= n; i++) {
        if (v[i] == i) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}
