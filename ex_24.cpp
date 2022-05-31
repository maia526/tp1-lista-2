// Calcule e imprima o salário semanal de uma pessoa, determinado pelas seguintes condições: se o
// número de horas trabalhadas for de até 40h, a pessoa recebe R$15,00 por hora, senão a pessoa
// recebe R$600,00 mais R$21,00 para cada hora trabalhada acima de 40h.

#include <stdio.h>
int main() {
    int horas, salario;
    
    printf("Horas: ");
    scanf("%d", &horas);
    
    if (horas <= 40) {
        salario = horas * 15;
        printf("Salario: %d", salario);
    }
    else {
        salario = 600 + ((horas - 40) * 21);
        printf("Salario: %d", salario);
    }
}
