#include<stdio.h>

int main(int argc, char const *argv[])
{
    long int n1, n2;
    long int resultado=0, p=1, a=0, i=1;

    printf("Ingresar primer número de 4 dígitos: ");
    scanf("%ld", &n1);
    printf("Ingresar segundo número de 4 dígitos: ");
    scanf("%ld", &n2);

    while (i<=4)
    {
        int r1=n1%10;
        int r2=n2%10;
        int s=r1+r2+a;
        a=s/2;
        resultado=resultado+(s%2 )* p;
        n1=n1/10;
        n2=n2/10;
        p=p*10;
        i++;
    }
    if (a==1)
    {
        resultado=resultado+p;
    }
    
    printf("El resultado de la suma es: %ld", resultado);
    return 0;
}
