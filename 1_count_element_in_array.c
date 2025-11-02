#include<stdio.h>

void cargarvector (int tam, int v[]);
void mostrarvector (int tam, int v[]);


int main(int argc, char const *argv[])
{   
    int n, x;
    int c=0;
    printf("Ingrese cuantos valores tendra el vector: ");
    scanf("%d", &n);
    printf("Ingrese un valor entero: ");
    scanf("%d", &x);
    int vec[n];
   
    cargarvector(n, vec);
    for (int i = 0; i < n; i++)
    {
        if (vec[i]==x)
        {
            c++;
        }
        
    }
     printf("hay %d elementos iguales\n", c);
     printf("El vector es: ");
     mostrarvector(n, vec);

    return 0;
}

void cargarvector (int tam, int v[])
{
    int i;
    for (int i = 0; i < tam; i++)
    {
        printf("Ingrese valor valor correspondiente al elemento v(%d)", i);
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
