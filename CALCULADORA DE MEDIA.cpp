#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	
	float nota1, nota2, media;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe a primeira nota (utilize '.' no lugar de ',' para decimais): ");
	scanf("%f",&nota1);
	
	printf("Informe a segunda nota (utilize '.' no lugar de ',' para decimais): ");
	scanf("%f",&nota2);
	
	if(nota1 > 10 || nota2 > 10){
		printf("Nota inv�lida!");
		return 0;
	}else{
		media = (nota1 + nota2)/2;
	
	printf("\n");
	printf("A media �: %.2f", media);
	printf("\n");
	
	
	if(media >= 7){
		printf("Aluno APROVADO!");
	}else if (media >= 4){
		printf("Aluno apto para RECUPERA��O!");
	}else{
		printf("Aluno REPROVADO!");
	}
}
	
	return 0;
}
