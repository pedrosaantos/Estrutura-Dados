#include<stdio.h>
#include<locale.h>
float calculaMedia(){
    float media[5], mediaGeral=0;
    for(int i=0;i < 5; i++){
        printf("\nEntre com a media: ");
        scanf("%f", &media[i]);
        mediaGeral = mediaGeral + media[i];
    }
    for (int i=0; i<5; i++){
        printf("\nMédia do Aluno: ")
    }
    return(mediaGeral);

}


int main(){
    setlocale(LC_ALL, NULL);
    float mediaGeral=0;
            mediaGeral = calculamedia();
        printf("Media Geral da Sala %.2f", mediaGeral/5);
}
