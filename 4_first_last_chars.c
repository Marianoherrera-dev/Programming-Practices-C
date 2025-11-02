#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main(int argc, char const *argv[])
{
    char palabra[30];

    do
    {
        printf("Ingrese una palabra de al menos 5 caracteres: ");
        scanf("%s", palabra);
        if (strlen(palabra)<5)
        {
            printf("Ingrese al menos 5 caracteres\n");
        }
        
        
    } while (strlen(palabra)<5);

    for (int i = 0; i < strlen(palabra); i++)
    {
        palabra[i]=toupper(palabra[i]);
    }

    char palabra2[5];

    palabra2[0]=palabra[0];
    palabra2[1]=palabra[1];
    palabra2[2]=palabra[strlen(palabra)-2];
    palabra2[3]=palabra[strlen(palabra)-1];
    palabra2[4]='\0';


    printf("%s\n%s", palabra,palabra2);

    return 0;
}
