#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis com nomes descritivos
    int populacaoUm, populacaoDois, pTuristicosUm, pTuristicosDois, verify;
    char estadoUm, estadoDois, answer;
    float areaUm, areaDois, pibUm, pibDois, densidadeUm, densidadeDois, pibPerCapitaUm, pibPerCapitaDois;
    char cidadeUm[30], cidadeDois[30], attr[30];
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

    // Cálculos
    densidadeUm = (float)populacaoUm / areaUm;
    densidadeDois = (float)populacaoDois / areaDois;

    pibPerCapitaUm = (pibUm * 1000000000.0f) / (float)populacaoUm;
    pibPerCapitaDois = (pibDois * 1000000000.0f) / (float)populacaoDois;

    poderUm = areaUm + populacaoUm + (pibUm * 1000000000.0f) + pTuristicosUm + pibPerCapitaUm - densidadeUm;
    poderDois = areaDois + populacaoDois + (pibDois * 1000000000.0f) + pTuristicosDois + pibPerCapitaDois - densidadeDois;

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

    // Escolha de Atributo para o duelo
    printf("\nQual atributo você quer usar? \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - Densidade \n");
    printf("4 - PIB \n");
    printf("5 - PIB per capita \n");
    printf("Digite o número que você deseja: ");
    scanf("%d", &verify);

    // Verificação e demonstração de qual carta ganha no duelo.
    switch (verify)
    {
    case 1:
        strcpy(attr, "População");
        if (populacaoUm > populacaoDois)
            answer = 'A';
        else if (populacaoUm < populacaoDois)
            answer = 'B';
        else
            answer = 'C';
        break;

    case 2:
        strcpy(attr, "Área");
        if (areaUm > areaDois)
            answer = 'A';
        else if (areaUm < areaDois)
            answer = 'B';
        else
            answer = 'C';
        break;

    case 3:
        strcpy(attr, "Densidade");
        // Aqui MENOR vence
        if (densidadeUm < densidadeDois)
            answer = 'A';
        else if (densidadeUm > densidadeDois)
            answer = 'B';
        else
            answer = 'C';
        break;

    case 4:
        strcpy(attr, "PIB");
        if (pibUm > pibDois)
            answer = 'A';
        else if (pibUm < pibDois)
            answer = 'B';
        else
            answer = 'C';
        break;

    case 5:
        strcpy(attr, "PIB per capita");
        if (pibPerCapitaUm > pibPerCapitaDois)
            answer = 'A';
        else if (pibPerCapitaUm < pibPerCapitaDois)
            answer = 'B';
        else
            answer = 'C';
        break;

    default:
        printf("Escolha uma opção válida.\n");
        return 0; // encerra antes de usar 'answer' sem valor
    }

    printf("\nO duelo entre Carta 1 e Carta 2 irá começar.\n");
    printf("O atributo usado foi: %s\n", attr);
    printf("Os valores dos atributos são:\n");

    if (verify == 1)
        printf("Carta 1: %d e Carta 2: %d\n", populacaoUm, populacaoDois);
    else if (verify == 2)
        printf("Carta 1: %.2f e Carta 2: %.2f\n", areaUm, areaDois);
    else if (verify == 3)
        printf("Carta 1: %.2f e Carta 2: %.2f\n", densidadeUm, densidadeDois);
    else if (verify == 4)
        printf("Carta 1: %.2f e Carta 2: %.2f\n", pibUm, pibDois);
    else if (verify == 5)
        printf("Carta 1: %.2f e Carta 2: %.2f\n", pibPerCapitaUm, pibPerCapitaDois);

    if (answer == 'A')
        printf("A carta vencedora foi a Carta 1.\n");
    else if (answer == 'B')
        printf("A carta vencedora foi a Carta 2.\n");
    else
        printf("O resultado deu EMPATE.\n");

    return 0;
}
