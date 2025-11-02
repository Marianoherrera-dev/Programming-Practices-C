#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, f=1;
    printf("Ingrese un número natural: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
        f=f*i;
    }
    printf("Luego de multiplicar todos estos números el desarrollo factorial es %d", f);
    

    return 0;
}
