#include<stdio.h>

int main() {

    int n, i;
    int v[101];
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] < 0) v[i] = 42;
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}
