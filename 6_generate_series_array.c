#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, a, b;
    int c=0;
    printf("Ingrese el orden del vector: ");
    scanf("%d", &n);
    int v[n];
    printf("Ingresar un número A: ");
    scanf("%d", &a);
    printf("Ingresar un número b: ");
    scanf("%d", &b);
    v[0]=a;
    v[1]=b;
    for (int i = 2; i < n; i++)
    {
        if (i%2==0)
        {
            v[i]=v[c]+v[c+1];
        }
        else
        {
            v[i]=v[c]-v[c+1];
            c=c+2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("El elemento v(%d) del vector es: %d\n", i, v[i]);
    }
    
    
    return 0;
}
 