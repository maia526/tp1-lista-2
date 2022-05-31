// 22. Leia o número de horas trabalhadas e o valor da hora de um trabalhador e imprima o salário bruto e
// líquido, sabendo que o salário líquido é igual ao salário bruto menos o IR. O desconto do IR segue
// as seguintes regras:
    // • Salário bruto menor ou igual a R$ 1900,00: desconto ZERO
    // • Salário bruto maior que R$1900,00 e menor ou igual a R$ 4300,00: desconto de 10%
    // • Salário bruto maior que R$4300,00 e menor ou igual a R$ 5800,00: desconto de 15%
    // • Salário bruto maior que R$5800,00: desconto de 27,5%
    
#include <stdio.h>
int main() {
    int horas;
    float valor, salario_bruto, salario_liquido;
    printf("Horas trabalhadas: ");
    scanf("%d", &horas);
    
    printf("Valor hora: ");
    scanf("%f", &valor);
    
    if (valor > 0) {
        if (horas > 0) {
            salario_bruto = horas * valor;
            printf("\nSalario bruto: %.2f", salario_bruto);
            
            if (salario_bruto <= 1900) {
                salario_liquido = salario_bruto;
                printf("\nSalario liquido: %.2f", salario_liquido);
            }
            if (salario_bruto > 1900 && salario_bruto <= 4300) {
                salario_liquido = salario_bruto * 0.90;
                printf("\nSalario liquido: %.2f", salario_liquido);
            }
            if (salario_bruto > 4300 && salario_bruto <= 5800) {
                salario_liquido = salario_bruto * 0.85;
                printf("\nSalario liquido: %.2f", salario_liquido);
            }
            if (salario_bruto > 5800) {
                salario_liquido = salario_bruto * 0.725;
                printf("\nSalario liquido: %.2f", salario_liquido);
            }
        }
        else
            puts("\nHoras inválidas.");
    }
    else 
        puts("\nValor inválido.");
}
