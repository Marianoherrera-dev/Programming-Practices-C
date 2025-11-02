#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    do
    {
        printf("ingrese orden de un vector (par): "); 
        scanf("%d", &n);

        if (n%2!=0)
        {
            printf("Error en el número ingresado");
        }
        
    } while (n%2!=0);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el elemento [%d] del vector V: ", i);
        scanf("%d", &v[i]);
    }
    
    int p[n/2];
    int in[n/2];
    int c=0,ci=1;

    for (int i = 0; i < (n/2); i++)
    {
        p[i]=v[c];
        c=c+2;
    }
    for (int i = 0; i < (n/2); i++)
    {
        in[i]=v[ci];
        ci=ci+2;
    }
    for (int i = 0; i < (n/2); i++)
    {
        printf("El elemento p(%d) es: %d\n",i,p[i]);
    }
    for (int i = 0; i < (n/2); i++)
    {
        printf("El elemento in(%d) es: %d\n",i, in[i]);
    }
    
    return 0;
}
