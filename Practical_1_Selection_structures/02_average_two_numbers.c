#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2;
    float prom; 
    printf("Ingrese primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese segundo numero: ");
    scanf("%d",&num2);
    prom = (num1 + num2)/2.0;
    printf("este es elresultado: %f\n", prom);
    return 0;
}
