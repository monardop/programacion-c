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
void fibonacci(int* a, int* b, int* c){
    *a = *b;
    *b = *c;
    *c = *a + *b;
    printf("%i\t", *c);
}
int funcionFibonacci(){
    int numero;
    int i = 0;
    int inicial = 0;
    int inicial2 = 1;
    int generador = 0;
    numero = datoPositivo(1);
    for (i; i < numero; i++){
        fibonacci(&inicial, &inicial2, &generador);
    }
    return 0;
}






