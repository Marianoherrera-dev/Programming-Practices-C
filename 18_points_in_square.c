#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, x, y,m;
    int i=1;
    printf("Indique cuantos puntos ingresará: ");
    scanf("%d", &n);
    printf("Ingrese un número que definirá un lado del cuadrado: ");
    scanf("%d", &m);

    int a=0, b=0, c=0, d=0;

    while (i<=n)
    {
        printf("Ingrese una coordenada x en el plano: ");
        scanf("%d", &x);
        printf("Ingrese una coordenada y en el plano: ");
        scanf("%d", &y);
        if (0<=x && x<=m)
        {
            if (x==0 && y<=m)
            {
                a++;
            }
            else
            {
                if (x<=m && y==0)
                {
                    a++;
                }
                else
                {
                    if (x==m && y<=m)
                    {
                        a++;
                    }
                    else
                    {
                        if (x<=m && y==m)
                        {
                            a++;
                        }
                        else
                        {
                            if (y==x)
                            {
                                b++;
                            }
                            else
                            {
                                if (y<(x+m))
                                {
                                    c++;
                                }
                                else
                                {
                                    if (y>(x+m))
                                    {
                                        d++;
                                    }
                                    
                                }
                            }
                        }
                        
                    }
                    
                }
            }
            
        }
    else
        {
                printf("Error punto fuera del cuadrado\n");
        }
        i++;
    }
    printf("La cantidad de puntos a los lados son: %d\n", a);
    printf("La cantidad de puntos en la diagonal indicada son: %d\n", b);
    printf("Pertenecen al triangulo superior: %d\n", c);
    printf("Pertenecen al triangulo inferior: %d\n", d);
    return 0;
}
