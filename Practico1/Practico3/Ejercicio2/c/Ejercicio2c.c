/*
Escribir, compilar y ejecutar en C algoritmos que den solución a los siguientes problemas. Hacer
un programa separado para resolver cada uno de ellos:
c) Desplegar el mensaje “Ingrese un numero entero: ”, enseguida leer un número entero
y luego desplegarlo.
*/

#include <stdio.h>
int main()
{
     int a;
     printf("Ingrese un numero entero: ");
     scanf("%d",&a);
     printf("El numero ingresado es %d",a);
     //%d para poner donde va el numero entero, ¿cual numero? el que se menciona
     //en la misma linea al terminar el conjunto de caracteres
     return 0;
}