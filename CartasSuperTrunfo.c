#include <stdio.h>
         
        int main (){   
            
             char estado_A , estado_B;
             char codigodacarta_A [10], codigodacarta_B[10];
             char nomedacidade_A [10], nomedacidade_B [20];
             int populacao_A, populacao_B, pontosTuristicos_A, pontosTuristicos_B;
             float area_A, area_B, pib_A, pib_B;

             printf("DIGITE O ESTADO: \n");
             scanf("%s", &estado_A);

             printf("DIGITE O CODIGO DA CARTA: \n");
             scanf("%s", &codigodacarta_A);

             printf("DIGITE O NOME DA CIDADE: \n");
             scanf("%s", &nomedacidade_A);
                
             printf("DIGITE O NUMERO DA POPULAÇÃO: \n");
             scanf("%d", &populacao_A);

             printf("DIGITE A AREA: \n");
             scanf("%f", &area_A);

             printf("DIGITE O PIB: \n");
             scanf("%f", &pib_A);

            printf("DIGITE O NUMERO DE PONTOS TURISTICOS: \n");
            scanf("%s", &pontosTuristicos_A,"\n");
 
           


            printf("DIGITE O ESTADO: \n");
            scanf("%s", &estado_B);

            printf("DIGITE O CODIGO DA CARTA: \n");
            scanf("%s", &codigodacarta_B);

            printf("DIGITE O NOME DA CIDADE: \n");
            scanf("%s", &nomedacidade_B);
               
            printf("DIGITE O NUMERO DA POPULAÇÃO: \n");
            scanf("%d", &populacao_B);

            printf("DIGITE A AREA: \n");
            scanf("%f", &area_B);

            printf("DIGITE O PIB: \n");
            scanf("%f", &pib_B);


           printf("DIGITE O NUMERO DE PONTOS TURISTICOS: \n");
           scanf("%s", &pontosTuristicos_B); 

           printf("Carta 1: \n");
           
               

            return 0; 
        }