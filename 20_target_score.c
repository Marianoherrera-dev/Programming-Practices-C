#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,x,y;
    int p=0;

    printf("Informar cuantos puntos en el plano ingesará: ");
    scanf("%d", &n);
    float h; 
    for (int i = 1; i <= n; i++)
    {
        printf("Ingrese coodenada x: ");
        scanf("%d", &x);
        printf("Ingrese coordenda y: ");
        scanf("%d", &y);
        h=(pow(x,2)+pow(y,2));
        if (h<=1)
        {
            p=p+4;
        }
        else
        {
            if (h<=4)
            {
                p=p+3;
            }
            else
            {
                if (h<=9)
                {
                    p=p+2;
                }
                else
                {
                    if (h<=16)
                    {
                        p=p+1;
                    }
                    
                }
                
            }
            
        }
        
    }
    
    float promedio= (float)p/n;
    printf("El puntaje es: %d\n", p);
    printf("El promedio es delpuntaje es: %f\n", promedio);
    return 0;
}
