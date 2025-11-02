#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main(int argc, char const *argv[])
{
    char cad[30];

    printf("Ingrese una palabra: ");
    scanf("%s", cad);
    int n=strlen(cad);
    int c=0;
    for (int i = 0; i < n; i++)
    {
        cad[i]=tolower(cad[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        if (cad[i]=='a' || cad[i]=='e' || cad[i]=='i' || cad[i]=='o' || cad[i]=='u')
        {
            c++;
        }
        
    }
    printf("La cantidad de vocales son: %d", c);
    return 0;
}
