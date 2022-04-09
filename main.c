#include <stdio.h>
#include <stdlib.h>
#include "Utilidades.h"

int main()
{
    int op;
    printf("Funciones disponibles:\n");
    printf("1- Factorial\n2-Combinatoria");
    op = validarEntre(1,5);
    menuPrincipal(op);
    return 0;
}
