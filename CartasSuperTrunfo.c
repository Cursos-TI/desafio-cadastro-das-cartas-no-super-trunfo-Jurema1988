#include <stdio.h>

// Desafio Super Trunfo
// Criar um programa que imprima os dados de duas cartas do jogo Super Trunfo.

int main() {
    //dados da primeira carta
    char estado1 = 'A';
    const char* codigodacarta1 = "A01";
    const char* nomedacidade1 = "Rio_Branco";
    int populacao1 = 880631;
    float area1 = 164173.525;
    float PIB1 = 23.6;
    int numerodepontosturisticos1 = 9;

    //calcular densidade populacional
    float densidadepopulaciona1 = (float) populacao1 / area1;

    //calcular pib per capita
    float pibpercapita1 = (float) (PIB1 * 1e9) / populacao1; //  valor do PIB em reais

    //calcular Super Poder
    float SuperPoder1 = (populacao1 + area1 + PIB1 + pibpercapita1 + (1/densidadepopulaciona1));
    
    //dados da segunda carta
    char estado2 = 'B';
    const char* codigodacarta2 = "B01";
    const char* nomedacidade2 = "Salvador";
    int populacao2 = 14141626;
    float area2 = 564760.429;
    float PIB2 = 115.9;
    int numerodepontosturisticos2 = 23;

    //calcular densidade populacional
    float densidadepopulaciona2 = (float) populacao2 / area2;

    //calcular pib per capita
    float pibpercapita2 = (float) (PIB2 * 1e9) / populacao2; //  valor do PIB em reais
    
    //calcular Super Poder
    float SuperPoder2 = (populacao2 + area2 + PIB2 + pibpercapita2 + (1/densidadepopulaciona2));
    
    //imprimir dados Carta 1
    printf("Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigodacarta1);
    printf("Nome da Cidade: %s \n", nomedacidade1);
    printf("População: %d \n", populacao1);
    printf("Àrea: %.2f em KM²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Número de pontos Turísticos: %d \n\n", numerodepontosturisticos1);

   
    //imprimir dados Carta 2
    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigodacarta2);
    printf("Nome da Cidade: %s \n", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Àrea: %.2f em KM²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Número de pontos Turísticos: %d \n\n", numerodepontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulaciona1);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadepopulaciona2);
    printf("PIB per Capita: %.2f reais\n\n", pibpercapita2);

    //Comparação de Cartas
    int ResultadoPopulacao = populacao1 > populacao2;
    int ResultadoArea = area1 > area2;
    int ResultadoPIB = PIB1 > PIB2;
    int ResultadoPontosTuristicos = numerodepontosturisticos1 > numerodepontosturisticos2;
    int ResultadoDensidadePop = densidadepopulaciona1 < densidadepopulaciona2;
    int ResultadoPibpercapita = pibpercapita1 > pibpercapita2;
    int ResultadoSuperPoder = SuperPoder1 > SuperPoder2;

    //Imprimir resultados das comparações
    printf("Comparação de Cartas:\n");
    printf("População: Carta %s venceu (%d)\n", codigodacarta1, ResultadoPopulacao);
    printf("Àrea: Carta %s venceu (%d)\n", codigodacarta1, ResultadoArea);
    printf("PIB: Carta %s venceu (%d)\n", codigodacarta1, ResultadoPIB);
    printf("Pontos Turísticos: Carta %s venceu (%d)\n", codigodacarta1, ResultadoPontosTuristicos);
    printf("Densidade Populacional: Carta %s venceu (%d)\n", codigodacarta1, ResultadoDensidadePop);
    printf("PIB per Capita: Carta %s venceu (%d)\n", codigodacarta1, ResultadoPibpercapita);
    printf("Super Poder: Carta %s venceu (%d)\n\n", codigodacarta1, ResultadoSuperPoder);

     //Imprimir resultados das comparações utilizando estruturas de decisão
    printf("Comparação de Cartas (Atributo: População):\n");
    printf("%s - %s (%c): %d\n", codigodacarta1, nomedacidade1, estado1, populacao1);
    printf("%s - %s (%c): %d\n", codigodacarta2, nomedacidade2, estado2, populacao2);

    if (populacao1 > populacao2) {   
        printf("Resultado: %s (%s) venceu! \n\n", codigodacarta1, nomedacidade1);
    } else {
        printf("Resultado: %s (%s) venceu! \n\n", codigodacarta2, nomedacidade2);
    }
    
    printf("Comparação de Cartas (Atributo: Área):\n");
    printf("%s - %s (%c): %.2f KM²\n", codigodacarta1, nomedacidade1, estado1, area1);
    printf("%s - %s (%c): %.2f KM²\n", codigodacarta2, nomedacidade2, estado2, area2);

    if (area1 > area2) {
        printf("Resultado: %s (%s) venceu! \n\n", codigodacarta1, nomedacidade1);
    } else {
        printf("Resultado: %s (%s) venceu! \n\n", codigodacarta2, nomedacidade2);
    }
    
    printf("Comparação de Cartas (Atributo: PIB):\n");
    printf("%s - %s (%c): R$ %.2f\n", codigodacarta1, nomedacidade1, estado1, PIB1);
    printf("%s - %s (%c): R$ %.2f\n", codigodacarta2, nomedacidade2, estado2, PIB2);

    if (PIB1 > PIB2) {
        printf("Resultado: %s (%s) venceu! \n\n", codigodacarta1, nomedacidade1);
    } else {
        printf("Resultado: %s (%s) venceu! \n\n", codigodacarta2, nomedacidade2);
    }

    printf("Comparação de Cartas (Atributo: Densidade Populacional):\n");
    printf("%s - %s (%c): %.2f hab/km²\n", codigodacarta1, nomedacidade1, estado1, densidadepopulaciona1);
    printf("%s - %s (%c): %.2f hab/km²\n", codigodacarta2, nomedacidade2, estado2, densidadepopulaciona2);

    if (densidadepopulaciona1 < densidadepopulaciona2) {
        printf("Resultado: %s (%s) venceu! \n\n", codigodacarta1, nomedacidade1);
    } else {
        printf("Resultado: %s (%s) venceu! \n\n", codigodacarta2, nomedacidade2);
    }

    printf("Comparação de Cartas (Atributo: PIB per Capita):\n");
    printf("%s - %s (%c): R$ %.2f\n", codigodacarta1, nomedacidade1, estado1, pibpercapita1);
    printf("%s - %s (%c): R$ %.2f\n", codigodacarta2, nomedacidade2, estado2, pibpercapita2);

    if (pibpercapita1 > pibpercapita2) {
        printf("Resultado: %s (%s) venceu! \n\n", codigodacarta1, nomedacidade1);
    } else {
        printf("Resultado: %s (%s) venceu! \n\n", codigodacarta2, nomedacidade2);
    }
    return 0;
}
