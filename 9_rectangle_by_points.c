#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int x1, x2, y1, y2,per, sup;
    printf("Ingrese primera coordenada x:");
    scanf("%d", &x1);
    printf("Ingrese primera coordenada y:");
    scanf("%d", &y1);
    printf("Ingrese segunda coordenada x:");
    scanf("%d", &x2);
    printf("Ingrese segunda coordenada y:");
    scanf("%d", &y2);

    int  lado1= abs(x1-x2);
    int  lado2= abs(y1-y2);

    per=lado1*2 + lado2*2;
    sup=lado1*lado2;

    printf("El perimetro del rectangulo es: %d\nLa superficie del rectangulo es: %d\n", per, sup);
    


    return 0;
}
