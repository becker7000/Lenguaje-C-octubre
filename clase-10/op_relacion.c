#include<stdio.h>

int main(){

    int x=8,y=11;
    int resultado;

    printf("\n\t x = %d , y = %d",x,y);

    resultado=(x==y);
    printf("\n\t El resultado de x==y es: %d",resultado);

    resultado=(x!=y);
    printf("\n\t El resultado de x!=y es: %d",resultado);

    resultado=(x>y);
    printf("\n\t El resultado de x>y es: %d",resultado);

    resultado=(x<y);
    printf("\n\t El resultado de x<y es: %d",resultado);

    printf("\n\n");
    return 0;
}