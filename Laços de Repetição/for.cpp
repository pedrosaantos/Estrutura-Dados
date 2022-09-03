#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, NULL);
	
	float n1, n2, media, mediaGeral=0;
	int x;
	
	for (x=1; x<=6, x++){
		
		printf ("Aluno %i", x);
    	
    	printf("\nEntre com a nota 1: ");
    	scanf ("%f", &n1);
    	printf("\nEntre com a nota 2: ");
    	scanf ("%f", &n2);
    	
    	media = (n1 + n2) / 2;
    	
    	if(media>=6){
    		printf("Aprovado!");
		}
		
			else{
				printf("Reprovado.");
			}
		
		printf("\nSua media foi: %.2f ", media);
		
		mediaGeral = mediaGeral + media;
		x++;
		
		printf ("\nMedia geral da sala: %.2f", mediaGeral/6);
	}
}
