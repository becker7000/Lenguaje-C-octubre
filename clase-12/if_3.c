#include<stdio.h>

int main(){

    // La función system me permite darle darle ordenes directas tipo comandos MS-DOS
    // al computadora en windows...
    system("title Mi programa");
    system("color e0"); // Izquierda:fondo, derecha:letra, tip: color help para saber los colores...

    int opcion;
    printf("\n\t +-----------------------+");
    printf("\n\t | Seleccion la opcion:  |");
    printf("\n\t | 1) Esta soleado       |");
    printf("\n\t | 2) Esta nublado       |"); // Atajo: alt + shift + abajo
    printf("\n\t +-----------------------+"); 
    printf("\n\t Opcion> ");
    scanf("%d",&opcion);

    if(opcion==1){
        printf("\n\t Hoy s%c te toca ba%co!",161,164);
    }else if(opcion==2){
        printf("\n\t Hoy no te toca ba%co!",164);
    }else{
        printf("\n\t Opci%cn no valida!",162);
    }

    printf("\n\t Da [ENTER] para terminar el programa");
    getch(); // Esta función hace una pausa en el programa, getch() puede captar una pulsación en el teclado
    printf("\n\n");
    return 0;
}