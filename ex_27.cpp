// 27. Um endocrinologista deseja controlar a saúde de seus pacientes e, para isto, utiliza o índice de massa corporal (IMC). Sabendo-se que o IMC é calculado através da fórmula:
// IMC = peso/altura2
// Leia o peso (Kg) e altura (metros) de um paciente e exiba sua faixa de risco, baseando-se na seguinte tabela.

#include <stdio.h>
#include <math.h>
int main() {
    float peso, altura, imc;

    printf("Peso (kg): ");
    scanf("%f", &peso);
    printf("Altura (m): ");
    scanf("%f", &altura);

    if (peso > 0 && altura > 0) {
        imc = peso / (pow(altura, 2));

        if (imc < 20)
            puts("Abaixo do peso");
        if (imc >= 20 && imc <=25)
            puts("Normal");
        if (imc > 25 && imc <= 30)
            puts("Excesso de peso");
        if (imc > 30 && imc <= 35)
            puts("Obesidade");
        if (imc > 35)
            puts("Obesidade morbida");
    }
    else
        puts("Dados invalidos.");
}
