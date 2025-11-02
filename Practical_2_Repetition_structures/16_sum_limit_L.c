#include<stdio.h>

int main(int argc, char const *argv[])
{
    int l;
    int n=0;
    printf("Ingrese un número: ");
    scanf("%d", &l);

    for (int i = 0; (n+i) < l; i++)
    {
        n=n+i;
        printf("%d\n", i);
    }
    printf("Luego de sumar estos números el resultado es: %d", n);
    return 0;
}
