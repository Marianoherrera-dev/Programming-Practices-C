#include<stdio.h>
#include<ctype.h>
#include<string.h>

typedef struct 
{
    char nombre[20];
    char apellido[20];
    long int telefono;
    long int dni;
    int estado;
}persona;
int cantidaddecontactos(FILE* agenda);
void agregarcontacto(FILE* agenda);
void buscarcontacto(FILE* agenda);
void mostrarcontacto(persona i);
void modificarcontacto(FILE* agenda, persona p, long int i);
void lista(FILE* agenda);


int main(int argc, char const *argv[])
{
    
    int opcion;
    do
    {
        
        printf("Menú agendan\n");
        printf("1-Agregar contacto\n");
        printf("2-Buscar contacto\n");
        printf("3-mostrar  lista\n");
        printf("4-Salir\n\n");
        printf("Seleccione una opción\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            FILE *agenda;
            agenda=fopen("archivoagenda.bin", "rb+");

            if (agenda==NULL)
            {
            printf("El archivo no existe, se creará uno: \n");
            agenda=fopen("archivoagenda.bin", "wb+");
            }
            agregarcontacto(agenda);
            fclose(agenda);
            break;
        case 2:
            FILE *agenda;
            agenda=fopen("archivoagenda.bin", "rb+");

            if (agenda==NULL)
            {
                printf("El archivo no existe, se creará uno: \n");
                agenda=fopen("archivoagenda.bin", "wb+");
            }
            buscarcontacto(agenda);
            fclose(agenda);
            break;
        case 3:
            FILE *agenda;
            agenda=fopen("archivoagenda.bin", "rb+");

            if (agenda==NULL)
            {
                printf("El archivo no existe, se creará uno: \n");
                agenda=fopen("archivoagenda.bin", "wb+");
            }
            lista(agenda);            
            fclose(agenda);
        case 4: 
            fclose(agenda);
        default:
            break;
        }          
    } while (opcion!=3);    
    return 0;
}


void agregarcontacto(FILE* agenda)
{
 persona nuevo;
 printf("Ingrese nombre: \n");
 scanf("%s",nuevo.nombre);

 printf("Ingrese apellido: \n");
 scanf("%s", nuevo.apellido);

 printf("Ingrese telefono: \n");
 scanf("%ld", &nuevo.telefono);

 printf("Ingrese dni: \n");
 scanf("%ld",&nuevo.dni);

 printf("Ingrese estadp: \n");
 scanf("%d", &nuevo.estado);

 fseek(agenda, 0 , SEEK_END);
 fwrite(&nuevo, sizeof(persona), 1,agenda);
 
}
int cantidaddecontactos(FILE* agenda)
{
    fseek(agenda,0,SEEK_END);
    long int tamaño=ftell(agenda);
    int cantidad=tamaño/sizeof(persona);
    fseek(agenda,0,SEEK_SET);
    return cantidad;
}
void mostrarcontacto(persona i)
{
    printf("Nombre: %s\n",i.nombre);
    printf("Apellido: %s\n",i.apellido);
    printf("DNI: %ld\n",i.dni);
    printf("telefono: %ld\n",i.telefono);
    printf("estado: %d\n",i.estado);

}








