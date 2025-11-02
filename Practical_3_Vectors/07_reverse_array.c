#include<stdio.h>
#include "vectores1.h"
int main(int argc, char const *argv[])
{
    int n;//orden del vector

    printf("Ingrese el orden del vector: ");
    scanf("%d", &n);
    int v[n];//vector
    int aux=n-1, j=0; //variables auxiliares
    cargarvector(n, v);
    for (int i = 0; i <=aux ; i++)
    {
        j=v[aux];
        v[aux]=v[i];
        v[i]=j;
        aux--;

    }
    for (int i = 0; i < n; i++)
    {
        printf("El elemento v(%d) es: %d\n", i, v[i]);
    }
    
    

    return 0;
}
