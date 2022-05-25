//10. Leia um número n e teste: se n for negativo, eleve n ao quadrado; caso contrário, calcule a raiz quadrada de n. Ao final, imprima o resultado.
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    float r;
    printf("n = ");
    scanf("%d", &n);
    if (n < 0){
        r = n * n;
        printf("%d^2 = %.2f", n, r);
    }
    else{
        r = sqrt (n);
        printf("sqrt(%d) = %.2f", n, r);
    }
}