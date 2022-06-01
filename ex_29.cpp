// 29. Leia três valores d, m e a e informe se d, m e a formam uma data válida.
#include <stdio.h>
int main() {
    int d, m, a;
    printf("Dia: ");
    scanf("%d", &d);

    printf("Mes: ");
    scanf("%d", &m);
    
    printf("Ano: ");
    scanf("%d", &a);

    if (a > 0 && d > 0 && a > 0) {
        if (d <= 31) {
            if (m <= 12) {
                printf("%d/%d/%d", d, m, a);
            }
            else
                puts("Data invalida");
        }
        else
            puts("Data invalida");
    }
    else
        puts("Data invalida");
    
}
