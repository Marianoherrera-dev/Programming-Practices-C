#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    do
    {
        printf("Ingres un número positivo de 4 o más dígitos: ");
        scanf("%d", &x);
        if (x<1000)
        {
            printf("Error en el número ingresado: ");
        }
        
    } while (x<1000);
    int c=0;
    for (int i = x;  i>0 ; i=i/10)
    {
        c++;
    }
    int v[c];

    for (int i = (c-1); i>=0; i--)
    {
        v[i]=x%10;
        x=x/10;
    }
    for (int i = 0; i < c; i++)
    {
        printf("El elemento v[%d] del vector es: %d\n", i, v[i]);
    }
    
    

    
    return 0;
}
