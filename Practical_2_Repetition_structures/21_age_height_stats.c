#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, edad, altura, e1=0, a1=0;
    int ordene=0,  ordena=0;
    int sumae=0, sumaa=0;
    float promedioe,promedioa;
    printf("Ingresar cuantos pares de valores ingresaría: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Ingrse altura: ");
        scanf("%d", &altura);
        printf("Ingrese edad: ");
        scanf("%d", &edad);

        if (e1<edad && a1>altura)
        {
            e1=edad;
            a1=altura;
            ordena=n;
            ordene=n;
            
        }
        else
        {
            if (e1<edad && a1>altura)
            {
                e1=edad;
                ordene=n;
            }
            else
            {
                if (e1>edad && a1>altura);
                {
                    a1=altura;
                    ordena=n;
                }
                
            }
        }

        
        sumae=sumae + edad;
        sumaa=sumaa +altura;

    }

    promedioe=(float)sumae/n;
    promedioa=(float)sumaa/n;
    printf("la mayor edad que ingreso es:  %d\nEl orden en que ingreso es: %d\n", e1,ordene);
    printf("La menor altura ingresada es: %d\nEl orden en que ingreso es: %d\n", a1, ordena);
    printf("El promedio de las edades es: %f\n", promedioe);
    printf("El promedio de las alturas es: %f", promedioa);
    
    return 0;
}
