#include <stdio.h>
#include <string.h>

int main() {

	int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
	char estado1[2], cidade1[20], codigo_carta1[3], estado2[2], cidade2[20], codigo_carta2[3];
	float area1, pib1, densidade_populacional1, pib_per_capita1, area2, pib2, densidade_populacional2, pib_per_capita2;
	
	//Carta 01:
	
	printf("Vamos jogar trunfo! Preencha os dados da primeira carta.");
	
	printf("\n\n Insira a letra que vai representar o estado, de 'A' a 'H': ");
	scanf("%1s", estado1);
	
	printf("\n Insira o código da sua carta, de 01 a 04: ");
	scanf("%2s", codigo_carta1);
	
	printf("\n Insira o nome da sua cidade: ");
	scanf("%s", cidade1);
	
	printf("\n Insira o número de habitantes da sua cidade: ");
	scanf("%d", &populacao1);
	
	printf(" \n Insira a área da cidade, em quilometros quadrados: ");
	scanf("%f", &area1);
	
	printf("\n Insira o PIB da sua cidade: ");
	scanf("%f", &pib1);
	
	printf("\n Insira a quantidade de pontos turísticos da cidade: ");
	scanf("%d", &pontos_turisticos1);

    //Calculando densidade populacional da Carta 01:
    densidade_populacional1 = populacao1 / area1;

    //Calculando o PIB Per Capita da Carta 01:
    pib_per_capita1 = pib1 / populacao1;
	
	//Carta 02:
	
	printf("\n\nObrigada pelas informações! Agora vamos preencher os dados da segunda carta.");
		
	printf("\n\n Insira a letra que vai representar o outro estado, de 'A' a 'H': ");
	scanf("%1s", estado2);
	
	printf("\n Insira o código da sua carta, de 01 a 04: ");
	scanf("%2s", codigo_carta2);
	
	printf("\n Insira o nome da sua cidade: ");
	scanf("%s", cidade2);
	
	printf("\n Insira o número de habitantes da sua cidade: ");
	scanf("%d", &populacao2);
	
	printf("\n Insira a área da cidade, em quilometros quadrados: ");
	scanf("%f", &area2);
	
	printf("\n Insira o PIB da sua cidade: ");
	scanf("%f", &pib2);
	
	printf("\n Insira a quantidade de pontos turísticos da cidade: ");
	scanf("%d", &pontos_turisticos2);

    //Calculando densidade populacional da Carta 02:
    densidade_populacional2 = populacao2 / area2;

    //Calculando o PIB Per Capita da Carta 02:
    pib_per_capita2 = pib2 / populacao2;
	
	//Mostrando os resultados.
	
	printf("\n\nObrigada mais uma vez, agora vamos imprimir suas escolhas:");
	
	printf("\n\nCARTA 01");
	printf("\nEstado: %s", estado1);
	printf("\nCódigo: %s%s", estado1, codigo_carta1);
	printf("\nNome da cidade: %s", cidade1);
	printf("\nPopulação: %d", populacao1);
	printf("\nÁrea: %.2f km²", area1);
	printf("\nPIB: %.2f", pib1);
	printf("\nQuantidade de pontos turísticos: %d", pontos_turisticos1);
    printf("\nDensidade populacional: %.2f habitantes por km²", densidade_populacional1);
    printf("\nPIB Per Capita: %.2f reais" ,pib_per_capita1);

	printf("\n\nCARTA 02");
	printf("\nEstado: %s", estado2);
	printf("\nCódigo: %s%s", estado2, codigo_carta2);
	printf("\nNome da cidade: %s", cidade2);
	printf("\nPopulação: %d", populacao2);
	printf("\nÁrea: %.2f km²", area2);
	printf("\nPIB: %.2f", pib2);
	printf("\nQuantidade de pontos turísticos: %d", pontos_turisticos2);
    printf("\nDensidade populacional: %.2f habitantes por km²", densidade_populacional2);
    printf("\nPIB Per Capita: %.2f reais" ,pib_per_capita2);
	
	return 0;
}
