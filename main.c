#include <stdio.h>
#include <stdlib.h>
#include "Utilidades.h"

int main()
{
    int restart = 1;

    while(restart == 1) {
        int op = 0;
        printf("Funciones disponibles:\n");
        printf("1 - Factorial\n2 - Combinatoria\n3 - Fibonacci\n4 - Determinar perfecto, abundante o deficiente.\n5 - Producto por suma sucesiva.\n6 - Cociente entero.\n");
        printf("7 - Suma de nros naturales.\n8 - Suma pares\n9 - Pares hasta\n10 - Es primo.\n11 - Factorizar numero.\n");
        op = validarEntre(1,11);
        menuPrincipal(op);
        restart = reset();
        printf("\n \n");
        if (restart == 1)
            system("cls");
    }
    return 0;
}
