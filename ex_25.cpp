// Leia o último dígito da placa do carro e exiba o mês em que vence o IPVA, segundo a tabela
// abaixo:
#include <stdio.h>
int main() {
    int digito;
    puts("Para parar, digite 10.");
    while (digito != 10) { 
        printf("Ultimo digito da placa: ");
        scanf("%d", &digito);

        if (digito == 0) {
            puts("Ate 30/04/2020");
        }
        if (digito == 1) {
            puts("Ate 31/05/2020");
        }
        if (digito == 2) {
            puts("Ate 30/06/2020");
        }
        if (digito == 3) {
            puts("Ate 31/07/2020");
        }
        if (digito == 4) {
            puts("Ate 30/08/2020");
        }
        if (digito == 5) {
            puts("Ate 30/09/2020");
        }
        if (digito == 6 || digito == 7) {
            puts("Ate 30/11/2020");
        }
        if (digito == 8 || digito == 9) {
            puts("Ate 31/12/2020");
        }
    }
}
