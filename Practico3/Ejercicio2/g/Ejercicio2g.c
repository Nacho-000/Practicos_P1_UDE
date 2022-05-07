/*
Escribir, compilar y ejecutar en C algoritmos que den solución a los siguientes problemas. Hacer
un programa separado para resolver cada uno de ellos:
g) Dadas dos variables enteras, asignarles valores iniciales y luego intercambiar los valores de las
mismas. Imprimir por pantalla el contenido de las variables tanto al comenzar como luego de
intercambiar sus valores.
*/

#include <stdio.h>
int main()
{
     int a,b;
     a=0; //valor inicial de a
     b=0; //valor inicial de b
     printf("El valor inicial de a es: %d\n",a);
     printf("El valor inicial de b es: %d\n",b);
     a=10; //cambio de valor de a
     b=20; //cambio de valor de b
     printf("El valor final de a es: %d\n",a);
     printf("El valor final de b es: %d\n",b);
     return 0;
}