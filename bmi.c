#include <stdio.h>

int main(int argc, char *argv[]) {
	//Declaracion de variables
	float peso;
	float altura;
	float imc;
	
	//Ingreso de peso y altura 
	printf("Ingrese su peso: ");
	scanf("%f", &peso);
	printf("\nIngrese su altura: ");
	scanf("%f", &altura);
	
	//Calculo y muestra de IMC
	imc = peso / (altura*altura);
	printf("\nSu IMC es de %.2f\n", imc);
	
	//Clasificacion de IMC
	if(imc<18.49){
		printf("\nUsted tiene un peso bajo");
	}else if(imc>18.49 && imc<25){
		printf("\nUsted tiene un peso normal");
	}else if(imc>24.99 && imc<30){
		printf("\nUsted tiene sobre peso");
	}else if(imc>29.99 && imc<35){
		printf("\nUsted tiene Obesidad grado I");
	}else if(imc>34.99 && imc<40){
		printf("\nUsted tiene Obesidad grado II");
	}else if(imc>39.99){
		printf("\nUsted tiene Obesidad grado III");
	}
	
	return 0;
}

