#include <stdio.h>
#include <locale.h>

int main() {
	//Vi durante o desenvolvimento que os acentos não erão reconhecidos e pesquisando achei essa função que configura os caracteres e acentuação para os do portugues
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis com nomes descritivos
    int populacaoUm, populacaoDois, pTuristicosUm, pTuristicosDois;
    char estadoUm, estadoDois;
    float areaUm, areaDois, pibUm, pibDois, densidadeUm, densidadeDois, pibPerCapitaUm, pibPerCapitaDois;
    char cidadeUm[30], cidadeDois[30]; 
    double poderUm, poderDois;

    // Entrada de dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite a letra que representa seu estado (Apenas uma letra!): ");
    scanf(" %c", &estadoUm);

    printf("Qual o nome da cidade? ");
    scanf("%s", cidadeUm);

    printf("Qual o tamanho da população? ");
    scanf("%d", &populacaoUm);

    printf("Qual a área que essa cidade ocupa (em km²)? ");
    scanf("%f", &areaUm);

    printf("Qual o PIB dessa cidade (em bilhões)? ");
    scanf("%f", &pibUm);

    printf("Quantos pontos turísticos tem nessa cidade? ");
    scanf("%d", &pTuristicosUm);

    printf("\nAgora vamos para a carta de número 2!\n\n");

    // Entrada de dados da Carta 2
    printf("=== Cadastro da Carta 2 ===\n");

    printf("Digite a letra que representa seu estado (Apenas uma letra!): ");
    scanf(" %c", &estadoDois);

    printf("Qual o nome da cidade? ");
    scanf("%s", cidadeDois);

    printf("Qual o tamanho da população? ");
    scanf("%d", &populacaoDois);

    printf("Qual a área que essa cidade ocupa (em km²)? ");
    scanf("%f", &areaDois);

    printf("Qual o PIB dessa cidade (em bilhões)? ");
    scanf("%f", &pibDois);

    printf("Quantos pontos turísticos tem nessa cidade? ");
    scanf("%d", &pTuristicosDois);
    
    //calculos de densidade pop. e PIB per capita e poder
    densidadeUm = (float) populacaoUm/areaUm;
    densidadeDois = (float) populacaoDois/areaDois;
    
    pibPerCapitaUm = ((float)pibUm * 1000000000)/(float)populacaoUm;
    pibPerCapitaDois = ((float)pibDois * 1000000000)/(float)populacaoDois;
    
    poderUm = (float) areaUm + (float) populacaoUm + ((float) pibUm * 1000000000) + (float) pTuristicosUm + (float) pibPerCapitaUm - (float) densidadeUm;
    poderDois = (float) areaDois + (float) populacaoDois + ((float) pibDois * 1000000000) + (float) pTuristicosDois + (float) pibPerCapitaDois - (float) densidadeDois;
    
    
    //Verificação de cada variavel para decisão de qual carta é melhor
    
    

    // Exibição dos dados
    printf("\n===========================================\n");
    printf("          CARTAS CADASTRADAS\n");
    printf("===========================================\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estadoUm);
    printf("Código: %c01\n", estadoUm);
    printf("Nome da Cidade: %s\n", cidadeUm);
    printf("População: %d habitantes\n", populacaoUm);
    printf("Área: %.2f km²\n", areaUm);
    printf("PIB: %.2f bilhões\n", pibUm);
    printf("Número de Pontos Turísticos: %d\n", pTuristicosUm);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeUm);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaUm);
    printf("Super Poder: %.2f\n", poderUm);

    printf("-------------------------------------------\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estadoDois);
    printf("Código: %c02\n", estadoDois);
    printf("Nome da Cidade: %s\n", cidadeDois);
    printf("População: %d habitantes\n", populacaoDois);
    printf("Área: %.2f km²\n", areaDois);
    printf("PIB: %.2f bilhões\n", pibDois);
    printf("Número de Pontos Turísticos: %d\n", pTuristicosDois);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeDois);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaDois);
    printf("Super Poder: %.2f\n", poderDois);
    
	//Verificação e demonstração de qual carta ganha em cada atributo.
	printf("-------------------------------------------\n");
	printf("Comparação das Cartas: \n");
	printf("População: %d\n", populacaoUm > populacaoDois);
	printf("Área: %d\n", areaUm > areaDois);
	printf("PIB: %d\n", pibUm > pibDois);
	printf("Pontos Turísticos: %d\n", pTuristicosUm > pTuristicosDois);
	printf("Densidade Populacional: %d\n", densidadeUm > densidadeDois);
	printf("PIB per Capita: %d\n", pibPerCapitaUm > pibPerCapitaDois);
	printf("Super Poder: %d\n", poderUm > poderDois);
	
	
    

    return 0;
}
