#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, c=0;

    printf("Ingrese el orden del vector V: ");
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el  elemento %d delvector: ", i);
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i]==0)
        {
            c++;
        }
          
    }
    int w[c];
    int p=0;
    for (int i = 0; i < n; i++)
    {
        if (v[i]==0)
        {
            w[p]=i;
            p++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("El elemento v(%d) del vector v es: %d\n", i, v[i]);
    
    }
    for (int i = 0; i < c; i++)
    {
        printf("El elemento w[%d] del vector w es: %d\n",c ,w[i]);
    }
    
    
        

    return 0;
}
