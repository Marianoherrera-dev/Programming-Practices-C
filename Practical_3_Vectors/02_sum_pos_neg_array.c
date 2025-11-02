#include<stdio.h>

void cargarvector (int tam, int v[]);
void mostrarvector(int tam, int v[]);

int main(int argc, char const *argv[])
{
    int m, p=0, n=0;

    printf("Ingrese cuantos elementos tendrá el vector: ");
    scanf("%d", &m);
    int vec[m];
    cargarvector(m, vec);
    for (int i = 0; i < m; i++)
    {
        if (vec[i]!=0)
        {
             if (vec[i]<0)
            {
                n++;
            }
            else
            {
                p++;
            }
        }
        
    }
    printf("Los elementos positivos son: %d\n", p);
    printf("Los elementos negativos son: %d", n);

    return 0;
}
void cargarvector (int tam,int v[])
{
    int i;
    for (int i = 0; i < tam; i++)
    {
        printf("Ingrese el elemento %d del vector: ", i);
        scanf("%d", &v[i]);
    }
    
}
void mostrarvector (int tam, int v[])
{
    int i;
    for (int i = 0; i < tam; i++)
    {
        printf("%5d", v[i]);
    }
    
}
