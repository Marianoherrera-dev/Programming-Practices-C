#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, i=1, x;
    int po=0, ne=0, ce=0;

    printf("Informar cuantos números ingresará: ");
    scanf("%d", &n);

    while (i<=n)
    {
        printf("ingrese un número: ");
        scanf("%d", &x);

        if (x==0)
        {
            ce++;
        }
        else
        {
            if (x<0)
            {
                ne++;
            }
            else
            {
                po++;
            }
            
        }
        i++;
    }
    printf("La cantidad de números 0 ingresados son: %d\n", ce);
    printf("La cantidad de números <0 ingresados son: %d\n", ne);
    printf("La cantidad de números >0 ingresados son: %d\n", po);
    
    return 0;
}
