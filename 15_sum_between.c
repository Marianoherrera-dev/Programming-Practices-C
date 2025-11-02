#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2;

    do
    {
        printf("Ingrese un número entero: ");
        scanf("%d", &n1);
        printf("Ingrese un número entero mayor al anterior: ");
        scanf("%d", &n2);

    } while (n1>n2);

    int s=0;

    for (int i = n1+1; i < n2; i++)
    {
            s=s+i;
    }
    printf("La suma es %d", s);
    
    return 0;
}
