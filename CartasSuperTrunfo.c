#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Declaração das variáveis com nomes descritivos
    int populacaoUm, populacaoDois, pTuristicosUm, pTuristicosDois;
    int opcao1, opcao2;
    char estadoUm, estadoDois;
    float areaUm, areaDois, pibUm, pibDois;
    float densidadeUm, densidadeDois, pibPerCapitaUm, pibPerCapitaDois;
    char cidadeUm[30], cidadeDois[30];
    char nomeAttr1[30], nomeAttr2[30];

    // Valores numéricos associados aos atributos escolhidos
    float valorAttr1_C1, valorAttr1_C2;
    float valorAttr2_C1, valorAttr2_C2;
    float somaC1, somaC2;

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

    // Cálculos derivados
    densidadeUm      = (float)populacaoUm  / areaUm;
    densidadeDois    = (float)populacaoDois / areaDois;
    pibPerCapitaUm   = (pibUm  * 1000000000.0f) / (float)populacaoUm;
    pibPerCapitaDois = (pibDois * 1000000000.0f) / (float)populacaoDois;

    // Exibição das cartas
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

    // ==========================
    //    ESCOLHA DOS ATRIBUTOS
    // ==========================

    // Primeiro atributo
    printf("\nEscolha o PRIMEIRO atributo para o duelo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Densidade Demográfica\n");
    printf("4 - PIB\n");
    printf("5 - PIB per Capita\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao1);

    // Validação simples (poderia ter loop, mas mantemos básico)
    if (opcao1 < 1 || opcao1 > 5)
    {
        printf("Opção inválida. Encerrando o programa.\n");
        return 0;
    }

    // Segundo atributo (menu dinâmico: não mostra o já escolhido)
    printf("\nEscolha o SEGUNDO atributo para o duelo (diferente do primeiro):\n");
    if (opcao1 != 1) printf("1 - População\n");
    if (opcao1 != 2) printf("2 - Área\n");
    if (opcao1 != 3) printf("3 - Densidade Demográfica\n");
    if (opcao1 != 4) printf("4 - PIB\n");
    if (opcao1 != 5) printf("5 - PIB per Capita\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &opcao2);

    if (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1)
    {
        printf("Opção inválida (iguais ou fora do intervalo). Encerrando o programa.\n");
        return 0;
    }

    // =====================================
    //   MAPEANDO O PRIMEIRO ATRIBUTO
    // =====================================
    switch (opcao1)
    {
    case 1:
        strcpy(nomeAttr1, "População");
        valorAttr1_C1 = (float)populacaoUm;
        valorAttr1_C2 = (float)populacaoDois;
        break;
    case 2:
        strcpy(nomeAttr1, "Área");
        valorAttr1_C1 = areaUm;
        valorAttr1_C2 = areaDois;
        break;
    case 3:
        strcpy(nomeAttr1, "Densidade Demográfica");
        valorAttr1_C1 = densidadeUm;
        valorAttr1_C2 = densidadeDois;
        break;
    case 4:
        strcpy(nomeAttr1, "PIB");
        valorAttr1_C1 = pibUm;
        valorAttr1_C2 = pibDois;
        break;
    case 5:
        strcpy(nomeAttr1, "PIB per Capita");
        valorAttr1_C1 = pibPerCapitaUm;
        valorAttr1_C2 = pibPerCapitaDois;
        break;
    }

    // =====================================
    //   MAPEANDO O SEGUNDO ATRIBUTO
    // =====================================
    switch (opcao2)
    {
    case 1:
        strcpy(nomeAttr2, "População");
        valorAttr2_C1 = (float)populacaoUm;
        valorAttr2_C2 = (float)populacaoDois;
        break;
    case 2:
        strcpy(nomeAttr2, "Área");
        valorAttr2_C1 = areaUm;
        valorAttr2_C2 = areaDois;
        break;
    case 3:
        strcpy(nomeAttr2, "Densidade Demográfica");
        valorAttr2_C1 = densidadeUm;
        valorAttr2_C2 = densidadeDois;
        break;
    case 4:
        strcpy(nomeAttr2, "PIB");
        valorAttr2_C1 = pibUm;
        valorAttr2_C2 = pibDois;
        break;
    case 5:
        strcpy(nomeAttr2, "PIB per Capita");
        valorAttr2_C1 = pibPerCapitaUm;
        valorAttr2_C2 = pibPerCapitaDois;
        break;
    }

    // =====================================
    // COMPARAÇÃO DOS DOIS ATRIBUTOS
    // Regra geral: MAIOR vence
    // Exceção: Densidade -> MENOR vence
    // =====================================

    int vencedorAttr1; // 1 = Carta 1, 2 = Carta 2, 0 = empate
    int vencedorAttr2;

    // Primeiro atributo
    if (opcao1 == 3) // Densidade: menor é melhor
    {
        if (valorAttr1_C1 < valorAttr1_C2)
            vencedorAttr1 = 1;
        else if (valorAttr1_C1 > valorAttr1_C2)
            vencedorAttr1 = 2;
        else
            vencedorAttr1 = 0;
    }
    else // demais atributos: maior é melhor
    {
        if (valorAttr1_C1 > valorAttr1_C2)
            vencedorAttr1 = 1;
        else if (valorAttr1_C1 < valorAttr1_C2)
            vencedorAttr1 = 2;
        else
            vencedorAttr1 = 0;
    }

    // Segundo atributo
    if (opcao2 == 3) // Densidade: menor é melhor
    {
        if (valorAttr2_C1 < valorAttr2_C2)
            vencedorAttr2 = 1;
        else if (valorAttr2_C1 > valorAttr2_C2)
            vencedorAttr2 = 2;
        else
            vencedorAttr2 = 0;
    }
    else // demais atributos: maior é melhor
    {
        if (valorAttr2_C1 > valorAttr2_C2)
            vencedorAttr2 = 1;
        else if (valorAttr2_C1 < valorAttr2_C2)
            vencedorAttr2 = 2;
        else
            vencedorAttr2 = 0;
    }

    // =====================================
    // SOMA DOS ATRIBUTOS
    // =====================================
    somaC1 = valorAttr1_C1 + valorAttr2_C1;
    somaC2 = valorAttr1_C2 + valorAttr2_C2;

    // Operador ternário para decidir o vencedor final
    char vencedorFinal = (somaC1 > somaC2) ? '1' :
                         (somaC1 < somaC2) ? '2' : 'E';

    // =====================================
    // EXIBIÇÃO CLARA DO RESULTADO
    =====================================
    printf("\n===========================================\n");
    printf("          RESULTADO DO DUELO\n");
    printf("===========================================\n\n");

    printf("Países: %s (Carta 1)  x  %s (Carta 2)\n\n", cidadeUm, cidadeDois);

    printf("Atributos usados:\n");
    printf("1) %s\n", nomeAttr1);
    printf("2) %s\n\n", nomeAttr2);

    printf("Valores do primeiro atributo (%s):\n", nomeAttr1);
    printf("  Carta 1 (%s): %.2f\n", cidadeUm, valorAttr1_C1);
    printf("  Carta 2 (%s): %.2f\n\n", cidadeDois, valorAttr1_C2);

    printf("Valores do segundo atributo (%s):\n", nomeAttr2);
    printf("  Carta 1 (%s): %.2f\n", cidadeUm, valorAttr2_C1);
    printf("  Carta 2 (%s): %.2f\n\n", cidadeDois, valorAttr2_C2);

    printf("Soma dos atributos:\n");
    printf("  Carta 1 (%s): %.2f\n", cidadeUm, somaC1);
    printf("  Carta 2 (%s): %.2f\n\n", cidadeDois, somaC2);

    if (vencedorFinal == '1')
        printf("Resultado final: Carta 1 (%s) venceu a rodada!\n", cidadeUm);
    else if (vencedorFinal == '2')
        printf("Resultado final: Carta 2 (%s) venceu a rodada!\n", cidadeDois);
    else
        printf("Resultado final: Empate!\n");

    return 0;
}
