#include <stdio.h>
#include <locale.h>

int main()
{
    // Vi durante o desenvolvimento que os acentos não erão reconhecidos e pesquisando achei essa função que configura os caracteres e acentuação para os do portugues
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis com nomes descritivos
    int populacaoUm, populacaoDois, pTuristicosUm, pTuristicosDois, verify;
    char estadoUm, estadoDois, answer;
    float areaUm, areaDois, pibUm, pibDois, densidadeUm, densidadeDois, pibPerCapitaUm, pibPerCapitaDois, valorUm, valorDois;
    char cidadeUm[30], cidadeDois[30], attr[20], variavel[20];
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

    // calculos de densidade pop. e PIB per capita e poder
    densidadeUm = (float)populacaoUm / areaUm;
    densidadeDois = (float)populacaoDois / areaDois;

    pibPerCapitaUm = ((float)pibUm * 1000000000) / (float)populacaoUm;
    pibPerCapitaDois = ((float)pibDois * 1000000000) / (float)populacaoDois;

    poderUm = (float)areaUm + (float)populacaoUm + ((float)pibUm * 1000000000) + (float)pTuristicosUm + (float)pibPerCapitaUm - (float)densidadeUm;
    poderDois = (float)areaDois + (float)populacaoDois + ((float)pibDois * 1000000000) + (float)pTuristicosDois + (float)pibPerCapitaDois - (float)densidadeDois;

    // Verificação de cada variavel para decisão de qual carta é melhor

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
    printf("Qual atributo você quer usar? \n");
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
        attr[10] = 'População';
        if (populacaoUm > populacaoDois)
        {
            answer = 'A';
        }
        else if (populacaoUm < populacaoDois)
        {
            answer = 'B';
        }
        else
        {
            answer = 'C';
        }
        break;
    case 2:
        attr[10] = 'Área';
        if (areaUm > areaDois)
        {
            answer = 'A';
        }
        else if (areaUm < areaDois)
        {
            answer = 'B';
        }
        else
        {
            answer = 'C';
        }
        break;
    case 3:
        attr[10] = 'PIB';
        if (pibUm > pibDois)
        {
            answer = 'A';
        }
        else if (pibUm < pibDois)
        {
            answer = 'B';
        }
        else
        {
            answer = 'C';
        }
        break;
    case 4:
        attr[10] = 'Densidade';
        if (densidadeUm > densidadeDois)
        {
            answer = 'B';
        }
        else if (densidadeUm < densidadeDois)
        {
            answer = 'A';
        }
        else
        {
            answer = 'C';
        }
        break;
    case 5:
        attr[10] = 'PIB per capita';
        if (pibPerCapitaUm > pibPerCapitaDois)
        {
            answer = 'A';
        }
        else if (pibPerCapitaUm < pibPerCapitaDois)
        {
            answer = 'B';
        }
        else
        {
            answer = 'C';
        }
        break;
    default:
        printf("Escolha uma opção válida");
        break;
    }

    printf("O duelo entre %c e %c irá começar. \n");
    printf("O atributo usado foi: %c \n", attr);
    printf("Os valores dos atributos são: \n");
    if (verify == 1)
    {
        printf("Carta 1: %d e Carta 2: %d \n", populacaoUm, populacaoDois);
    }
    else if (verify == 2)
    {
        printf("Carta 1: %.2f e Carta 2: %.2f \n", areaUm, areaDois);
    }
    else if (verify == 3)
    {
        printf("Carta 1: %.2f e Carta 2: %.2f \n", pibUm, pibDois);
    }
    else if (verify == 4)
    {
        printf("Carta 1: %.2f e Carta 2: %.2f \n", densidadeUm, densidadeDois);
    }
    else if (verify == 5)
    {
        printf("Carta 1: %.2f e Carta 2: %.2f \n", pibPerCapitaUm, pibPerCapitaDois);
    }

    if (answer == 'A')
    {
        printf("A carta vencedora foi a Carta 1");
    }
    else if (answer == 'B')
    {
        printf("A carta vencedora foi a Carta 2");
    }
    else if (answer == 'C')
    {
        printf("O resultado deu EMPATE");
    }

    return 0;
}