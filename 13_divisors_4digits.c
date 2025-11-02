#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    do
    {
        printf("Ingrese un número de 4 dígitos: ");
        scanf("%d", &n);

    } while (n>9999 || n<1000);
    
    int nu= n;
    while (nu>1)
    {
        if (n%nu==0)
        {
            printf("%d\n", nu);
        }
        nu--;
    }
    

    return 0;
}
