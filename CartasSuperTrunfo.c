#include <stdio.h>
#include <locale.h>

int main() {
	//Vi durante o desenvolvimento que os acentos não erão reconhecidos e pesquisando achei essa função que configura os caracteres e acentuação para os do portugues
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis com nomes descritivos
    int populacaoUm, populacaoDois, pTuristicosUm, pTuristicosDois, verify;
    char estadoUm, estadoDois, answer;
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
    
    //Escolha de Atributo para o duelo
    printf("Qual atributo você quer usar? \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - Densidade \n");
    printf("4 - PIB \n");
    printf("5 - PIB per capita \n");
    printf("Digite o número que você deseja: ");
    scanf("%d", &verify);

	//Verificação e demonstração de qual carta ganha no duelo.

    if (verify == 1){
        if(populacaoUm > populacaoDois){
            answer = 'A';
        }else{
            answer = 'B';
        }
    }else if (verify == 2){
       if(areaUm > areaDois){
            answer = 'A';
        }else{
            answer = 'B';
        }
    }else if (verify == 3){
       if(pibUm > pibDois){
            answer = 'A';
        }else{
            answer = 'B';
        }
    }else if (verify == 4){
       if(densidadeUm > densidadeDois){
            answer = 'A';
        }else{
            answer = 'B';
        }
    }else if (verify == 5){
       if(pibPerCapitaUm > pibPerCapitaDois){
            answer = 'A';
        }else{
            answer = 'B';
        }
    }else{
        printf("Escolha uma opção válida \n");
    }

    printf("A carta vencedora foi: %c", answer);
    
    
	
	
	
    

    return 0;
}