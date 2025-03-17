#include <stdio.h>
#include <string.h>

typedef struct {
  char estado[500], nome_da_cidade[500], letras[500];
    int codigo_carta, numero_de_pontos_turisticos;
    float pib, area_km2, populacao; 
}cidade;

int main (){
  cidade cidade, cidade2;

    printf("|-------------------------------|\n");
    printf("|_________SUPER--TRUNFO_________| \n");
    printf("|--------------DE---------------| \n");
    printf("|____________PAÍSES_____________| \n");

    printf("____________________________________________________>>>>carta N1ª<<<<<<<<____________________________________________________ \n");
    printf("Olá, o jogo Super Trunfo de Países é um sistema para cadastrar cartas com informações sobre cidades.\n");
    printf("O usuário deverá inserir os dados de duas cartas do Super Trunfo. Para cada carta, algumas informações serão solicitadas.\n");
    printf("aperte enter para continuar: \n");
    scanf( "%c", &cidade.letras[0]);

    printf("Ótimo, primeiro preciso que escolha uma letra de 'A' a 'H'\n");
    scanf(" %c", &cidade.letras);

    printf("Digite um numero um número de 01 a 04 \n ");
    scanf("%d", &cidade.codigo_carta);

    printf("Agora digite o nome da 1º cidade\n");
    getchar();
    fgets(cidade.nome_da_cidade, 500,stdin);

    printf(" Escreva o numero de habitantes da cidade \n");
    scanf("%f",&cidade.populacao);

    printf("digite a area (em km²) \n");
    scanf("%f", &cidade.area_km2);

    printf("digite o Produto Interno Bruto da cidade \n");
    scanf("%f", &cidade.pib);

    printf("Quantos pontos turisticos a cidade posssui? \n");
    scanf("%d", &cidade.numero_de_pontos_turisticos);
getchar();

    printf("___________________________________________________________>>>>carta N2ª<<<<<<<<____________________________________________________");
    printf("escolha uma letra de 'A' a 'H' para a 2ª carta\n");
    scanf( "%c", &cidade2.letras);

    printf("Digite um numero um número de 01 a 04 \n ");
    scanf("%d", &cidade2.codigo_carta);

    printf("Agora digite o nome da 2º cidade\n");
    getchar();
    fgets(cidade2.nome_da_cidade, 500,stdin);

    printf(" Escreva o numero de habitantes da cidade \n");
    scanf("%f",&cidade2.populacao);

    printf("digite a area (em km²) \n");
    scanf("%f", &cidade2.area_km2);

    printf("digite o Produto Interno Bruto da cidade \n");
    scanf("%f", &cidade2.pib);

    printf("Quantos pontos turisticos a cidade posssui? \n");
    scanf("%d", &cidade2.numero_de_pontos_turisticos);

    printf("/////////////////////////////////// \n");

    printf("|---------------| \n");
    printf("|=== Carta 1 ===| \n");
    printf("|---------------| \n");
    printf("Estado: %c \n",cidade.letras[0]);
    printf("Código: %c%d \n",cidade.letras[0], cidade.codigo_carta);
    printf("Nome da cidade: %s \n", cidade.nome_da_cidade);  
    getchar();
    printf("População: %.2f habitantes\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area_km2);
    printf("PIB: %.2f bilhoes \n", cidade.pib);
    printf("Pontos turísticos: %d\n", cidade.numero_de_pontos_turisticos);

    printf("/////////////////////////////////// \n");

    printf("|---------------| \n");
    printf("|=== Carta 2 ===| \n");
    printf("|---------------| \n");
    printf("Estado: %c \n",cidade2.letras[0]);
    printf("Código: %c%d \n",cidade2.letras[0], cidade2.codigo_carta);
    printf("Nome da cidade: %s \n", cidade2.nome_da_cidade);  
    printf("População: %.2f habitantes\n", cidade2.populacao);
    printf("Área: %.2f km²\n", cidade2.area_km2);
    printf("PIB: %.2f bilhoes \n", cidade2.pib);
    printf("Pontos turísticos: %d\n", cidade2.numero_de_pontos_turisticos);
   return 0;
}
 
