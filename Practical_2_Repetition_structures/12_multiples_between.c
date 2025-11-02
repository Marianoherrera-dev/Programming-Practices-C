#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, x;
    int funciona=0;
    do
    {
        printf("Ingrese un primer número entero: ");
        scanf("%d", &n1);
        printf("Ingrese un segundo número entero mayor al primero: ");
        scanf("%d", &n2);

    } while (n1>n2);
    printf("Ingrese un número cualquiera: ");
    scanf("%d", &x);

    for (int i = n2-1; i > n1; i--)
    {
        if (i%x==0)
        {
            printf("%d\n", i);
            funciona=1;
        }
        
        
    }
    if (!funciona)
    {
        printf("No se encontraron multiplos ");
    }
    
    
    
    
    
    return 0;
}
