#include <stdio.h>
//Leia a nota de um aluno e transforme-a em um conceito. As notas 10,0 a 9,0 receberão conceito A,
//as notas de 8,9 a 7,0 receberão conceito B, as notas de 6,9 a 5,0 receberão conceito C e abaixo de
//5,0 conceito D. Caso a nota seja inválida, imprima “Inválida”.

int main()
{
    float nota;
    printf("Nota: ");
    scanf("%f", &nota);
    
    if (nota > 10 || nota < 0)
        printf("\nNota Inválida.");
    else {    
        if (nota >= 9)
            printf("\nConceito: A");
        
        if (nota >= 7 && nota <= 8.9)
            printf("\nConceito: B");
        
        if (nota >= 5 && nota <= 6.9)
            printf("\nConceito: C");
    
        if (nota < 5)
            printf("\nConceito: D");
    }
}
