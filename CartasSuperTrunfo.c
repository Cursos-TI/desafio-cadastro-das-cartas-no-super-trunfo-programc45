#include <stdio.h>
  

int main() {
    printf("desafio nivel novato!\n");

    int população;
    int numerodepontosturisticos; 
    float pib;
    double area;
    char A;
    char A01[20];
    char nome[50];

    printf("qual o numero da população: \n");
    scanf("%d" , &população);

    printf("qual o numero de pontos turisticos: \n");
    scanf("%d" , &numerodepontosturisticos);

    printf("qual numero do pib: \n");
    scanf("%f", &pib);

    printf("qual numero do area: \n");
    scanf("%2.f" , &area);

    printf("qual estado da carta: \n");
    scanf("%s" , &A);

    printf("qual codigo da carta: \n");
    scanf("%s" , &A01);

    printf("qual nome da cidade: \n");
    scanf("%s" , &nome );

    printf("Numero da populção: %d - Numerosdepontosturisticos: %d\n" , população, numerodepontosturisticos);
    printf("Numero do pib: %f - Area: %2.f\n" , pib , area);
    printf("Estado da carta: %s - Carta: %s\n - Nome da cidade: %s \n" , A , A01 , nome);


    return 0;
}
