#include<stdio.h>

int main(int argc, char const *argv[])
{
    int dia,mes,año;
    int dd,mm,aaaa;
    int edad;

    printf("Ingrese el dia actual: ");
    scanf("%d", &dia);
    printf("Ingrese el mes actual: ");
    scanf("%d", &mes);
    printf("Ingrese el año actual: ");
    scanf("%d", &año);

    printf("Ingrese el dia de nacimiento: ");
    scanf("%d", &dd);
    printf("Ingrese el mes nacimiento: ");
    scanf("%d", &mm);
    printf("Ingrese el año de nacimiento: ");
    scanf("%d", &aaaa);

    if (dd>dia && mm>mes)
    {
        edad=año-aaaa-1;
    }
    else
    {
        edad=año-aaaa;
    }
    printf("La edad es %d\n", edad);
    return 0;
}
