#include<stdio.h>
int main()
{
    float peso, alt, imc;

    printf("Digite peso: ");
    scanf("%f", &peso);

    printf("Digite Altura: ");
    scanf("%f", &alt);

    imc= peso/(alt*alt);

    printf ("O IMC e: %f", imc);


}
