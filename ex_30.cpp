// 30. Os dias do ano podem ser definidos de forma contínua. Por exemplo: 01/01 é o 1o dia do ano, 05/01
// é o 5o dia do ano e 03/02 é o 34o dia do ano. Leia dois valores d, m e a e informe o dia do ano
// correspondente à data d/m/a. Assuma que d/m/a é uma data válida.
#include <stdio.h>
int main() {
    int d, m, a, x;
    printf("Dia: ");
    scanf("%d", &d);

    printf("Mes: ");
    scanf("%d", &m);
    
    printf("Ano: ");
    scanf("%d", &a);

    //considera-se que todos os meses têm 30 dias
    if (d > 0 && m > 0 && a > 0) {
        printf("Data: %d/%d/%d", d, m, a);
        x = ((m - 1) * 30) + 24;
        printf("\n%d dia do ano.", x);

    }
    else 
        puts("Data invalida");
}
