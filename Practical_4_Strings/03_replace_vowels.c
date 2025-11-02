#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char palabra[30];

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);
    int n=strlen(palabra);
    char palabra2[n];
    for (int i = 0; i < n; i++)
    {
        palabra2[i]=palabra[i];
    }
    for (int i = 0; i < n; i++)
    {
            palabra[i]=tolower(palabra[i]);

    }
    
    for (int i = 0; i < strlen(palabra); i++)
    {
        if (palabra[i]=='a'|| palabra[i]=='e' || palabra[i]=='i'||palabra[i]=='o' ||palabra[i]=='u')
        {
            palabra[i]='*';
        }
    }
    printf("%s %s", palabra2, palabra);
    return 0;
}
