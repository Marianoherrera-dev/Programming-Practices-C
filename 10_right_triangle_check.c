#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float l1, l2, l3;
    float tolerancia=0.0001f;
    
    printf("Ingresar lado1: ");
    scanf("%f", &l1);
    printf("Ingresar lado2: ");
    scanf("%f", &l2);
    printf("Ingresar lado3: ");
    scanf("%f", &l3);

    if (fabsf((l1*l1) - (l2*l2+l3*l3)) < tolerancia ||
            fabsf((l2*l2) - (l1*l1+l3*l3)) < tolerancia||
            fabsf((l3*l3) - (l1*l1+l2*l2)) < tolerancia )
    {
        printf("Son lados de un triangulo rectangulo");

    }
   else
   {
    printf("No son lados de un triagulo rectangulo");
   }

    

    
    return 0;
}
