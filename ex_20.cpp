// //Leia as notas de duas provas e de um trabalho (todos os valores entre 0 e 10) e a quantidade de
// faltas, definindo e imprimindo se ele foi aprovado, reprovado, reprovado por falta ou se fará prova
// final. O aluno será reprovado se faltou a mais de 15 aulas. Aluno será aprovado se não for
// reprovado por falta e sua média for maior ou igual a 7,0. Caso tenha média menor que 4,0, então
// estará reprovado. Se não for nenhuma dessas situações, então deverá fazer prova final. O cálculo da
// média deve ser feito com peso 3 para a 1a prova, peso 5 para a 2a prova e peso 2 para o trabalho.

#include <stdio.h>

int main() {
    int p1, p2, trabalho, faltas, media;
    printf("Prova 1: ");
    scanf("%d", &p1);
    
    printf("Prova 2: ");
    scanf("%d", &p2);
    
    printf("Trabalho: ");
    scanf("%d", &trabalho);
    
    printf("Faltas: ");
    scanf("%d", &faltas);
    
    if (p1 >= 0 && p1 <= 10 && p2 >= 0 && p2 <= 10 && trabalho >= 0 && trabalho <= 10) {
        if (faltas < 15) {
            media = ((p1 * 3) + (p2 * 5) + (trabalho * 2)) / 10;
            if (media >= 7)
                printf("\nAprovado!");
            if (media < 4)
                printf("\nReprovado.");
            else
                puts("Tera que fazer a prova final.");
        }
        else
            puts("\nReprovado por falta.");
    }
    else 
        puts("\nUm dos valores fornecidos e invalido.");
    
}
