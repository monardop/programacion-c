#include <stdio.h>
#include <stdlib.h>

int main (){
    int nro;
    double factorial;

    printf("Este programa devuelve el factorial del nro ingresado.\n");
    printf("Por favor, ingrese un nro:  ");
    nro = validacion();
    factorial = factorial(nro);
    printf("El factorial de %d es %lf.\n", nro, factorial);
    system('pause');
    return 0;
}
int validacion(){   
    int x;
    do
    {
        scanf("%d", %x);
    }while(x<=0);
    return x;
}
double factorial(int nro){
    double factorial;
    int i;
    i = 0;
    factorial = 0;
    if(nro == 0)
    {
        factorial = 1;
    }
    else
    {
        for (i; i < nro; i++)
        {
            factorial *= i+1;
        }
    }
    return factorial;
}