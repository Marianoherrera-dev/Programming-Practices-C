#include<stdio.h>

void cargarvector(int tam, int v[]);
void mostrarvector(int tam, int v[]);

int main(int argc, char const *argv[])
{
    int n;//orden del vector 
    int m=0; //mayor elemento
    printf("Ingrese la cantidad de elemtos que tendra V: ");
    scanf("%d", &n);
    int v[n];//vector
    cargarvector(n,v);
    for (int i = 0; i < n; i++)
    {
        if(v[i]>m)
        {
            m=v[i];
        }
                
        
    }
    printf("El elemento de mayor valor es: %d", m);


    return 0;
}
void cargarvector(int tam, int v[])
{
    int i;
    for (int i = 0; i < tam; i++)
    {
        printf("Ingrese el elemento v[%d] del vector: ", i);
        scanf("%d", &v[i]);
    }
    
}
