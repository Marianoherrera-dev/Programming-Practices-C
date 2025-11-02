#include<stdio.h>
int main(int argc, char const *argv[])
{
    float f, c;
    printf("Ingrese temperatura en grados Farenheit: ");
    scanf("%f", &f);

    c= 5.0/9.0 *(f-32);
    printf("la temperatura en grados centigrados es %f", c);
    return 0;
}
