#include <stdio.h>
#include <conio.h>

int main() 
{
     int x;
     printf("Ingrese calificacion: \n");
     scanf("%d",&x);
     if (x>0 && x<60)
     {
          printf("Insuficiente");
     }
     if (x>59 && x<76)
     {
          printf("Aceptable");
     }
     if (x>75 && x<90)
     {
          printf("Bueno");
     }
     if (x>89 && x<=100)
     {
          printf("Excelente");
     }
     if (x<0 || x>100)
     {
          printf("Un numero entre el 0 y el 100 porfavor");
     }
     return 0;
}