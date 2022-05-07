/*
Escribir, compilar y ejecutar en C algoritmos que den solución a los siguientes problemas. Hacer
un programa separado para resolver cada uno de ellos:
e) Pedir al usuario dos números, sumarlos y escribir el resultado en pantalla. Realizar el algoritmo
de dos formas diferentes 1) no usando variable auxiliar, 2) usando variable auxiliar.
*/

#include <stdio.h>
int main()
{
     float num1,num2,aux;
     printf("CALCULADORA (SUMA)\n");
     printf("Introduzca el primer valor que quiera sumar: \n");
     scanf("%f",&num1);
     printf("Introduzca el segundo valor que quiera sumar: \n");
     scanf("%f",&num2);
     aux=num1+num2; //variable aux que tiene como resultado la suma
     printf("El resultado de la suma es: %f\n",aux); //imprimo valor de variable aux
     return 0;
}