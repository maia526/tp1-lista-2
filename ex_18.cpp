//Reescreva o exercício anterior com o comando switch.

#include <stdio.h>

int main() {
    int nota;
    printf("Nota: ");
    scanf("%d", &nota);
    
    if (nota > 0) {
        switch(nota) {
            case 10:
            case 9:
            case 8:
                printf("\nConceito: A");
                break;
            case 7:
            case 6: 
                printf("\nConceito: B");
                break;
            case 5:
                printf("\nConceito: C");
                break;
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                printf("\nConceito: D");
                break;
            default:
                printf("\nInvalida.");
                break;
        }
    }
    
    // if (nota > 0){
    //     if (nota == 9 || nota == 10) {
    //         printf("\nConceito: A");
    //     }
    //     if (nota == 8 || nota == 7) {
    //         printf("\nConceito: B");
    //     }
    //     if (nota == 6 || nota == 5) {
    //         printf("\nConceito: C");
    //     }
    //     if (nota < 5) {
    //         printf("\nConceito: D");
    //     }
    // }
    // else
    //     puts("Invalida");
}
