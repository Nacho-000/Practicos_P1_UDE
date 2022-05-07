#include <stdio.h>
#include <stdlib.h>
#define ARRAY_LENGHT 30
#define CANT_ALUMNOS 3

struct ALUMNO
{
        char nombre [ARRAY_LENGHT];
        char apellido [ARRAY_LENGHT];
        long cedula;
};

int main()
{
    struct ALUMNO alumnos[CANT_ALUMNOS];

    printf("Ingrese 3 alumnos: \n");
    for(int x= 0; x < CANT_ALUMNOS; x++)
    {
        printf("Nombre: ");
        scanf("%s",&alumnos[x].nombre);
        printf("Apellido: ");
        scanf("%s",&alumnos[x].apellido);
        printf("C.I: ");
        scanf("%d",&alumnos[x].cedula);
    }

    int cantidadAlumnos = sizeof(alumnos) / sizeof(alumnos[0]);
    printf("Alumnos ingresados: \n");
    printf("Cantidad de alumnos ingresados: %d \n",cantidadAlumnos);

    for(int x= 0; x < CANT_ALUMNOS; x++)
    {
        printf("Nombre: %s \nC.I: %d \n",alumnos[x].nombre);
        printf("Apellido: %s \n",alumnos[x].apellido);
        printf("C.I: %d \n",alumnos[x].cedula);
    }

    return 0;
}
