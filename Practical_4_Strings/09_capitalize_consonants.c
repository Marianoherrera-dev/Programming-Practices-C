#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main(int argc, char const *argv[])
{
    char cad[30];
    int n,v;
    do
    {
    v=0;
    printf("Ingrese una palabra en minúsculas: ");
    scanf("%s", cad);
    n=strlen(cad);
    for (int i = 0; i < n && v==0; i++)
    {
        if (isupper(cad[i])!=0)
        {
            printf("Error, ingreso palabra en mayusculas: \n");
            v=1;
        }    
    }  
      

    } while (v!=0);
    char cad2[n];
    for (int i = 0; i < n; i++)
    {
        if (cad[i]!='a' && cad[i]!='e' && cad[i]!='i' && cad[i]!='o' && cad[i]!='u')
        {
            cad2[i]=toupper(cad[i]);
        }
        else
        {
            cad2[i]=cad[i];
        }
    }
    printf("%s\n%s",cad, cad2);

    return 0;
}
