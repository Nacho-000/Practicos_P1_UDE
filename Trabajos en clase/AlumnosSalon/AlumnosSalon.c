#include <stdlib.h>
#include <stdbool.h>

/*
Pedir dos datos, el primer dato es la cantidad de alumnos.
El segundo dato la canitdad de profesores.
Mostrar la cantidad de personas totales.
Para usar bool se debe usar la libreria #include <stdbool.h>
*/

bool esPar(int num)
{
    if(num % 2 == 0)
        return true;

    return false;
}

bool esImpar(int num)
{
    if(num % 2 != 0)
        return true;

    return false;
}

int pedirCantidadAlumnos()
{
    int cantAlu = 0;
    printf("Ingrese el total de alumnos\n");
    scanf("%d", &cantAlu);
    return cantAlu;
}

int pedirCantidadProfesores()
{
    int totalProf = 0;
    printf("Ingrese el total de profesores\n");
    scanf("%d", &totalProf);
    return totalProf;
}

int pedirCantidad(char* mensaje)
{
    int cantidad = 0;
    printf(mensaje);
    scanf("%d", &cantidad);
    return cantidad;
}

void mostrarAlumnosPorSalon(int cantAlumnos)  //5
{
    printf("Alumnos del Sal\242n 1: \n"); // \242 = ó
    for(int i = 1; i<=cantAlumnos; i++)
    {
        if(esPar(i))
        {
            printf("%d \n",i);
        }
    }
    printf("Alumnos del Sal\242n 2: \n");
    for(int i = 1; i<=cantAlumnos; i++)
    {
        if(esImpar(i))
        {
            printf("%d \n",i);
        }
    }
}

int main()
{
    int totalAlumnos, totalProfesores;

    totalAlumnos = pedirCantidad("Ingrese cantidad de alumnos \n");
    totalProfesores = pedirCantidad("Ingrese cantidad de profesores \n");

    int total = totalAlumnos + totalProfesores;
    printf("El total de personas es: %d\n", total);
    mostrarAlumnosPorSalon(totalAlumnos);

    return 0;
}