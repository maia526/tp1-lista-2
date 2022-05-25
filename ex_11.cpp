//O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55*55 = 3025. Fazer um programa para ler um número n inteiro de 4 dígitos e imprimir se o número tem ou não essa característica. 
//Se n não tiver 4 dígitos, imprima uma mensagem de erro.
#include <stdio.h>

int main()
{
    int n, x, y, z;
    printf("n = ");
    scanf("%d", &n);
    
    x = n / 100;
    y = n - (x * 100);
    
    z = x + y;
    if (z * z == n)
        printf("\nSim.");
    else
        printf("\nNão.");
}
