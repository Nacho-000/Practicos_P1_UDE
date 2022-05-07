/*
Escribir, compilar y ejecutar en C algoritmos que den solución a los siguientes problemas.
Hacer un programa separado para resolver cada uno de ellos:
f) Calcular y desplegar el área (A = r2π) de un círculo a partir de su radio.
Utilizar constante simbólica para definir el valor de PI.
*/

#include <stdio.h>
#define PI 3.1416
int main()
{
     int radio;
     float area;
     printf("CALCULO DE AREA DE UN CIRCULO\n");
     printf("Introduce el radio de tu circulo en cm: \n");
     scanf("%d",&radio);
     area=(radio*radio)*PI; //formula (A=r^2π)
     printf("El Area de tu circulo (cm^2) es: %f",area);
     return 0;
}