#include<stdio.h>

int main() {
    int n, i, s, t, r = 0;
    int v[11];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    scanf("%d %d", &s, &t);
    for (i = 0; i < n; i++) {
        if (v[i] < s) {
            r += t;
        }
    }
    printf("%d\n", r);
    return 0;
}
