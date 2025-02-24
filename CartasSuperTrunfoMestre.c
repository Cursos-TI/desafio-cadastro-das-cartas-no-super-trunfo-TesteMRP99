#include <stdio.h>
	

	int main() {
		char estado1[10], estado2[10]; 	//variavel que para o usuário informar o estado
		char ccarta1[10], ccarta2[10];  //variavel para o usuário informar o código da carta;
		char cidade1[50], cidade2[50];  //variavel para o usuário informar o nome da cidade
		
		unsigned long int pop1, pop2; 	//variavel para o usuário informar o total populacional da cidade.
		float area1, area2;				//variavel para o usuário informar o total da area em km
		float pib1, pib2; 				//variavel para o usuário determinar o pib
		int pt1, pt2; 					//variavel para o usuário determinar a quantidade de pontos turisticos
		float densidadep1, densidadep2; //variavel para calcular a densidade populacional
		float ppc1, ppc2; 				//variavel para calcular o PIB per Capta
		float superPoder1, superPoder2; //variavel para calcular o super poder das das cartas 1 e 2
		unsigned long int resultadoPop;	//variavel para calcular o maior valor de habitantes entre as duas cartas
		
		float resultadoArea;			//variavel para calcular o maior valor da area entre as duas cartas
		float resultadoPib;				//variavel para calcular o maior valor do PIB entre as duas cartas
		int resultadoPt;				//variavel para calcular o maior valor do numero de pontos turisticos entre as duas cartas
		float resultadoDensidade; 		//variavel para calcular o MENOR valor da densidade entre as duas cartas (o menor valor vence)
		float resultadoPpc;				//variavel para calcular o maior valor do PIB per Capta entre as duas cartas
		float resultadoSuperPoder;		//variavel para calcular o maior valor do Super Poder entre as duas cartas
	
		
		printf("			Bem Vindo ao Super Trunfo!\n");
	
					//a partir daqui o usuário entrará com os dados da primeira carta		
		printf("\nInforme o estado da carta 1: \n"); 
		scanf("%s", estado1);
		printf("Informe o código da carta 1: \n");
		scanf("%s", &ccarta1);
		printf("Informe o nome da cidade da carta 1: \n");
		scanf("%s", &cidade1);
		printf("Informe o número de habitantas da carta 1: \n");
		scanf("%lu", &pop1);
		printf("Informe a área em quilômetros quadrados(km²) da carta 1: \n");
		scanf("%f", &area1);
		printf("Informe o PIB da cidade da carta 1: \n");
		scanf("%f", &pib1);
		printf("Infome a quantidade de pontos turísticos que contém na cidade da carta 1: \n");
		scanf("%d", &pt1);
	
	
				//a partir daqui usuário entrará com os dados da segunda carta
		printf("\nInforme o estado da carta 2: \n"); 
		scanf("%s", &estado2);
		printf("Informe o código da carta 2: \n");
		scanf("%s", &ccarta2);
		printf("Informe o nome da cidade da carta 2: \n");
		scanf("%s", &cidade2);
		printf("Informe o número de habitantas da carta 2: \n");
		scanf("%lu", &pop2);
		printf("Informe a área em quilômetros quadrados da carta 2: \n");
		scanf("%f", &area2);
		printf("Informe o PIB da cidade da carta 2: \n");
		scanf("%f", &pib2);	
		printf("Infome a quantidade de pontos turísticos que contém na cidade da carta 2: \n");
		scanf("%d", &pt2);
		
		//calculando densidade populacional da carta 1
		densidadep1 = pop1 / area1;
		
		//calculando densidade populacional da carta 2
		densidadep2 = pop2 / area2;
		
		//calculando PIB per capta da carta 1
		ppc1;
			ppc1 = pib1 / pop1;
		
		//calculando PIB per capta da carta 2
		ppc2; 
			ppc2 = pib2 / pop2;
			
		//calculando o super poder da carta 1
		superPoder1 = (pop1 + area1 + pib1 + pt1+ densidadep1 + ppc1);
		
		//calculando o super poder da carta 2
		superPoder2 = (pop2 + area2 + pib2 + pt2+ densidadep2 + ppc2);
		
		
	
				 //saida com todas as informações digitadas pelo usuário referente a carta 1
		printf("\nEstes são os dados da carta 1\n"); 
		printf("Estado: %s\nCódigo da carta: %s\nNome da Cidade: %s\n", estado1, ccarta1, cidade1);
		printf("Número de Habitantes: %lu\nÁrea: %.2f km²\nPIB:R$ %.2f\nQuantidade de pontos turísticos: %d\n", pop1, area1, pib1, pt1);
		printf("Densidade Populacional: %.2f hab/Km\n", densidadep1);
		printf("PIB per Capta: R$%.2f reais\n", ppc1);
		printf("Super poder da carta 1: %.2f\n", superPoder1);
	
	
				//saida com todas as informações digitadas pelo usuário referente a carta 2
		printf("\nEstes são os dados da carta 2\n");
		printf("Estado: %s\nCódigo da carta: %s\nNome da Cidade: %s\n", estado2, ccarta2, cidade2);
		printf("Número de Habitantes: %lu\nÁrea: %.2f km²\nPIB:R$ %.2f\nQuantidade de pontos turísticos: %d\n", pop2, area2, pib2, pt2);
		printf("Densidade Populacional: %.2f hab/Km\n", densidadep2);
		printf("PIB per Capta: R$%.2f reais\n", ppc2);
		printf("Super poder da carta 2: %.2f\n", superPoder2);
		
		//calculando o resultado comparativo de cada carta
		resultadoPop = pop1 > pop2;
		resultadoArea = area1 > area2;
		resultadoPib = pib1 > pib2;
		resultadoPt = pt1 > pt2;
		resultadoDensidade = densidadep1 < densidadep2; //aqui o menor valor vence
		resultadoPpc = ppc1 > ppc2;
		resultadoSuperPoder = superPoder1 > superPoder2;
		
		//imprimindo os resultados do jogo
		printf("\n			Resultado do Jogo!\n");
		printf("Considere 1 para a primeira carta e 0 para a segunda carta\n");
		printf("Maior Número de habitantes: %lu\n",resultadoPop);
		printf("Maior Área: %.0f\n",resultadoArea);
		printf("Maior PIB: %.0f\n",resultadoPib);
		printf("Maior quantidade de Pontos Turísticos: %d\n",resultadoPt);
		printf("Menor Densidade Populacional: %.0f\n", resultadoDensidade);
		printf("Maior PIB Per Capta: %.0f\n", resultadoPpc);
		printf("Carta com o Maior poder: %.0f\n", resultadoSuperPoder);			
}