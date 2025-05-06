//Adicione uma biblioteca
#include <stdio.h>

//Insira o código principal
int main (){

//Insira as variáveis e as defina
        char estado1, codigo1[4], cidade1[50];
        int populacao1, turistico1;
        float area1, pib1, densidade1 = 0, percapita1 = 0;
    
        char estado2, codigo2[4], cidade2[50];
        int populacao2, turistico2;
        float area2, pib2, densidade2 = 0, percapita2 = 0;
        
//Coloque as informações da primeira carta
        printf("Você está preenchendo as informações da PRIMEIRA carta!\n");
    
        printf("Digite a Inicial do Estado (A-H):\n");
        scanf (" %c", &estado1);
    
        printf("Digite o Código da Carta (ex: A01):\n");
        scanf("%3s", codigo1);
    
        printf("Digite o Nome da Cidade:\n");
        scanf("%s", cidade1);
    
        printf("Digite a População da Cidade:\n");
        scanf("%d", &populacao1);
    
        printf("Digite a Área da Cidade(em km²):\n");
        scanf("%f", &area1);
    
        printf("Digite o PIB da Cidade:\n");
        scanf("%f", &pib1);
    
        printf("Digite o Número de Pontos Turísticos da Cidade:\n");
        scanf("%d", &turistico1);
    
//Coloque agora as informações da segunda carta
        printf("Você está preenchendo as informações da SEGUNDA carta!\n");
    
        printf("Digite a Inicial do Estado (A-H):\n");
        scanf(" %c", &estado2);
    
        printf("Digite o Código da Carta (Ex: A01):\n");
        scanf("%3s", codigo2);
    
        printf("Digite o Nome da Cidade:\n");
        scanf("%s", cidade2);
    
        printf("Digite a População da Cidade:\n");
        scanf("%d", &populacao2);
    
        printf("Digite a Área da Cidade(em km²):\n");
        scanf("%f", &area2);
    
        printf("Digite o PIB da Cidade:\n");
        scanf("%f", &pib2);
    
        printf("Digite o Número de Pontos Turísticos da Cidade:\n");
        scanf("%d", &turistico2);

//Calculando densidade demográfica e PIB per Capita
        if (area1 > 0)
                densidade1 = (float) populacao1 / area1;
        else
                densidade1 = 0;

        if (populacao1 > 0)
                percapita1 = (pib1 * 1000000000.0) / (float) populacao1;
        else 
                percapita1 = 0;


                
        if (area2 > 0)
                densidade2 = (float) populacao2 / area2;
        else
                densidade2 = 0;

        if (populacao2 > 0)
                percapita2 = (pib2 * 1000000000.0) / (float) populacao2;
        else 
                percapita2 = 0;
            
            
    
//Exiba as cartas com os dados que o usuário inseriu
        printf("\n---PRIMEIRA CARTA---\n");
        printf("Inicial do Estado: %c\n", estado1);
        printf("Código da Cidade: %3s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População da Cidade: %d\n", populacao1);
        printf("Área da Cidade: %.2fkm²\n", area1);
        printf("PIB da Cidade: %.2f bilhões de reais\n", pib1);
        printf("Número de Pontos Turísticos da Cidade: %d\n", turistico1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capita: R$%.2f\n", percapita1);
    
        printf("\n---SEGUNDA CARTA---\n");
        printf("Inicial do Estado: %c\n", estado2);
        printf("Código da Cidade: %3s\n", codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População da Cidade: %d\n", populacao2);
        printf("Área da Cidade: %.2fkm²\n", area2);
        printf("PIB da Cidade: %.2f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos da Cidade: %d\n", turistico2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: R$%.2f\n", percapita2);

//Conclua o programa com sucesso
    return 0;
    }