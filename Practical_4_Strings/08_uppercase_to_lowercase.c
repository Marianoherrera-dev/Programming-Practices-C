#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char cad[30];
    int v,n;
    do
    {       
    v=0;
    printf("Ingrese una palabra en mayusuculas: ");
    scanf("%s",cad);
    n=strlen(cad);
    for (int i = 0; i < n && v==0; i++)
    {
       if (islower (cad[i])!=0)
       {
            printf("Error, ingreso paalbra en minuscula.\n");
            v=1;
       }
       
    }
    } while (v!=0);
    for (int i = 0; i < n; i++)
    {
        cad[i]=tolower(cad[i]);
    }
    printf("%s", cad);

    return 0;
}
