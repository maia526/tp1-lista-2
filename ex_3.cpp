//Leia um número inteiro n e informe se ele é divisível por 3 ou por 7.
#include <stdio.h>
int main() {
    int n;
    printf("N = ");
    scanf("%d", &n);
    if (n % 3 == 0 || n % 7 == 0)
        printf("%d e divisivel por 3 ou 7", n);
    else
        printf("%d nao e divisivel nem por 3 nem por 7", n);
}