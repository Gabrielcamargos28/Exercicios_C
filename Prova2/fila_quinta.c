#include<stdio.h>

int main() {
    int n, i, idade;
    int v[11];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    scanf("%d", &idade);
    if (idade < 65) {
        printf("%d\n", n + 1);
    } else {
        for (i = 0; i < n; i++) {
            if (v[i] < 65) {
                printf("%d\n", i + 1);
                return 0;
            }
        }
        printf("%d\n", n + 1);
    }
    return 0;
}
