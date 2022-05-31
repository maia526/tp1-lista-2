// Leia uma temperatura e a escala (C-Celsius ou F- Fahrenheit) e converta-a para a outra escala. Ou
// seja, se o usuário informar a temperatura em Celsius esta deverá convertida para Fahrenheit e vice-
// versa. Fórmulas:

#include <stdio.h>
int main() {
    float temp, temp_final;
    char modo;
    
    printf("c-f: c\nf-c: f");
    printf("\nConversao: ");
    scanf("%c", &modo);
    
    
    switch(modo) {
        case 'c':
            printf("Celsius: ");
            scanf("%f", &temp);
            temp_final = (((temp * 9) / 5) + 32);
            printf("Fahrenheit: %.2f", temp_final);
            break;
        case 'f':
            printf("Fahrenheit: ");
            scanf("%f", &temp);
            temp_final = ((temp - 32) * 5) / 9;
            printf("Celsius: %.2f", temp_final);
            break;
        default:
            printf("\nConvesao nao existente");
            break;
    }
}
