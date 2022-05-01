#include <stdio.h>
#include <stdlib.h>
#include "FuncionesMatematicas.h"
#include <string.h>

int datoPositivo(int min){
    int x;
    printf("Ingrese un numero positivo: ");
    scanf("%i", &x);
    while (x < min){
        printf("Error al ingresar el dato.\n");
        printf("Ingrese un numero positivo: ");
        scanf("%i", &x);
    }
    return x;
}
void mostrarResultado(double x){
    printf("El resultado obtenido es %.0f.\n", x);
}
int validarEntre(int min, int max){
    int x;
    printf("\nInserte un numero del %i al %i: ", min, max);
    scanf("%i", &x);
    while (x > max || x < min){
        printf("Error al ingresar el dato.\n");
        printf("Inserte un numero del %i al %i: ", min, max);
        scanf("%i", &x);
    }
    return x;
}
void menuPrincipal(int op){
    int n;
    printf("\n\n");
    switch (op){
        case 1:
            n = datoPositivo(0);
            mostrarResultado(factorial(n));
            break;
        case 2:
            mostrarResultado(combinatoria());
            break;
        case 3:
            funcionFibonacci();
            break;
        case 4:
            ejercicioSiete();
            break;
        case 5:
            productoPorSuma ();
            break;
        case 6:
            cocienteEntero();
            break;
        case 7:
            sumaNaturales();
            break;
        case 8:
            sumaPares();
            break;
        case 9:
            paresMenoresQue();
            break;
        case 10: 
            detectarPrimo();
            break;
        case 11:
            factorizarNumero();
            break;
    }
}
int reset() {
    int rta;
    printf("\nIngrese 1 para seguir, 0 para finalizar: ");
    scanf("%i",&rta);
    while (rta > 1 || rta < 0) {
        printf("Error al ingresar respuesta.\n");
        printf("Ingrese 1 para seguir, 0 para finalizar: ");
        scanf("%i",&rta);
    }
    printf("-----------------------------------------------------------------------------");
    return rta;
}
