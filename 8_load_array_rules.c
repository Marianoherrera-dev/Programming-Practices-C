#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,x,z;
    printf("Ingrese el orden del vector: ");
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        v[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese un número natural: ");
        scanf("%d", &x);
        if (0<=x && x<=(n-1) && v[x]==0)
            {
                printf("Ingrese un valor z: ");
                scanf("%d", &z);
                v[x]=z;
            }
    
    }
    for (int i = 0; i < n; i++)
    {
        printf("El elemento v(%d) es: %d\n",i,v[i]);
    }
     
    
    return 0;
}
