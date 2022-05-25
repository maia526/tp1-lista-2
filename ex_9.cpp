//Em um mercado de peças de baixo preço, cada comprador só pode comprar um tipo de peça por vez, mas não tem limite da quantidade de peças. Construa um programa que entre com a quantidade de peças e o valor de cada peça. Se o total for maior que R$ 200,00, o cliente terá um desconto de 20%. Imprima o valor total a pagar.
#include <stdio.h>
int main() {
    int qntd;
    char peca;
    float preco;
    printf("\t-----Bem vindo a loja de baixo preco!-----");
    printf("\nDigite a letra correspondente a peca que voce quer e logo depois a quantidade.");
    printf("\n\nTijolo: t");
    printf("\nParafuso: p");
    printf("\nChave de fenda: c");

    printf("\n\nPeca: ");
    scanf("%c", &peca);
    printf("\nQuantidade: ");
    scanf("%d", &qntd);

    if (peca == 't')
        preco = (qntd * 0.25);
    if (peca == 'p')
        preco = (qntd * 0.5);
    if (peca == 'c')
        preco = (qntd * 10);

    if (preco > 200)
        preco *= 0.8;
    
    printf("Total: %.2f", preco);

    
}
