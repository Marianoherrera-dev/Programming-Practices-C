#include<stdio.h>

int main(int argc, char const *argv[])
{
    int numero,n ;

    printf("Ingrese un número natural: ");
    scanf("%d", &numero);
    n=numero;

    while (n>1)
    {
        n=n-2;
    }
    if (n==1)
    {
        printf("El número es impar: ");
    }
    else
    {
        printf("El número es par: ");
    }
    
    return 0;
}
