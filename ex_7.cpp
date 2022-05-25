//Um técnico está selecionando atletas que tenham altura maior ou igual a 1,80m e idade menor que 18 anos. Faça um programa para ler a idade e a altura de um atleta e exibir uma das mensagens: “selecionado” ou “não selecionado”.
#include <stdio.h>
int main() {
    int idade, altura;
    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura: ");
    scanf("%d", &altura);

    if (altura >= 180 && idade < 18)
        printf("\nSelecionado.");
    else
        printf("\nNao selecionado.");
}