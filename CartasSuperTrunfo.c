#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição de variáveis
    
    char estado1 [5];
    char cod_carta1 [5];
    int populacao1; 
    float area1;
    float PIB1;
    int Num_pts_turisticos1;
    char nome_1 [30]; 
    
    //Introdução do jogo
    printf("****Desafio Super Trunfo Países****\n");
    printf("**País: Brasil**\n");
    printf("*****Os Estados sao definidos por letras de A a H, e as cidades de numeros de 1 a 4(por exemplo: A01, A02, B01, B02)*****\n");
    
    // Cadastro das Cartas:
    
    printf("Insira a populacao da Primeira carta: \n");
    scanf("%d", &populacao1);

    printf("Insira o codigo da Primeira carta: \n");
    scanf("%s", &cod_carta1);
    
    printf("Insira o Estado da Primeira carta: \n");
    scanf("%s", &estado1);
    
    printf("Insira o nome da cidade da primeira carta: \n");
    scanf("%s", &nome_1);

    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    printf("Codigo da Carta Primeira carta: %s%s \n", estado1,cod_carta1);

    printf("Nome da cidade da Primeira carta: %s \n", nome_1);

    printf("Populacao Primeira carta: %d \n", populacao1);

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
