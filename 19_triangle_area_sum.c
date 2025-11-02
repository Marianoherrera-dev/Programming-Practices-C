#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, x, y;
    float supp=0, supn=0;
    float s=0; 
    int q1=0,q2=0,q3=0,q4=0;
    printf("Ingrse la cantidad de coordenas deseadas: ");
    scanf("%d", &n);

   for (int i = 1; i < n; i++)
   {
    printf("Ingrese coordenada x: ");
    scanf("%d", &x);
    printf("Ingrese coordenada y: ");
    scanf("%d", &y);

    
    if ((x*y)>0)
    {
        if (x>0)
        {
            q1++;
        }
        else
        {
            q3++;
        }
        s=(float)0.5*x*y;
        supp=supp+s;
        
    }
    else
    {
        if (x>0)
        {
            q4++;
        }
        else
        {
            q2++;
        }
        s=(float)0.5*x*y;
        supn=supn+s;
    }
    
    
   }
   printf("La cantidad de triangulos en el primer cuadrante son: %d\n", q1);
    printf("La cantidad de triangulos en el segundo cuadrante son: %d\n", q2);
    printf("La cantidad de triangulos en el tercer cuadrante son: %d\n", q3);
    printf("La cantidad de triangulos en el cuarto cuadrante son: %d\n", q4);
   printf("La suma de superficies positivas es: %f\n", supp);
   printf("La suma de superficies negativas es: %f\n", supn);


    return 0;
}
