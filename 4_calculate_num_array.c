#include<stdio.h>
#include"vectores.h"

int main(int argc, char const *argv[])
{
    int n, c;
    int numero=1;
    printf("Informar cuantos elementos tendrá el vector: ");
    scanf("%d", &n);
    printf("Ingrese un valor entero C: ");
    scanf("%d", &c);
    int v[n];
    cargarvector(n, v);

    for (int i = 0; i < n; i++)
    {
        numero= numero*(v[i]-c);
    }
    printf("El número que se forma: %d", numero);

    return 0;
}

