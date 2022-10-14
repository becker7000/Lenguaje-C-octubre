#include<stdio.h>

int main(){
		
	float masa, estatura, imc;
	
	printf("\n\t Dame tu masa(kg): ");
	scanf("%f",&masa);
	
	printf("\n\t Dame tu estatura(m): ");
	scanf("%f",&estatura);
	
	//Cálculos:
	imc=masa/(estatura*estatura);
	
	printf("\n\t Tu indice de masa corporal es: %.2f",imc);
	
	printf("\n\n");
	return 0;
}
