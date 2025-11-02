#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    double r, dia, per, area;
    printf("Ingrese el radio del circulo: ");
    scanf("%lf",&r);
    per= 2*M_PI *r;
    area= M_PI * pow(r,2);
    dia= 2*r;
    printf("el perimetro es %f ,su area es %f, y su diametro %f", per,area,dia);

    return 0;
}
