#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int x, y, i=0, n, per=0, ar=0, ab=0;
    printf("Informar la cantidad de puntos que ingreasrá: ");
    scanf("%d", &n);

    while (i<=n)
    {
        printf("Ingrese la coordenada x: ");
        scanf("%d", &x);
        printf("Ingrese la coordenada y: ");
        scanf("%d", &y);

        float recta= (2.0f/3.0f)*x -2;

        if (fabs(recta)< 0.001f)
        {
            per++;
        }
        else
        {
            if (y < recta)
            {
                ab++;
            }
            else
            {
                ar++;
            }
        }
        i++;
    }
    
    printf("Los puntos que están arriba de la recta son: %d\nLos puntos que están por debajo son: %d\nLos puntos que pertenecen a la misma son: %d", ar, ab, per);

    return 0;
}
