// 21. Leia o preço de um produto e a condição de pagamento e imprima os valores a serem pagos,
// considerando a seguinte tabela:
#include <stdio.h>

int main() {
    float preco, pagar, parcela;
    char condicao;
    
    printf("\n\tA vista (dinheiro ou cheque) = v");
    printf("\n\tA vista (cartao) = c");
    printf("\n\tParcelado 2x = d");
    printf("\n\tParcelado 3x = t");
    
    printf("\n\nPreco: ");
    scanf("%f", &preco);
    
    printf("\nCondicao: ");
    scanf(" %c", &condicao);
    
    if (preco > 0) {
        switch(condicao) {
            case 'v':
                pagar = preco * 0.9;
                printf("\nValor: %.2f", pagar);
            case 'c':
                pagar = preco * 0.95;
                printf("\nValor: %.2f", pagar);
            case 'd':
                parcela = preco / 2;
                printf("\nTotal: %.2f", preco);
                printf("\nParcela: %.2f", parcela);
            case 't':
                pagar = preco * 1.1;
                parcela = pagar / 3;
                printf("\nTotal: %.2f", pagar);
                printf("\nParcela: %.2f", parcela);
            default:
                puts("\nCondicao inválida.");
        }
    }
    else
        puts("\nPreco invalido.");
}
