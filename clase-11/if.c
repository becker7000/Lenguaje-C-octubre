#include<stdio.h>

int main(){

    int entero;
    printf("\n\t Escribe un n%cmero: ",163);
    scanf("%d",&entero);

    // Si la expresión relacional (entero>0) es verdadera
    // se va a ejecutrar la sentencia, pero si es falsa no se ejecuta nada....
    if(entero>0){
        printf("\n\t El valor es positivo..."); // Sentencia
    }

    if(entero<0){
        printf("\n\t El valor es negativo...");
    }

    if(entero==0){
        printf("\n\t El valor es exactamente cero...");
    }

    printf("\n\n");
    return 0;
}

/*
    Primero guardas: ctrl + s
    Segundo compilas: gcc -o nombre nombre.c   o   con la extensión compile run: ctrl+6
    Tercero ejecutas: .\"nombre"
*/