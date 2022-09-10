#include<stdio.h>
#include<locale.h>

float calculaIMC(float peso, float altura){

    float IMC;
    IMC = peso / (altura*altura);
    return (IMC);
}

void exibeIMC(float IMC){
	if (IMC <= 18.5){
		printf("Você está abaixo do peso\n");
	}
	else if (IMC>=18.6 && IMC<24.9){
		printf("Peso Ideal\n")
	}
	else if (IMC>=25 && IMC<29.9){
		printf("Sobrepeso\n")
	}
	else if (IMC>=30 && IMC<34.9){
		printf("Obesidade I\n")
	}
	else if (IMC>=35 && IMC<39.9){
		printf("Obesidade II\n")
	}
	else{
		printf("Obesidade III\n")
	}

}

int main(){
    float peso, altura, IMC;
    printf("\nEntre com o peso: ");
    scanf("%f", &peso);

    printf("\nEntre com a altura: ");
    scanf("%f", &altura);

    IMC = calculaIMC(peso, altura);
    
    exibeIMC(IMC);
}
