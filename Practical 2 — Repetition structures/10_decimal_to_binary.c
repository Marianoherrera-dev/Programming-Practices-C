#include<stdio.h>

int main(int argc, char const *argv[])
{
    int d, p=1, v=0;
    long int bin=0; 
    printf("Ingresar un número entero decinal: ");
    scanf("%d", &d);

    int original_d=d;

    while (d>0)
    {
        int r= d%2;
        bin=bin+r*p;
        p=p*10;
        d=d/2;

    }

    printf("El numero decimal es: %d\n", original_d);
    printf("El número en binario es: %d", bin);
    
    return 0;
}
