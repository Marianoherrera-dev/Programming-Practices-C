#include<ctype.h>
#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char cad[30];
    printf("Ingrese una cadenadena de caracteres: ");
    scanf("%s", &cad);
    for (int i=0; i<strlen(cad);i++)
      {

        cad[i]=toupper(cad[i]);
      }
    printf("Monstrar %s: ", cad);
    return 0;
}
