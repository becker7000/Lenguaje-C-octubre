#include<stdio.h>

int main(){

    int edad; // Aquí guardamos la edad de una persona

    // Instrucciones para el usuario:
    printf("\n\t Dame tu edad: ");
    // Guardamos la edad:
    scanf("%d",&edad);

    // %s para cadenas de caracteres 
    // Sintáxis del operador ternario: (condición)? acción 1 : acción 2;
    printf("\n\t Mensaje: %s",(edad>=18)? "Eres mayor de edad" : "Eres menor de edad");

    printf("\n\n");
    return 0;
}