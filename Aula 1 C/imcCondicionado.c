#include<stdio.h>
int main()
{
    float peso, alt, imc;

    printf("Digite peso: ");
    scanf("%f", &peso);

    printf("Digite Altura em metros: ");
    scanf("%f", &alt);

    imc= peso/(alt*alt);


    if (imc > 40) {
            printf("Obesidade III (Morbida)\n");
        }
        else if (imc >= 35){
            printf("Obesidade grau II (severa)\n");
        }
        else if (imc >= 30){
            printf("Obesidade grau I\n");
        }
        else if (imc >= 25) {
            printf("Levemente acima do peso\n");
        }
        else if (imc > 18.5) {
            printf("Peso ideal (Parabens)\n");
        }
        else{
            printf("Abaixo do peso\n");
        }


}
