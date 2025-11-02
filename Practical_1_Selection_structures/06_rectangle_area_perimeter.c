#include<stdio.h>

int main(int argc, char const *argv[])
{
    int largo, ancho, per, sup;
    printf("Ingrese el Largo del rectangulo: ");
    scanf("%d",&largo);
    printf("Ingrese el ancho del rectangulo: ");
    scanf("%d",&ancho);
    per= largo*2 + ancho*2;
    sup= largo*ancho;
    printf("el perimetro es %d , y su area es %d", per,sup);

    return 0;
}
