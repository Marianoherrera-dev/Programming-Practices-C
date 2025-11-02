#include<stdio.h>

int main(int argc, char const *argv[])
{

    int n, num;
    int i=1, s=0;
    float p;
    printf("Informar la cantidad de nùmeros a ingresar: ");
    scanf("%d", &n);
    while (i<=n)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        s=s+num;
        i++;
        
    }
    p=(float)s/n; 
    printf("El promerdio es %f\n", p);
    return 0;
}
