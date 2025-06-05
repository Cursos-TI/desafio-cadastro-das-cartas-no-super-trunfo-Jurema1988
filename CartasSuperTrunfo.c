#include <stdio.h>

// Desafio Super Trunfo
// Criar um programa que imprima os dados de duas cartas do jogo Super Trunfo.

int main() {
    //dados da primeira carta
    char estado1 = 'A';
    const char* codigodacarta1 = "A01";
    const char* nomedacidade1 = "Rio_Branco";
    int população1 = 880631;
    float area1 = 164173.525;
    float PIB1 = 23.6;
    int numerodepontosturisticos1 = 9;

    //dados da segunda carta
    char estado2 = 'B';
    const char* codigodacarta2 = "B01";
    const char* nomedacidade2 = "Salvador";
    int população2 = 14141626;
    float area2 = 564760.429;
    float PIB2 = 115.9;
    int numerodepontosturisticos2 = 23;

    //imprimir dados Carta 1
    printf("Carta 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigodacarta1);
    printf("Nome da Cidade: %s \n", nomedacidade1);
    printf("População: %d \n", população1);
    printf("Àrea: %.2f em KM²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Número de pontos Turísticos: %d \n\n", numerodepontosturisticos1);

    //imprimir dados Carta 2
    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigodacarta2);
    printf("Nome da Cidade: %s \n", nomedacidade2);
    printf("População: %d \n", população2);
    printf("Àrea: %.2f em KM²\n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Número de pontos Turísticos: %d \n\n", numerodepontosturisticos2);

    return 0;
}
