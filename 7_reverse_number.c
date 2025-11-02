#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, v=0;

    printf("ingrese un número: ");
    scanf("%d", &n);

    while (n>0)
    {
        int r=n%10;
        v=v*10+r;
        n=n/10;
    
    }
    printf("%d", v);
    return 0;
}
