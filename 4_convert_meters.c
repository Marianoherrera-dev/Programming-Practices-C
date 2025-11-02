#include<stdio.h>

int main(int argc, char const *argv[])
{
    int m, cm, dm;  

    printf("Ingrese un numero en metros: ");
    scanf("%d", &m);
    cm = m*100 ;
    dm = m*10 ;
    printf("el numero en metros es: %d\n",m);
    printf("equivale a %d centimetros, y %d decimetros\n", cm, dm);


    return 0;
}

