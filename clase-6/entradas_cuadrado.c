#include<stdio.h>

int main(){

    //Entradas:
    int x, cuadrado; // Declarando dos variables en la misma línea

    // Instrucciones para el usuario:
    printf("\n\t Escribe un n\xa3mero entero: ");
    scanf("%d",&x); // Error común: no poner el prefijo &

    //Cálculos
    cuadrado=x*x;

    //Salida:
    printf("\n\t El numero %d al cuadrado es: %d",x,cuadrado);

    printf("\n\n");
    return 0;
}