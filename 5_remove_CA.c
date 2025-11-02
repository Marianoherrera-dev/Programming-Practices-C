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
    n= strlen(cad);
    for (int i = 0; i < n && v==0; i++)
    {
        if (isupper(cad[i])==0)
        {
            printf("Error, palabra que no es mayuscula.");
            v=i;
        }
        
    }
    
    
} while (v!=0);

    
    char cadres[n+1];
    cadres[n]='\0';
    int c=0;
    int i=0;
    while (i<n)
    {
        if (cad[i]=='C')
        {
            if (i+1!=n)
            {
                if (cad[i+1]=='A')
                {
                    i++;

                }                
            }            
        }
        else
        {
        
            cadres[c]=cad[i];
            c++;
        }
        i++;
    }
    cadres[c]='\0';
    
  printf("%s",cadres);
  return 0;

}  

