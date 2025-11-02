#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char nom1[30];
    char nom2[30];
    char ape[30];
    int n1, n2, n3;
    int v;
    do
    {
        printf("Ingrese primer nombre en minuscula: ");
        scanf("%s", nom1);
        n1=strlen(nom1);
        v=0;
        for (int i = 0; i < n1 && v==0; i++)
        {
            if (isupper(nom1[i]))
            {
                printf("Ingrese el nombre el mayusculas: \n");
                v=1;
            }
            
        }
    } while (v==1);
    do
    {
        printf("Ingrese segundo nombre en minuscula: ");
        scanf("%s", nom2);
        n2=strlen(nom2);
        v=0;
        for (int i = 0; i < n2 && v==0; i++)
        {
            if (isupper(nom2[i]))
            {
                printf("Ingrese el nombre el mayusculas: \n");
                v=1;
            }
            
        }
    } while (v==1);
    do
    {
        printf("Ingrese el apellido en minuscula: ");
        scanf("%s", ape);
        n3=strlen(ape);
        v=0;
        for (int i = 0; i < n3 && v==0; i++)
        {
            if (isupper(ape[i]))
            {
                printf("Ingrese el apellido en mayusculas: \n");
                v=1;
            }
            
        }
    } while (v==1);
    int n4=n1+n2+n3+4;
    nom1[0]=toupper(nom1[0]);
    nom2[0]=toupper(nom2[0]);
    ape[0]=toupper(ape[0]);

    printf("%s-%s-%s",nom1,nom2,ape);
   
    return 0;
}
