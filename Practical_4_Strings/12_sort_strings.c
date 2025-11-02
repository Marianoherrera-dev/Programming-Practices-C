#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Informar la cantidad de cadenas que ingresará: ");
    scanf("%d",&n);
    char cad[n][30];
    int v,p;
    for (int i = 0; i < n; i++)
    {
         
        do
        {      
                v=0;  
                printf("Ingrese la cadena %d: ", i);
                scanf("%s", cad[i]);   
                p=strlen(cad[i]);
                for (int j = 0; j < p && v==0; j++)
                {
                   if (isupper(cad[i][j]))
                    {
                        printf("Error, palabra en mayusculas: ");
                        v=1;
                    }
                
                }
            
        }while (v!=0);
   
    } 
        char aux[30];
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n-1; i++)
            {
                if (strcmp(cad[i],cad[i+1])>0)
                {
                    strcpy(aux,cad[i]);
                    strcpy(cad[i],cad[i+1]);
                    strcpy(cad[i+1],aux);
                }
                
            }
            
        }
        
        for (int i = 0; i < n; i++)
        {
            printf("%s\n", cad[i]);
        }
        
    return 0;
 
    }


    

    
