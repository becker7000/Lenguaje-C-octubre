#include<stdio.h>

int main(){

    char letra;

    //Instrucción al usuario:
    printf("\n\t Escribe una letra en minuscula: ");
    scanf("%c",&letra);

    // Imprimiendo la letra a en mayúscula:
    printf("\n\t La letra %c en mayuscula es: %c",letra,(letra-32));

    printf("\n\n");
    return 0;
}