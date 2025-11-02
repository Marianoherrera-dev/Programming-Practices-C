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
        printf("Ingrese una palabra en mayusculas: ");
        scanf("%s", cad);
        n=strlen(cad);
        for (int i = 0; i < n && v==0; i++)
        {
            if (islower(cad[i])!=0)
            {
                printf("Error ingreso una palabra en minúscula: \n");
                v=1;
            }
            
        }
        

    } while (v!=0);
    char cad2[n+1];
    for (int i = 0; i < n; i++)
    {
        if (cad[i]=='A' || cad[i]=='E' || cad[i]=='I' || cad[i]=='O' || cad[i]=='U')
        {
            cad2[i]=tolower(cad[i]);
        }
        else
        {
            cad2[i]=cad[i];
        }
    }
    cad2[n]='\0';
    printf("%s %s", cad,cad2);

    return 0;
}
