#include<stdio.h>
int main(int argc, char const *argv[])
{
    float pr, iva, ib, im;
    printf("Ingrese el precio del producto: ");
    scanf("%f",&pr);
    iva= pr*0.21;
    ib=  pr*0.025;
    im= pr*0.015;
    
    printf("impuesto municipal: %f\nimpuesto IVA: %f\ningresos brutos %f\n ",im, iva, ib);


    return 0;
}
