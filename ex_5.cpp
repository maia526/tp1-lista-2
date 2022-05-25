//Leia três valores a, b e c e imprima o maior e o menor deles. Elabore uma solução sem usar os operadores lógicos, ou seja, usando somente os operadores relacionais.
#include <stdio.h>
int main() {
    int a, b, c, max, min;
    printf("a = ");
    scanf("%d", &a);

    printf("\nb = ");
    scanf("%d", &b);

    printf("\nc = ");
    scanf("%d", &c);

    if (a > b) {
        max = a;
        min = b;
    }
    else {
        max = b;
        min = a;
    }

    if (a > c) {
        max = a;
        min = c;
    }
    else {
        max = c;
        min = a;
    }

    if (c > max)
        max = c;

    if (c < min)
        min = c;

    printf("\nMax = %d", max);
    printf("\nMin = %d", min);
}