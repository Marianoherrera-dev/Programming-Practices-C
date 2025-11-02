#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    FILE *archivop;
    FILE *archivo;
    char *palabras_ingles[]={"printf","int","if","main","else","while","return","float","char","#include"};
    char *palabras_español[]={"imprimir","entero", "si","principal","sino","mientras","retornar","flotante","caracter", "#incluir"};
    int cantidaddepalabras= 10;
    archivop=fopen("archivop.txt","r");
    if (archivop==NULL)
    {
        printf("El archivo no existe");
        return 1;
    }
    
    archivo=fopen("texto.txt", "w");

    char linea[300];
    while (fgets(linea,sizeof(linea), archivop)!=NULL)
    {
        char linea_archivo[300]="";
        char *palabra=strtok(linea, " \n");

        while (palabra!=NULL)
        {             
                   
        int traducida=0;

        for (int i = 0; i < cantidaddepalabras; i++)
        {
            if (strcmp(palabra,palabras_español[i])==0)
            {
                strcat(linea_archivo, palabras_ingles[i]);
                traducida=1;
                break;
            }
            
        }
        if (traducida==0)
        {
            strcat(linea_archivo,palabra);
        }               
        strcat(linea_archivo," ");
        palabra=strtok(NULL," \n");
        }
        fprintf(archivo,"%s\n",linea_archivo);
    }
    fclose(archivo);
    fclose(archivop);
    
    return 0;
}
