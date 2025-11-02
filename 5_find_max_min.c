#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i=1, b=0, a=0, n, x;

    printf("Informar la cantidad de números de ingresará: ");
    scanf("%d", &n);

    while (i<=n)
    {
        printf("Ingrese un número: ");
        scanf("%d", &x);

        if (x<b)
        {
            b=x;
        }
        if (x>a)
        {
            a=x;
        }
        i++;
        
    }

    printf("El número más alto ingresado es: %d\nY el número más bajo ingresado es; %d", a, b);
    
    return 0;
}
