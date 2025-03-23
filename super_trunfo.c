#include <stdio.h>
#include <string.h>

int main() {

	int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
	char estado1[2], cidade1[20], codigo_carta1[3], estado2[2], cidade2[20], codigo_carta2[3];
	float area1, pib1, area2, pib2;
	
	//Carta 01:
	
	printf("Vamos jogar trunfo! Preencha os dados da primeira carta.");
	
	printf("\n\n Insira a letra que vai representar o estado, de 'A' a 'H': ");
	scanf("%1s", estado1);
	
	printf("\n Insira o código da sua carta, de 01 a 04 (Ex.: 02): ");
	scanf("%2s", codigo_carta1);
	
	printf("\n Insira o nome da sua cidade: ");
	scanf("%s", cidade1);
	
	printf("\n Insira o número de habitantes da sua cidade: ");
	scanf("%d", &populacao1);
	
	printf(" \n Insira a área da cidade, em quilômetros quadrados: ");
	scanf("%f", &area1);
	
	printf("\n Insira o PIB da sua cidade: ");
	scanf("%f", &pib1);
	
	printf("\n Insira a quantidade de pontos turísticos na cidade: ");
	scanf("%d", &pontos_turisticos1);
	
	//Carta 02:
	
	printf("\n\nObrigada pelas informações! Agora vamos preencher os dados da segunda carta.");
		
	printf("\n\n Insira a letra que vai representar o segundo estado, de 'A' a 'H': ");
	scanf("%1s", estado2);
	
	printf("\n Insira o código da sua carta, de 01 a 04 (Ex.: 02): ");
	scanf("%2s", codigo_carta2);
	
	printf("\n Insira o nome da sua cidade: ");
	scanf("%s", cidade2);
	
	printf("\n Insira o número de habitantes da sua cidade: ");
	scanf("%d", &populacao2);
	
	printf("\n Insira a área da cidade, em quilômetros quadrados: ");
	scanf("%f", &area2);
	
	printf("\n Insira o PIB da sua cidade: ");
	scanf("%f", &pib2);
	
	printf("\n Insira a quantidade de pontos turísticos na cidade: ");
	scanf("%d", &pontos_turisticos2);
	
	//Mostrando os resultados.
	
	printf("\n\nObrigada mais uma vez, agora vamos imprimir suas escolhas:");
	
	printf("\n\nCARTA 01");
	printf("\nEstado: %s", estado1);
	printf("\nCodigo: %s%s", estado1, codigo_carta1);
	printf("\nNome da cidade: %s", cidade1);
	printf("\nPopulação: %d", populacao1);
	printf("\nÁrea: %.2f", area1);
	printf("\nPIB: %.2f", pib1);
	printf("\nQuantidade de pontos turísticos: %d", pontos_turisticos1);

	printf("\n\nCARTA 02");
	printf("\nEstado: %s", estado2);
	printf("\nCodigo: %s%s", estado2, codigo_carta2);
	printf("\nNome da cidade: %s", cidade2);
	printf("\nPopulação: %d", populacao2);
	printf("\nÁrea: %.2f", area2);
	printf("\nPIB: %.2f", pib2);
	printf("\nQuantidade de pontos turísticos: %d", pontos_turisticos2);
	
	getchar();
	return 0;
}
