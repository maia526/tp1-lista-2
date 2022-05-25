//Leia as coordenadas dos pontos P1 (x1, y1) e P2 (x2, y2) e calcule a distância entre P1 e P2.
#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2, d;
    printf("\nx1 = ");
    scanf("%d", &x1);
    
    printf("\ny1 = ");
    scanf("%d", &y1);
    
    printf("\nx2 = ");
    scanf("%d", &x2);
    
    printf("\nx2 = ");
    scanf("%d", &y2);
    
    //d = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
    d = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
    printf("d = %d", d);
}
