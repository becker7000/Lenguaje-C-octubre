#include<stdio.h>

int main(){

    float monto_sin_desc, monto_con_desc; // El descuento será del 15%

    printf("\n\t Escribe el monto para aplicarle descuento (15%c): $",37);
    scanf("%f",&monto_sin_desc);

    monto_con_desc=monto_sin_desc*0.85;
    /*
        El 85% del monto sin descuento equivale al 15% de descuento ya aplicado
        Ejemplo: $100 aplicando 15% de descuento = $85  ($100*0.85)
    */

    printf("\n\t El monto con el 15%c de descuento aplicado es: $%.2f",37,monto_con_desc);

    printf("\n\n");
    return 0;
}