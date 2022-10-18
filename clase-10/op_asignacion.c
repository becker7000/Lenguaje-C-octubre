#include<stdio.h>

int main(){ // únicamente se ejecuta lo que está aquí dentro

    // Nota: las variables que almacenan sumas acumuladas
    // deben incializarse en 0.
    int ahorro=0;

    ahorro+=100; // ahorro=ahorro+100
    ahorro+=200; 
    ahorro+=120;
    ahorro+=150;
    ahorro*=2; // Duplicamos el monto que acumulamos

    printf("\n\t El ahorro final es: $%d",ahorro);

    printf("\n\n");
    return 0;
}
