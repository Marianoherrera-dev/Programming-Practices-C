#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h> // Added for general utilities

// --- ESTRUCTURA DE DATOS (Data Structure) ---

// Defines the structure for a single contact (persona).
// 'estado' (status) field is used for soft deletion (1=Active, 0=Deleted).
typedef struct 
{
    char nombre[20];
    char apellido[20];
    long int telefono;
    long int dni;
    int estado;
} persona;

// --- PROTOTIPOS DE FUNCIÓN (Function Prototypes) ---

// Counts the total number of contacts stored in the binary file.
int cantidaddecontactos(FILE* agenda);

// Prompts user for data and appends a new contact to the file.
void agregarcontacto(FILE* agenda);

// Searches for a contact based on various fields (name, dni, etc.).
void buscarcontacto(FILE* agenda);

// Displays the details of a single contact structure.
void mostrarcontacto(persona i);

// Modifies an existing contact record at a specific index (li).
void modificarcontacto(FILE* agenda, persona p, long int li);

// Lists all active contacts (estado = 1).
void lista(FILE* agenda);


// --- FUNCIÓN PRINCIPAL (Main Function) ---

int main(int argc, char const *argv[])
{
    // Declared the file pointer once for centralized control.
    FILE *agenda = NULL; 
    int opcion;

    // Attempt to open the file in read/write binary mode (rb+).
    agenda = fopen("archivoagenda.bin", "rb+");

    // Defensive check: If the file doesn't exist, try to create it (wb+).
    if (agenda == NULL)
    {
        printf("El archivo no existe, se creará uno: \n");
        agenda = fopen("archivoagenda.bin", "wb+");
        
        // CRITICAL CHECK: If file creation fails, exit with error.
        if (agenda == NULL) {
            printf("Error: No se pudo crear el archivo. Saliendo.\n");
            return 1; 
        }
    }
    
    do
    {
        printf("\n--- Menú Agenda ---\n");
        printf("1- Agregar contacto\n");
        printf("2- Buscar y Modificar contacto\n");
        printf("3- Mostrar lista\n");
        printf("4- Salir\n\n");
        printf("Seleccione una opción: ");
        
        // Robust input validation: loops until a valid integer is entered.
        while (scanf("%d", &opcion) != 1) {
            printf("Entrada inválida. Por favor, ingrese un número: ");
            while (getchar() != '\n'); // Clear input buffer
        }

        switch (opcion)
        {
            case 1:
                agregarcontacto(agenda);
                break;
            case 2:
                buscarcontacto(agenda);
                break;
            case 3:
                lista(agenda);
                break;
            case 4: 
                printf("Saliendo de la aplicación...\n");
                break;
            default:
                printf("Opción invalida. Por favor, intente de nuevo.\n");
                break;
        } 
        
    } while (opcion != 4); 
    
    // Defensive Programming: Close the file only if it was successfully opened.
    if (agenda != NULL) {
        fclose(agenda);
    }
    
    return 0;
}

// --- DEFINICIÓN DE FUNCIONES (Function Definitions) ---

// Function to add a new contact to the end of the file.
void agregarcontacto(FILE* agenda)
{
    persona nuevo;
    printf("Ingrese nombre: \n");
    scanf("%19s", nuevo.nombre); 

    printf("Ingrese apellido: \n");
    scanf("%19s", nuevo.apellido);

    printf("Ingrese telefono: \n");
    // Robust input validation for long int
    while (scanf("%ld", &nuevo.telefono) != 1) {
        printf("Entrada inválida. Ingrese solo números para el teléfono: \n");
        while (getchar() != '\n'); 
    }

    printf("Ingrese dni: \n");
    // Robust input validation for long int
    while (scanf("%ld", &nuevo.dni) != 1) {
        printf("Entrada inválida. Ingrese solo números para el DNI: \n");
        while (getchar() != '\n'); 
    }

    // Initial status is set to Active (1).
    nuevo.estado = 1; 

    // Seek to the end of the file to append the new contact.
    fseek(agenda, 0 , SEEK_END);
    fwrite(&nuevo, sizeof(persona), 1,agenda);
    printf("Contacto agregado exitosamente.\n");
}

// Function to calculate the total number of stored contacts.
int cantidaddecontactos(FILE* agenda)
{
    fseek(agenda, 0, SEEK_END);
    long int tamaño = ftell(agenda);
    
    // Calculate the number of records (file size / size of one struct).
    int cantidad = tamaño / sizeof(persona);
    
    // Rewind pointer back to the beginning for safety.
    fseek(agenda, 0, SEEK_SET);
    
    return cantidad;
}

// Function to display the details of a single contact.
void mostrarcontacto(persona i)
{
    printf("\n--- Detalles del Contacto ---\n");
    printf("Nombre: %s\n", i.nombre);
    printf("Apellido: %s\n", i.apellido);
    printf("DNI: %ld\n", i.dni);
    printf("telefono: %ld\n", i.telefono);
    // Display status as 'Activo' or 'Eliminado' for clarity.
    printf("estado: %s\n", (i.estado == 1 ? "Activo" : "Eliminado")); 
    printf("---------------------------\n");
}

