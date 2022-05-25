//Leia um número e imprima uma mensagem informando se ele é igual a 5, ou se é igual a 200, ou se é igual a 400, ou se ele está no intervalo de 500 a 1000 (inclusive) ou se ele não obedece a nenhuma dessas condições.
//n ==5 || n == 200 || n == 400
//500 <=n && n <= 1000
#include <stdio.h>
int main() {
    int n;
    printf("N = ");
    scanf("%d", &n);
    if (n ==5 || n == 200 || n == 400)
        printf("\nO numero %d obedece as condicaoes.", n);
    if (500 <= n && n <= 1000)
        printf("\nO numero %d obedece as condicaoes.", n);
    else
        printf("\nO numero nao obedece as condicoes.", n);
}