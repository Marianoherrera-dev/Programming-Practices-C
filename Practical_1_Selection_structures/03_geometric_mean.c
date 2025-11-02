#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int num1, num2;
    double media;
    printf("ingrese primer numero: ");
    scanf("%d", &num1);
    printf("ingrese segundo numero: ");
    scanf("%d", &num2);

    media = sqrt(num1 * num2);

    printf("La media geometrica es: %f\n", media);   
    return 0;
}
