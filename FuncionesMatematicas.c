#include <stdio.h>
#include <stdlib.h>
#include "Utilidades.h"

double factorial(int n){
    double total = 1;
    int i = 1;
    for(i; i <= n; i++){
        total *= i;
    }
    return total;
}
double combinatoria(){
    double total;
    int m = datoPositivo(0);
    int n = validarEntre(0,m);
    int mn = m-n;
    m = factorial(m);
    n = factorial(n);
    mn = factorial(mn);
    total = m/ (n*mn);
    return total;
}
void fibonacci(double* a, double* b, double* c){
    *a = *b; //Esto es des referenciar la variable. Recibe la dir de memoria, *a busca que valor tiene esa direccion y la modifica.
    *b = *c;
    *c = *a + *b;
    printf("%.0f\t", *c);
}
int funcionFibonacci(){
    int numero;
    int i = 0;
    double inicial = 0;
    double inicial2 = 1;
    double generador = 0;
    numero = datoPositivo(1);
    for (i; i < numero; i++){
        fibonacci(&inicial, &inicial2, &generador);
    }
    return 0;
}
void ejercicioSiete() {
    int nro = datoPositivo(0);
    int i = 1;
    int total = 0;
    printf("Divisores de %i: ", nro);
    for (i; i < nro; i++) {
        if (nro % i == 0) {
            printf("%i ", i);
            total += i;
        }
    }
    printf("\nSuma de divisores: %i", total);
    if (nro >= total){
        if (nro == total) {
            printf("\nNro perfecto.");
        }else {
            printf("\nNro deficiente.");
        }

    } else {
        printf("\nNro abundante.");
    }
}
void productoPorSuma () {
    int numero = datoPositivo(0);
    int multiplo = datoPositivo(0);
    double total = 0;
    int i = 0;

    for ( i = 0; i < multiplo; i++)
    {
        printf("%i", numero);
        if (i != multiplo)
        {
            printf(" + ");
        }
        total += numero;
    }
    printf(" = %.0f", total);
}
void cocienteEntero() {
    int i = 0, divisor, dividendo;
    divisor = datoPositivo(0);
    dividendo = datoPositivo(1);
    printf("%i dividido %i ", divisor,dividendo);
    while (divisor > 0)
    {
        if (divisor - dividendo >= 0)
        {
            divisor -= dividendo;
            i++;
        } else
        {
            break;
        }

    }
    printf("es %i con resto %i", i, divisor);
}
void sumaNaturales(){
    int numero = datoPositivo(1);
    double suma = 0;
    for (int i = 0; i < numero; i++)
    {
        suma += i;
    }
    printf("El resultado es %.0f", suma);
}
void sumaPares(){
    int numero = datoPositivo(1);
    double suma = 0;
    int i = 0, j = 1;
    while (i <= numero){
        if (j % 2 == 0){
            suma += j;
            printf("%i   ", j);
            i++;
        }
        j++;
    }
    printf("El resultado es %.0f", suma);
}
void paresMenoresQue() {
    int nro, i =0;
    double suma = 0;
    printf("Se sumaran solo los numeros pares anteriores al nro que seleccione.\n");
    nro = datoPositivo(1);
    for (i; i <= nro; i++) {
        if (i % 2 == 0) {
            suma += i;
            printf("%i   ", i);
        }
    }
    printf("El resultado es %.0f", suma);
}
void detectarPrimo() {
    int nro = datoPositivo(1);
    int noEsPrimo = 0;
    int i = 1;
    for (i; i < nro; i++) {
        if (nro % i == 0 && i != 1) {
            noEsPrimo = 1;
            break;
        }
    }
    if (noEsPrimo == 0){
        printf("El nro %i es primo.\n", nro);
    } else {
        printf("El nro %i no es primo ya que %i es un divisor.", nro, i);
    }
}
void factorizarNumero() {
    int numero = datoPositivo(0);
    int finalizar = 1, i;

    while(finalizar == 1) {
        printf("%d\t|",numero);
        i = 2;
        for(i;i<=numero;i++) {
            if (numero % i == 0) {
                printf("\t%d\n", i);
                numero = numero/i;
                break;
            }
        }
        
        if(numero == 1){
            printf("1\t|\t/");
            break;
        }
    }
}

