#include <stdio.h>
         
        int main (){   
            
             char estado_A ,estado_B;
             char codigodacarta_A [10], codigodacarta_B[10];
             char nomedacidade_A [10], nomedacidade_B [20];
             int populacao_A, populacao_B, pontosTuristicos_A, pontosTuristicos_B;
             float area_A, area_B, pib_A, pib_B;

        
             printf("DIGITE O ESTADO: \n"); 
             scanf(" %c", &estado_A) ;

             printf("DIGITE O CODIGO DA CARTA: \n");
             scanf("%s", codigodacarta_A) ;

             printf("DIGITE O NOME DA CIDADE: \n");
             scanf("%s", nomedacidade_A) ;
                
             printf("DIGITE O NUMERO DA POPULAÇÃO: \n") ;
             scanf("%d", &populacao_A) ;

             printf("DIGITE A AREA: \n") ;
             scanf("%f", &area_A) ;

             printf("DIGITE O PIB: \n") ;
             scanf("%f", &pib_A) ;

             printf("DIGITE O NUMERO DE PONTOS TURISTICOS: \n");
             scanf("%d", &pontosTuristicos_A,"\n") ;
 
           


             printf("DIGITE O ESTADO: \n");
             scanf(" %c", &estado_B ) ;

             printf("DIGITE O CODIGO DA CARTA: \n");
             scanf("%s", codigodacarta_B) ;

             printf("DIGITE O NOME DA CIDADE: \n");
             scanf("%s", nomedacidade_B) ;
               
             printf("DIGITE O NUMERO DA POPULAÇÃO: \n");
             scanf("%d", &populacao_B) ;

             printf("DIGITE A AREA: \n");
             scanf("%f", &area_B) ;

             printf("DIGITE O PIB: \n");
             scanf("%f", &pib_B) ;

             printf("DIGITE O NUMERO DE PONTOS TURISTICOS: \n");
             scanf("%d", &pontosTuristicos_B) ;  


             printf("Carta: 1 \n");
             printf("Estado: %c \n" , estado_A);
             printf("Codigo: %s \n" , codigodacarta_A);   
             printf("Nome da Cidade: %s \n" , nomedacidade_A);    
             printf("População: %d \n" , populacao_A);
             printf("Área: %f \n", area_A);
             printf("PIB: %f \n", pib_A);
             printf("Numeros de Pontos Turísticos: %d \n", pontosTuristicos_A);

             printf("\nCarta 2: \n");
             printf("Estado: %c \n" , estado_B);
             printf("Codigo: %s \n" , codigodacarta_B);   
             printf("Nome da Cidade: %s \n" , nomedacidade_B);    
             printf("População: %d \n" , populacao_B);
             printf("Área: %f \n", area_B);
             printf("PIB: %f \n", pib_B);
             printf("Numeros de Pontos Turísticos: %d \n", pontosTuristicos_B);

             // 


             return 0; 
                       }      