#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, p=0, t=0;
    
    do
    {       
        do
        {
            printf("Ingrese el tiro del dado: ");
            scanf("%d", &n);
        } while (n>6 || n<=0);

        p=p+n;
        t++;
    } while (p%2!=0);
    int pt=p-n;
    int tt=t-1;
    printf("El puntaje total sin contar el último tiro es: %d\n", pt);
    printf("La cantidad de tiros totales sin contar el último es: %d", tt);

    return 0;
}
