//Leia dois números n e k e informe se n é divisível por k.
#include <stdio.h>
int main() {
    int n, k;
    printf("N = ");
    scanf("%d", &n);

    printf("\nK = ");
    scanf("%d", &k);

    if (n % k == 0)
        printf("\n%d é divisivel por %d", n, k);
    else
        printf("\n%d nao e divisivel por %d", n, k);
}