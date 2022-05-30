#include <stdio.h>
//Leia o número do mês do ano (1 a 12) e mostre o nome do mês por extenso. Se o número for
//inválido, imprima "Mês inválido".

int main()
{
    int mes;
    printf("Mes: ");
    scanf("%d", &mes);
    
    if (mes == 1)
        printf("\nDezembro!");
        
    if (mes == 2)
        printf("\nFevereiro!");
        
    if (mes == 3)
        printf("\nMarco!");
        
    if (mes == 4)
        printf("\nAbril!");
        
    if (mes == 5)
        printf("\nMaio!");
        
    if (mes == 6)
        printf("\nJunho!");
        
    if (mes == 7)
        printf("\nJulho!");
        
    if (mes == 8)
        printf("\nAgosto!");
        
    if (mes == 9)
        printf("\nSetembro!");
        
    if (mes == 10)
        printf("\nOutubro!");
        
    if (mes == 11)
        printf("\nNovembro!");
        
    if (mes == 12)
        printf("\nDezembro!");
    if (mes > 12 || mes < 1)
        printf("\nMes inválido.");
}
