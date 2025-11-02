#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3;

    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese el Segundo numero: ");
    scanf("%d", &n2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &n3);

    if (n1==n2 && n2==n3)
    {
        printf("Son iguales");
    }
    else
    {
        if (n1>n2)
        {
            if (n1>n3)
            {
                printf("%d, %d, %d", n3,n2,n1);
            }
            else
            {
                printf("%d, %d, %d", n2,n1,n3);
 
            }
        }
        else
        {
            if (n1>n3)
            {
                printf("%d, %d, %d", n3,n1,n2);

            }
            else
            {
                printf("%d, %d, %d", n1,n3,n2);

            }
            
        }
        
    }
    return 0;
}
