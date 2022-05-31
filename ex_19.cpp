//Leia o ano atual e o ano de nascimento de uma pessoa e exiba a sua idade. A seguir, informe se a
//pessoa é bebê (0 a 3 anos), criança (4 a 10 anos), adolescente (11 a 18 anos), adulta (19 a 60 anos)
//ou idosa (61 anos em diante).

#include <stdio.h>

int main() {
    int ano_atual, ano_nascimento, idade;
    printf("Ano atual: ");
    scanf("%d", &ano_atual);
    
    printf("Ano nascimento: ");
    scanf("%d", &ano_nascimento);
    
    if (ano_nascimento < ano_atual) {
        idade = ano_atual - ano_nascimento;
        printf("\nIdade: %d", idade);
        if (idade >= 0 && idade <= 3)
            puts("\nbebe");
        if (idade >= 4 && idade <= 10)
            puts("\ncrianca");
        if (idade >= 11 && idade <= 18)
            puts("\nadolescente");
        if (idade >= 19 && idade <= 60)
            puts("\nadulto");
        if (idade >= 61)
            puts("\nidoso");
    }
    else
        puts("\nData invalida.");
}
