#include<stdio.h>

int main(){

    //Entradas:
    // Declarando dos variables de tipo entero:
    int segundos, minutos;

    printf("\n\t Dame los segundos: ");
    scanf("%d",&segundos);

    //Calculos:
    // Suponemos 200 segundos
    minutos=segundos/60; // 200/60 = 3
    segundos=segundos%60; // 200%60 = 20 

    //Salidas:
    printf("\n\t Los segundos introducidos son equivalentes");
    printf("\n\t a %d minutos con %d segundos",minutos,segundos);

    printf("\n\n");
    return 0;
}