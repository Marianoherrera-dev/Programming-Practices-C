#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int c=0;
    int auxiliar=0;

    printf("Ingrese la cantidad de elementos que tendrá el vector: ");
    scanf("%d", &n);
    int v[n];

    for (int i = (n-1); i >= 0; i--)
    {
        auxiliar= (n-1)+c;
        v[i]=auxiliar;
        c++;

    }
    for (int i = 0; i < n; i++)
    {
        printf("El elemento v(%d) es: %d\n",i, v[i]);
    }
    


    return 0;
}