void buscarcontacto(FILE* agenda)
{
    int opcion;
    do
    {
        ; 
        printf("Seleccione como quiere buscar al contacto: \n");
        printf("1-nombre \n");
        printf("2-apellido \n");
        printf("3-telefono \n");
        printf("4-dni \n");
        printf("5-salir: \n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            {
            char nom[20];
            printf("Ingrese el nombre: ");
            scanf("%19s", nom);
            int contactos=cantidaddecontactos(agenda);
            int encontrado=0;
            for (int i = 0; i < contactos ; i++)
            { 
                persona var;
                fseek(agenda,i* sizeof(persona), SEEK_SET);
                fread(&var, sizeof(persona), 1, agenda);

                if (strcmp(var.nombre,nom)==0)
                {
                    encontrado=1;
                    mostrarcontacto(var);  
                    int sino;
                    printf("Desea modificar contacto? \n1-si\n2-no");
                    scanf("%d",&sino);
                    if (sino==1)
                    {
                    modificarcontacto(agenda, var, i);
                    }
                    
                    break;
                }
            }   
              if (encontrado==0)
                {
                    printf("No se encontro contacto: \n");
                } 

            break;
            }
            case 2:
            {
            char nom[20];
            printf("Ingrese el nombre: ");
            scanf("%19s", nom);
            int contactos=cantidaddecontactos(agenda);
            int encontrado=0;
            for (int i = 0; i < contactos ; i++)
            {
                persona var;
                fseek(agenda,i* sizeof(persona), SEEK_SET);
                fread(&var, sizeof(persona), 1, agenda);

                if (strcmp(var.apellido,nom)==0)
                {
                    encontrado=1;
                    mostrarcontacto(var);
                    int sino;
                    printf("Desea modificar contacto? \n1-si\n2-no");
                    scanf("%d",&sino);
                    if (sino==1)
                    {
                    modificarcontacto(agenda, var, i);
                    }
                    break;
                }
            
            }
                if (encontrado==0)
                {
                    printf("No se encontro contacto: \n");
                }
            }
            break;
            case 3:
            {
            long int tel;
            printf("Ingrese el telefono: ");
            scanf("%ld", &tel);
            int contactos=cantidaddecontactos(agenda);
            int encontrado=0;
            for (int i = 0; i < contactos ; i++)
            {
                persona var;
                fseek(agenda,i* sizeof(persona), SEEK_SET);
                fread(&var, sizeof(persona), 1, agenda);

                if (var.telefono==tel)
                {
                    encontrado=1;
                    mostrarcontacto(var);
                    int sino;
                    printf("Desea modificar contacto? \n1-si\n2-no");
                    scanf("%d",&sino);
                    if (sino==1)
                    {
                    modificarcontacto(agenda, var, i);
                    }
                    break;
                }                
            }
                if (encontrado==0)
                {
                    printf("No se encontro contacto: \n");
                }
            }
            break;
            case 4:
            {
            long int dni;
            printf("Ingrese el dni: ");
            scanf("%ld", &dni);
            int contactos=cantidaddecontactos(agenda);
            int encontrado=0;
            for (int i = 0; i < contactos ; i++)
            {
                persona var;
                fseek(agenda,i* sizeof(persona), SEEK_SET);
                fread(&var, sizeof(persona), 1, agenda);

                if (var.dni==dni)
                {
                    encontrado=1;
                    mostrarcontacto(var);
                    int sino;
                    printf("Desea modificar contacto? \n1-si\n2-no");
                    scanf("%d",&sino);
                    if (sino==1)
                    {
                    modificarcontacto(agenda, var, i);
                    }
                    break;
                }   
            }
            if (encontrado==0)
                {
                    printf("No se encontro contacto: \n");
                }
            }
            break;
            
        default:
            printf("Opción invalida: \n");
            break;
        
        }
    } while (opcion!=5);
}
void modificarcontacto(FILE* agenda, persona p, long int li)
{
    int opcion;
    do
    {
        printf("Seleccione la caracteristica que desea modificar: \n");
        printf("1-nombre\n2-apellido\n3-telefono\n-4-dni\n5-estado\n6-salir");
        scanf("%d",&opcion);

        switch (opcion)
        {
        case 1:
            {
            printf("Ingrese nuevo nombre: ");
            scanf("%s", p.nombre);
            }
            break;
        case 2:
            {
            printf("Ingrese nuevo apellido: ");
            scanf("%s", p.apellido);
            }
            break;
        case 3:
            {
            printf("Ingrese nuevo telefono: ");
            scanf("%ld", &p.telefono);
            }
            break;
        case 4:
            {
            printf("Ingrese nuevo dni: ");
            scanf("%ld", &p.dni);
            }
            break;
        case 5:
            {
            if(p.estado==1)
            {
                p.estado=0;
            }
            else
            {
                p.estado=1;
            }
            }
            break;                
        case 6:
            {
            printf("Saliendo...");
            }
            break;
        }
    } while (opcion!=6);
    fseek(agenda,li*sizeof(persona),SEEK_SET);
    fwrite(&p,sizeof(persona),1,agenda);
}

void lista(FILE* agenda)
    {
        persona leer;
        while(fread(&leer, sizeof(persona),1, agenda)==1)
            printf("Nombre: %s\n",leer.nombre);
            printf("Apellido: %s\n",leer.apellido);
            printf("DNI: %ld\n",leer.dni);
            printf("telefono: %ld\n",leer.telefono);
            printf("estado: %d\n",leer.estado);
        
    }



