// 28. Leia três valores inteiros n, m e k e informe quantos números inteiros no intervalo n..m (inclusive)
// são múltiplos de k.

#include <stdio.h>
int main() {
    int n, m, k;
    printf("N: ");
    scanf("%d", &n);

    printf("M: ");
    scanf("%d", &m);

    printf("K: ");
    scanf("%d", &k);

    for (int i = n; i <= m; i++) {
        if (i % k == 0) {
            printf(" %d", i);
        }
    }
}
