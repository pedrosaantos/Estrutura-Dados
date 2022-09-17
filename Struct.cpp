#include<stdio.h>
#include<locale.h>

struct aluno{
	int ra;
	char nome[30], email[50], tel[15];
	char datanascimento[11];
	
};//struct aluno a;

struct graduacao{
	//Estruturas aninhadas
	struct aluno tecnologo;
	struct aluno bacharelado;
	
};struct graduacao g;

void cadastrarTecnologo(){
	printf("\nEntre com o RA: ");
	scanf("%i", &g.tecnologo.ra);
	
	printf("\nEntre com o nome: ");
	scanf("%s", g.tecnologo.nome);
	
	printf("\nEntre com o E-mail: ");
	scanf("%s", g.tecnologo.email);
	
	printf("\nEntre com o telefone: ");
	scanf("%s", g.tecnologo.tel);
	
	printf("\nEntre com a data de Nascimento: ");
	scanf("%s", g.tecnologo.datanascimento);
}

void cadastrarBacharelado(){
	printf("\nEntre com o RA: ");
	scanf("%i", &g.bacharelado.ra);
	
	printf("\nEntre com o nome: ");
	scanf("%s", g.bacharelado.nome);
	
	printf("\nEntre com o E-mail: ");
	scanf("%s", g.bacharelado.email);
	
	printf("\nEntre com o telefone: ");
	scanf("%s", g.bacharelado.tel);
	
	printf("\nEntre com a data de Nascimento: ");
	scanf("%s", g.bacharelado.datanascimento);
}

void exibeTecnologo(){
	printf("\nRA: %i", g.tecnologo.ra);
	printf("\nNome: %s", g.tecnologo.nome);
	printf("\nE-mail: %s", g.tecnologo.email);
	printf("\nTelefone: %s", g.tecnologo.tel);
	printf("\nData de Nascimento: %s", g.tecnologo.datanascimento);
}

void exibeBacharelado(){
	printf("\nRA: %i", g.bacharelado.ra);
	printf("\nNome: %s", g.bacharelado.nome);
	printf("\nE-mail: %s", g.bacharelado.email);
	printf("\nTelefone: %s", g.bacharelado.tel);
	printf("\nData de Nascimento: %s", g.bacharelado.datanascimento);
}

int main (){
	cadastrar();
	exibe();
}
