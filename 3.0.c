#include <stdio.h>

int main(int argc, char *argv[]) {
	//Declaracion de variables
	float peso;
	float altura;
	float imc;
	int P=0;
	int A=0;
	
	//Ingreso de peso y altura 
	printf("Ingrese su peso (En kilos): ");
	scanf("%f", &peso);
	
	if(peso<0){
		do{
		printf("Error, peso invalido ingrese nuevamente el peso:");
		scanf("%f", &peso);
		if(peso>=0){
			P=P+1;
		}
		}while(P==0);
	}else if(peso>=0 && P==0){
		P=P+1;
	}
	if(P==1){
	printf("\nIngrese su altura (centimetros): ");
	scanf("%f", &altura);
	if(altura<0){
		do{
		printf("Error, altura invalida ingrese nuevamente la altura:");
		scanf("%f", &altura);
		if(altura>=0){
			A=A+1;
		}
	}while(A==0);
	}else if(altura>0 && A==0){
		A=A+1;
	}
	}
	
	//Calculo y muestra de IMC
	if(P==1 && A==1){
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
	}
	return 0;
}

