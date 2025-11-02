#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char cad[30];
    int n; 
    printf("Ingrese una palabra: ");
    scanf("%s",cad);

    n=strlen(cad);
    int c;
    for (int i = 0; i < n; i++)
    {
        if (cad[i]!='A' && cad[i]!='E' && cad[i]!='I' && cad[i]!='O' && cad[i]!='U' && cad[i]!='a' && cad[i]!='e' && cad[i]!='i' && cad[i]!='o' && cad[i]!='u')
        {
            c++;
        }
        
    }
    char cad2[n+c+1];
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (cad[i]!='A' && cad[i]!='E' && cad[i]!='I' && cad[i]!='O' && cad[i]!='U' && cad[i]!='a' && cad[i]!='e' && cad[i]!='i' && cad[i]!='o' && cad[i]!='u')
        {
            cad2[j]='+';
            cad2[j+1]='+';
            j=j+2;
        }
        else
        {
            cad2[j]=cad[i];
            j++;
        }
    }
    cad2[n+c]='\0';
    
    printf("%s %s", cad, cad2);
    return 0;
}
