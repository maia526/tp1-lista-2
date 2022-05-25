//Leia o valor do salário de uma pessoa e o valor de um financiamento pretendido. Caso o financiamento seja menor ou igual a 5 vezes o salário da pessoa, o programa deverá imprimir "Financiamento Concedido"; senão, ele deverá imprimir "Financiamento Negado".
#include <stdio.h>
int main() {
    int sal, fin;
    printf("Salario: ");
    scanf("%d", &sal);

    printf("Financiamento: ");
    scanf("%d", &fin);

    if (fin <= sal * 5)
        printf("\nFinanciamento concedido.");
    else
        printf("\nFinanciamento negado.");
}