#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int d=0, p=0, r=0, ri=0;
    for (int i = 1; i <= 30; i++)
    {
        ri=ri+100;
        p=p+pow(2,r);
        r++;
        if (ri<p && d==0 )
        {
            d=i;
        }
        

    }
    printf("El dinero que consigue el pobre es: %d\n", p);
    printf("EL dinero que consigue el rico es: %d\n", ri);
    printf("El día que comienza a ganar el pobre que el rico es: %d", d);
    return 0;
}
