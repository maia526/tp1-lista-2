//Leia a nota de um aluno e transforme-a em conceito. As notas 10 e 9 receberão conceito A, as notas 
//de 8 e 7 receberão conceito B, as notas de 6 e 5 receberão conceito C e abaixo de 5 conceito D.
//Caso a nota seja inválida, imprima “Inválida”.

#include <stdio.h>

int main() {
    int nota;
    printf("Nota: ");
    scanf("%d", &nota);
    if (nota > 0){
        if (nota == 9 || nota == 10) {
            printf("\nConceito: A");
        }
        if (nota == 8 || nota == 7) {
            printf("\nConceito: B");
        }
        if (nota == 6 || nota == 5) {
            printf("\nConceito: C");
        }
        if (nota < 5) {
            printf("\nConceito: D");
        }
    }
    else
        puts("Invalida");
}
