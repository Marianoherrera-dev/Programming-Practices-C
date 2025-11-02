#include<stdio.h>

int main(int argc, char const *argv[])
{
    long int n, d=0, p=1;
    printf("Ingrese un número en binario: ");
    scanf("%ld", &n);
    long int original_n=n;
    while (n>0)
    {
        int r= n%10;
        d=d+r*p;
        p=p*2;
        n=n/10;
    }

    printf("El número ingresaro en binario es: %ld\nY en decimal es: %ld", original_n100, d);
    
    return 0;
}
