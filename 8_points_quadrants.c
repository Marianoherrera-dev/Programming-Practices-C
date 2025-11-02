#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, a=0,b=0,c=0,d=0,e=0,f=0,g=0,i=1,x ,y;
    printf("Informe cuantas coordenadas ingresará: ");
    scanf("%d", &n);

    while (i<=n)
    {
        printf("Ingrese coordenada x: ");
        scanf("%d", &x);
        printf("Ingrese coordenada y: ");
        scanf("%d", &y);
        if (x==0 && y==0)
        {
            a++;
        }
        else
        {
            if (x!=0 &&y==0)
            {
                b++;
            }
            else
            {
                if (x==0 && y!=0)
                {
                    c++;
                }
                else
                {
                    if (x>0 && y>0)
                    {
                        d++;
                    }
                    else
                    {
                        if (x<0 && y>0)
                        {
                            e++;
                        }
                        else
                        {
                            if (x<0 && y<0)
                            {
                                f++;
                            }
                            else
                            {
                                if (x>0 && y<0)
                                {
                                    g++;
                                }
                                
                            }
                            
                        }
                    }                    
                }
                
            }
            
        }
        i++;
        
    }
    printf("\nLas coordenadas que estan en el origen son: %d\n", a);
    printf("Las coordenadas que estan en el eje x son: %d\n", b);
    printf("Las coordenadas que estan en el eje y son: %d\n", c);
    printf("Las coordenadas que estan en el primer cuadrante son: %d\n", d);
    printf("Las coordenadas que estan en el segundo cuadradnte son: %d\n", e);
    printf("Las coordenadas que están en el tercer cuadrante son: %d\n", f);
    printf("Las coordenadas que están en el cuarto cuadrante son: %d", g);
    
    return 0;
}
