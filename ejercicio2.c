//Dado dos enteros m y n calcular el numero combinatorio.
#include <stdio.h>
#include <stdlib.h>

int validacion();
double factorial(int nro);
double combinatoria(int m, int n);

int main(){
    int m,n;
    double rta;
    printf("Ingrese m: ");
    m = validacion();
    do{
        printf("Ingrese n: ");
        n=validacion();
        if(m<n){
            printf("n no puede ser mayor que m\n");
        }
    }while (m<n);
    rta = combinatoria(m,n);
    printf("El resultado es %lf \n", rta);
    system("pause");
    return 0;
}
double combinatoria(int m, int n){
   double rta, mfact, nfact, mnfact;
   mfact = factorial(m);
   nfact = factorial(n);
   mnfact = factorial(m-n);
   rta = mfact / (nfact*mnfact);
   return rta;
}
int validacion(){
    int x;
    do
    {
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

