#include<stdio.h>


int main(int argc, char const *argv[])
{
    int n, num, p=0, i=0, sp=0, si=0;
    int c=1;    

    printf("Informar la cantidad de numeros que se ingresaran: ");
    scanf("%d", &n);

    while (c<=n)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if (num!=0)
        {
            if (num%2==0)
            {
                p++;
                sp=sp+num;

            }
            else
            {
                i++;
                si=si+num;
            }
        }
        c++;
    }
    if (p>0)
    {
        float pp=(float)sp/p;
        printf("El promedio de los números pares es: %f\n", pp);
    }
    else
    {
        printf("No se ingresaron números pares");
    }
    if (i>0)
    {
        float pi=(float)si/i;
        printf("El promedio de los números impares es: %f\n", pi);

    }
    

    return 0;
}