// Function to search for a contact and offer modification.
void buscarcontacto(FILE* agenda)
{
    int opcion;
    // Check if the file is empty before searching.
    if (cantidaddecontactos(agenda) == 0) {
        printf("La agenda está vacía. Agregue contactos primero.\n");
        return;
    }

    do
    {
        printf("\n--- Menú de Búsqueda ---\n"); 
        printf("1- Buscar por Nombre\n");
        printf("2- Buscar por Apellido\n");
        printf("3- Buscar por Telefono\n");
        printf("4- Buscar por DNI\n");
        printf("5- Volver al Menú Principal\n");
        printf("Seleccione opción: ");
        
        // Robust input validation
        while (scanf("%d", &opcion) != 1) {
            printf("Entrada inválida. Por favor, ingrese un número: ");
            while (getchar() != '\n');
        }

        switch (opcion)
        {
            case 1:
            {
                char nom[20];
                printf("Ingrese el nombre: ");
                scanf("%19s", nom);
                int contactos=cantidaddecontactos(agenda);
                int encontrado=0;
                
                // Iterate through all records in the file.
                for (int i = 0; i < contactos ; i++)
                { 
                    persona var;
                    // Seek and read the record.
                    fseek(agenda,i* sizeof(persona), SEEK_SET);
                    fread(&var, sizeof(persona), 1, agenda);

                    // Search for name and ensure contact is active (estado == 1).
                    if (strcmp(var.nombre,nom)==0 && var.estado == 1)
                    {
                        encontrado=1;
                        mostrarcontacto(var);
                        int sino;
                        printf("Desea modificar o eliminar contacto? \n1-si\n2-no\n");
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
                    printf("No se encontro contacto activo con ese nombre.\n");
                } 
                break;
            }
            case 2:
            {
                char nom[20];
                printf("Ingrese el apellido: "); // Changed prompt to Apellido
                scanf("%19s", nom);
                int contactos=cantidaddecontactos(agenda);
                int encontrado=0;
                for (int i = 0; i < contactos ; i++)
                {
                    persona var;
                    fseek(agenda,i* sizeof(persona), SEEK_SET);
                    fread(&var, sizeof(persona), 1, agenda);

                    if (strcmp(var.apellido,nom)==0 && var.estado == 1) // Search by apellido and check status
                    {
                        encontrado=1;
                        mostrarcontacto(var);
                        int sino;
                        printf("Desea modificar o eliminar contacto? \n1-si\n2-no\n");
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
                    printf("No se encontro contacto activo con ese apellido.\n");
                }
                break;
            }
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

                    if (var.telefono==tel && var.estado == 1) // Search by telefono and check status
                    {
                        encontrado=1;
                        mostrarcontacto(var);
                        int sino;
                        printf("Desea modificar o eliminar contacto? \n1-si\n2-no\n");
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
                    printf("No se encontro contacto activo con ese telefono: \n");
                }
                break;
            }
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

                    if (var.dni==dni && var.estado == 1) // Search by dni and check status
                    {
                        encontrado=1;
                        mostrarcontacto(var);
                        int sino;
                        printf("Desea modificar o eliminar contacto? \n1-si\n2-no\n");
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
                    printf("No se encontro contacto activo con ese dni: \n");
                }
                break;
            }
            case 5:
                printf("Volviendo al Menú Principal...\n");
                break;
            default:
                printf("Opción invalida.\n");
                break;
        }
    } while (opcion != 5);
}

// Function to modify a contact's fields. Includes the 'status' toggle for deletion.
void modificarcontacto(FILE* agenda, persona p, long int li)
{
    int opcion;
    do
    {
        printf("\n--- Modificar Contacto: Seleccione la Característica ---\n");
        printf("1- Nombre\n2- Apellido\n3- Telefono\n4- DNI\n5- Cambiar Estado (Activo/Eliminar)\n6- Guardar Cambios y Salir\n");
        
        // Robust input validation
        while (scanf("%d", &opcion) != 1) {
            printf("Entrada inválida. Por favor, ingrese un número: ");
            while (getchar() != '\n');
        }

        switch (opcion)
        {
            case 1:
                printf("Ingrese nuevo nombre: ");
                scanf("%19s", p.nombre);
                break;
            case 2:
                printf("Ingrese nuevo apellido: ");
                scanf("%19s", p.apellido);
                break;
            case 3:
                printf("Ingrese nuevo telefono: ");
                while (scanf("%ld", &p.telefono) != 1) {
                    printf("Entrada inválida. Ingrese solo números: ");
                    while (getchar() != '\n'); 
                }
                break;
            case 4:
                printf("Ingrese nuevo dni: ");
                 while (scanf("%ld", &p.dni) != 1) {
                    printf("Entrada inválida. Ingrese solo números: ");
                    while (getchar() != '\n'); 
                }
                break;
            case 5:
                // Toggles status: if 1 (Active) changes to 0 (Deleted), if 0 changes to 1.
                p.estado = (p.estado == 1) ? 0 : 1; 
                printf("Estado cambiado a: %s\n", (p.estado == 1 ? "Activo" : "Eliminado"));
                break;
            case 6:
                printf("Guardando cambios...\n");
                break;
            default:
                printf("Opción invalida.\n");
        }
    } while (opcion != 6);

    // Seek to the exact position of the record in the file using its index (li).
    fseek(agenda, li * sizeof(persona), SEEK_SET);
    // Overwrite the original record with the modified structure (p).
    fwrite(&p, sizeof(persona), 1, agenda);
    printf("Contacto actualizado exitosamente en el archivo.\n");
}

// Function to list all contacts in the file.
void lista(FILE* agenda)
{
    persona leer;
    
    // Rewind pointer to the start of the file before reading.
    fseek(agenda, 0, SEEK_SET);

    printf("\n--- Lista de Contactos Activos ---\n");
    
    // FIX: The loop must contain all the logic within braces {}.
    while(fread(&leer, sizeof(persona), 1, agenda) == 1)
    {
        // Only display contacts that are Active (estado == 1).
        if (leer.estado == 1) { 
            mostrarcontacto(leer); 
        }
    }
    printf("--- Fin de la Lista ---\n");
}



