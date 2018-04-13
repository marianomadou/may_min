#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char Nombre[100];
    char Apellido[100];
    char nombreApellido[200];
    int i;
    int len;

    printf("Ingrese su nombre: ");
    fgets(Nombre, sizeof(Nombre), stdin);

    Nombre[strlen(Nombre)-1] = '\0';

    printf("Ingrese su apellido: ");
    fgets(Apellido, sizeof(Apellido), stdin);

    Apellido[strlen(Apellido)-1] = '\0';

    strcpy(nombreApellido, Apellido);
    strcat(nombreApellido, ", ");
    strcat(nombreApellido, Nombre);

    strlwr (nombreApellido);

    nombreApellido[0] = toupper(nombreApellido[0]);

    len = strlen(nombreApellido);

    for(i=1; i<len; i++)
    {

        if(isspace(nombreApellido[i]))

           nombreApellido[i+1] = toupper(nombreApellido[i+1]);
    }

    puts (nombreApellido);

    return (0);
}
