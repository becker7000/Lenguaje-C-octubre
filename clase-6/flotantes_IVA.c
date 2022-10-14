#include<stdio.h>

int main(){

    float monto_sin_iva, monto_con_iva;

    printf("\n\t Escribe un monto sin IVA: $");
    scanf("%f",&monto_sin_iva);

    // Obteniendo el monto con iva 116%
    monto_con_iva=monto_sin_iva*1.16; 

    printf("\n\t El monto con IVA es: $%.2f",monto_con_iva);


    printf("\n\t \xb2 \xb2 \xb2 \xb2 \xb2 \xb2 ");
    printf("\n\t \xa4 ");


    printf("\n\n");
    return 0;
}