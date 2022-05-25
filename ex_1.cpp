//Leia um número inteiro n e informe se ele é ou não divisível por 6.
#include <stdio.h>

int main() {
    int n;
    printf("\nN = ");
    scanf("%d", &n);
    if (n % 6 == 0)
        printf("\nO numero %d e divisivel por 6.", n);
    else 
        printf("\nO numero %d nao e divisivel por 6.", n);
}