//Leia as coordenadas dos pontos P1, P2 e P3. Em seguida, informe se esses pontos formam um triângulo ou não. Caso positivo, imprima o perímetro P e a área A do triângulo onde A pode ser calculado como:
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    float per, a, b, c, area, p;
    bool triangulo;

    printf("x1 y1 = ");
    scanf("%d %d", &x1, &y1);

    printf("x2 y2 = ");
    scanf("%d %d", &x2, &y2);

    printf("x3 y3 = ");
    scanf("%d %d", &x3, &y3);

    a = sqrt(pow(x1 - x2 , 2) + pow(y1 - y1 , 2));
    b = sqrt(pow(x2 - x3 , 2) + pow(y2 - y3 , 2));
    c = sqrt(pow(x3 - x1 , 2) + pow(y3 - y1 , 2));


    if (ceil(b - c) < a && a < b + c)
        if (ceil(a - c) < b && b < a + c)
            if (ceil(a - b) < c && c < a + b)
                triangulo = true;
            else {
                triangulo = false;
                printf("Nao.");
            }
        else {
            triangulo = false;
            printf("Nao.");
        }
    else {
        triangulo = false;
        printf("Nao.");    
    }

    if (triangulo) {
        per = a + b + c; 
        p = per / 2;    
        area = sqrt(p * (p - a) * (p - b) * (p - c));   
        printf("\nPerimetro = %.4f", per);
        printf("\nArea = %.4f", area);
    }
}
