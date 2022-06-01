// Baseado no ano e peso do modelo de um automóvel, uma cidade determina a sua classe e o valor da
// taxa de registro usando a seguinte tabela:
// Usando esta tabela, leia o ano e o peso do modelo de um automóvel e calcule e imprima a classe e o
// valor da taxa de registro para o carro.
#include <stdio.h>
int main() {
    int ano;
    float peso;

    printf("Ano: ");
    scanf("%d", &ano);

    printf("Peso: ");
    scanf("%f", &peso);

    if (ano > 0) {
        if  (ano <= 1970) {
            if (peso < 1200) {
                puts("Classe: 1\nTaxa de registro: 16,50");
            }
            if (peso >= 1200 && peso <= 1700) {
                puts("Classe: 2\nTaxa de registro: 25,50");
            }
            if (peso > 1700) {
                puts("Classe: 3\nTaxa de registro: 46,50");
            }
        }
        if (ano >=1971 && ano <= 1979) {
            if (peso < 1200) {
                puts("Classe: 4\nTaxa de registro: 27,00");
            }
            if (peso >= 1200 && peso <= 1700) {
                puts("Classe: 5\nTaxa de registro: 30,50");
            }
            if (peso > 1700) {
                puts("Classe: 6\nTaxa de registro: 52,50");
            }
        }
        if (ano >= 1980) {
            if (peso < 3600) {
                puts("Classe: 7\nTaxa de registro: 19,50");
            }
            else {
                puts("Classe: 8\nTaxa de registro: 52,50");
            }
        }
    }
    else
        puts("Data invalida.");
}
