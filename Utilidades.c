#include "FuncionesMatematicas.h"
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
    printf("El resultado obtenido es %lf.\n", x);
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
    switch (n){
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
    }
}
