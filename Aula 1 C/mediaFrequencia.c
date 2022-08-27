#include<stdio.h>
 int main() {
    float media, freq;
    char op;

    while(1) {
        printf("Digite a media do aluno: ");
        scanf("%f", &media);
        printf("Digite a frequencia: ");
        scanf("%f", &freq);

        if (media >= 6 && freq >= 75) {
            printf("Aprovado!\n");
        }
        else if (media >= 6 && freq < 75){
            printf("Reprovado!!!!!!!!!!!\n");
        }
        else if (media < 6 && freq >= 75){
            printf("Reprovado!!!!!!!!!!!\n");
        }
        else if (media < 6 && freq < 75) {
            printf("Reprovado!!!!!!!!!!!\n");
        }

    }

 }
