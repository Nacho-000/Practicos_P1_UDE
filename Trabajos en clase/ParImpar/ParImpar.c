#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void mostrarParImpar(int max, char op)
{
    for(int i = 0; i<=max; i++)
    {
        if(op == 'P')
        {
            if(i % 2 == 0)
            {
                printf("%d\n",i);
            }
        }
        else
        {
            if(i % 2 > 0)
            {
                printf("%d\n",i);
            }
        }
    }
}

int main()
{
    char op = 0;
    int numLimite = 0;
    printf("Ingrese el num limite\n");
    scanf("%d", &numLimite);

    printf("Desea ver los Pares (P) o Impares (I)\n");
    fflush (stdin); //Función de C
    scanf("%c", &op);

    mostrarParImpar(numLimite, toupper(op));

    return 0;
}