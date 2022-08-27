#include<stdio.h>

int main()
{
    float brl, valorMoeda;
    char op;


     printf ("Valor em real que deseja converter: ");
        scanf ("%f", &brl);

        printf ("Digite D para converter para Dolar\n");
        printf ("Digite E para converter para Euros\n");
        printf ("Digite L para converter para Libras\n");
        printf ("Digite P para converter para Pesos\n");
            scanf("%c, %c, %c, %c", &op);

            scanf("%f", valorMoeda);
            scanf ("%c", &op);
        switch(op){

        case 'd':
            printf("Qual o valor do Dolar: ");
            scanf ("%f", &valorMoeda);
            printf("Valor convertido = %f", brl/valorMoeda);
            break;

        case 'e':
            printf("Qual o valor do Euro: ");
            scanf ("%f", &valorMoeda);
            printf("Valor convertido = %f", brl/valorMoeda);
            break;

        case 'l':
            printf("Qual o valor da Libra: ");
            scanf ("%f", &valorMoeda);
            printf("Valor convertido = %f", brl/valorMoeda);
            break;

        case 'p':
            printf("Qual o valor do Peso: ");
            scanf ("%f", &valorMoeda);
            printf("Valor convertido = %f", brl/valorMoeda);
            break;

        }



}
