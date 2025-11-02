#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2,n3;
    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &n3);

    if (n1>n2)
    {
        if (n1>n3)
        {
            if (n3+1==n2 && n2+1==n1)
            {
                printf("Son consecutivos y descendentes");
            }
            else
            {
                printf("No son consecutivos, pero si descendentes");
            }
        }
        else
        {
            printf("No cumple");
        }
    }
    else
    {
        if (n2<n3)
        {
            if (n3-1==n2 && n2-1==n1)
            {
                printf("Son ascendentes y consecutivos");
            }
            else
            {
                printf("Son ascendentes no consecutivos");
            }
        }
        else
        {
            ("No cumple");
        }
    }
    return 0;
}
