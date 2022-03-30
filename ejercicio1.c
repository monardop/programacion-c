#include <stdio.h>
#include <stdlib.h>

int validacion();
double factorial(int nro);

int main (){
    int nro;
    double fact;

    printf("Este programa devuelve el factorial del nro ingresado.\n");
    nro = validacion();
    fact = factorial(nro);
    printf("El factorial de %d es %lf.\n", nro, fact);
    system("pause");
    return 0;
}
int validacion(){
    int x;
    do
    {
        printf("Por favor, ingrese un nro:  ");
        scanf("%d", &x);
    }while(x<0);
    return x;
}
double factorial(int nro){
    double factorial;
    int i;
    i = 1;
    factorial = 1;
    for (i; i < nro; i++)
    {
        factorial *= (i+1);
    }
    return factorial;
}
