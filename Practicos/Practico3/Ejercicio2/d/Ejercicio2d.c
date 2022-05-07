/*
Escribir, compilar y ejecutar en C algoritmos que den solución a los siguientes problemas. Hacer
un programa separado para resolver cada uno de ellos:
d) Pedir un precio al usuario, calcular el IVA correspondiente y escribirlo en la pantalla. También
se debe mostrar el resultado de sumarle el IVA al precio ingresado. Utilizar constante simbólica
para definir el valor del IVA.
*/

#include <stdio.h>
#define IVA 0.22 //22% que se puede representar como 0.22
int main()
{
     int precio,iva,total;
     printf("Precio del producto: ");
     scanf("%d",&precio); //precio del producto
     iva=precio*IVA; //valor del iva en pesos no en %
     printf("El valor del iva es: %d\n",iva);
     total=precio+iva; //valor total precio+iva
     printf("El valor total de la compra es: %d\n",total);
     return 0;
}