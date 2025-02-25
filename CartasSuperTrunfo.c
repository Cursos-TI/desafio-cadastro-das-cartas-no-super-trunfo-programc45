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

             return 0;
                     }

         // Explicação das variáveis:
         // 1. estado_A, estado_B (char): Armazenam o estado da cidade A e B (representados por um único caractere, como por exemplo, "F" para FORTALEZA).
         // 2.codigodacarta_A, codigodacarta_B (char[]): São vetores de caracteres (strings) que armazenam o código da carta de cada cidade.
         // 3.nomedacidade_A, nomedacidade_B (char[]): São vetores de caracteres (strings) que armazenam o nome da cidade A e B.
         // 4.populacao_A, populacao_B (int): Armazenam a população das cidades A e B como números inteiros.
         // 5.pontosTuristicos_A, pontosTuristicos_B (int): Armazenam o número de pontos turísticos de cada cidade como números inteiros.
         // 6.area_A, area_B, pib_A, pib_B (float): Armazenam, respectivamente, a área e o PIB (Produto Interno Bruto) das cidades A e B, como números de ponto flutuante (decimais).
        
         // explicação dos formatos
         // %c:Lê ou exibe um caractere (exemplo: o estado da cidade).
         // %s:Lê ou exibe uma string (exemplo: o código da carta ou o nome da cidade).
         // %d:Lê ou exibe um número inteiro (exemplo: a população ou o número de pontos turísticos).
         // %f:Lê ou exibe um número de ponto flutuante (exemplo: a área ou o PIB da cidade).

             
                     