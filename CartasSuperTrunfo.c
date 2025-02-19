#include <stdio.h>


int main() {
        char estado1[15], estado2[15]; //variavel que para o usuário informar o estado
		char ccarta1[15], ccarta2[15]; //variavel para o usuário informar o código da carta;
		char cidade1[50], cidade2[50]; //variavel para o usuário informar o nome da cidade
		int pop1, pop2; //variavel para o usuário informar o total populacional da cidade.
		float area1, area2;// variavel para o usuário informar o total da area em km
		float pib1, pib2; //variavel para o usuário determinar o pib
		int pt1, pt2; // variavel para o usuário determinar a quantidade de pontos turisticos
	
		
		printf("			Bem Vindo ao Super Trunfo!\n");
	
		printf("\nInforme o estado da carta 1: \n"); //a partir daqui, usuário entrará com todos referente a carta 1
		scanf("%s", &estado1);
		printf("Informe o código da carta 1: \n");
		scanf("%s", &ccarta1);
		printf("Informe o nome da cidade da carta 1: \n");
		scanf("%s", &cidade1);
		printf("Informe o número de habitantas da carta 1: \n");
		scanf("%d", &pop1);
		printf("Informe a área em quilômetros quadrados da carta 1: \n");
		scanf("%f", &area1);
		printf("Informe o PIB da cidade da carta 1: \n");
		scanf("%f", &pib1);
		printf("Infome a quantidade de pontos turisticos que contem na cidade da carta 1: \n");
		scanf("%d", &pt1);
	
	
		
		printf("\nInforme o estado da carta 2: \n"); //a partir daqui, usuário entrará com todos referente a carta 1
		scanf("%s", &estado2);
		printf("Informe o código da carta 2: \n");
		scanf("%s", &ccarta2);
		printf("Informe o nome da cidade da carta 2: \n");
		scanf("%s", &cidade2);
		printf("Informe o número de habitantas da carta 2: \n");
		scanf("%d", &pop2);
		printf("Informe a área em quilômetros quadrados da carta 2: \n");
		scanf("%f", &area2);
		printf("Informe o PIB da cidade da carta 2: \n");
		scanf("%f", &pib2);
		printf("Infome a quantidade de pontos turisticos que contem na cidade da carta 2: \n");
		scanf("%d", &pt2);
	
	
		printf("\nDados da carta 1\n"); //saida com todas as informações digitadas pelo usuário referente a carta 1
		printf("Estado: %s\nCódigo da carta: %s\nNome da Cidade: %s\nNúmero de Habitantes: %d\n", estado1, ccarta1, cidade1, pop1);
		printf("Area: %.2f km²\nPIB:R$%.2f\nQuantidade de pontos turisticos: %d\n", area1, pib1, pt1);
	
		printf("\nDados da carta 2\n"); ////saida com todas as informações digitadas pelo usuário referente a carta 2
		printf("Estado: %s\nCódigo da carta: %s\nNome da Cidade: %s\nNúmero de Habitantes: %d\n", estado2, ccarta2, cidade2, pop2);
		printf("Area: %.2f km²\nPIB:R$%.2f\nQuantidade de pontos turisticos: %d\n", area2, pib2, pt2);

    return 0; 
}
