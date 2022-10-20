#include<stdio.h>

int main(){

    // Este programa pide un número al usuario
    // y verifica si ese número es multiplo de 7
    int entero;

    printf("\n\t Escribe un numero entero: ");
    scanf("%d",&entero);
 
    if(entero%7==0){ // Condición para saber si un número es multiplo de 7 
        printf("\n\t El numero es multiplo de 7...");
    }else{
        printf("\n\t El numero no es multiplo de 7...");
    }

    printf("\n\n");
    return 0;
}