#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char palabra1[30];
    

    printf("Ingrese una palabra: ");
    scanf("%s", &palabra1);

    int n=strlen(palabra1);

    char palabra2[n];
    

    for (int i = 0; i < strlen(palabra1); i++)
    {
        palabra2[i]=toupper(palabra1[i]);
    }

    printf("La palabra es: %s %s", palabra1, palabra2);
    
    return 0;
}
