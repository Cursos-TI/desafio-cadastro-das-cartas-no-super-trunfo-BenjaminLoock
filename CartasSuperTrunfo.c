#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// ALUNO: ANDRE SILVA DOS SANTOS
// creio eu que fiz certo kk...

    int carta1, Populacao1, PontosTuristicos1;        
    char Estado1[20], Cidade1[20];
    float Area1, PIB1;
    float DensidadePopulacional1;
    float PIBPerCapita1;

    int carta2, Populacao2, PontosTuristicos2; 
    char Estado2[20], Cidade2[20];
    float Area2, PIB2;
    float DensidadePopulacional2;
    float PIBPerCapita2;

int main() {

    //Carta001
    printf("Cadastro da Carta 1! \n");
    printf("Código da carta 1: \n");
    scanf("%d", &carta1);

    printf("Estado: \n");   
    scanf("%s", Estado1);

    printf("Cidade: \n");
    scanf("%s", Cidade1);

    printf("População: \n");
    scanf("%d", &Populacao1);

    printf("Área: \n");
    scanf("%f", &Area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos1);
    
    
    DensidadePopulacional1 = (Populacao1 / Area1); //NO DESAFIO AVENTUREIRO FOI ADICIONADO ESSAS INFORMAÇÕES
    PIBPerCapita1 = (PIB1 / Populacao1);

    //Carta002
    printf("Cadastro da Carta 2! \n");
    printf("Código da carta 2: \n");
    scanf("%d", &carta2);

    printf("Estado: \n");   
    scanf("%s", Estado2);

    printf("Cidade: \n");
    scanf("%s", Cidade2);

    printf("População: \n");
    scanf("%d", &Populacao2);

    printf("Área: \n");
    scanf("%f", &Area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos2);

    DensidadePopulacional2 = (Populacao2 / Area2); //NO DESAFIO AVENTUREIRO FOI ADICIONADO ESSAS INFORMAÇÕES
    PIBPerCapita2 = (PIB2 / Populacao2);


    //Exibindo resultados
    printf("\n=============================================\n"); //pesquisei formas de deixar mais "apresentavel".
    printf("                   CARTA 1\n");
    printf("\n=============================================\n");
    printf("Código: %d\n", carta1);
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %2f km²\n", Area1);
    printf("PIB: %2f bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %f\n", DensidadePopulacional1); //NO DESAFIO AVENTUREIRO FOI ADICIONADO ESSAS INFORMAÇÕES
    printf("PIBPerCapita: %f\n", PIBPerCapita1);

    printf("\n=============================================\n");
    printf("                   CARTA 2\n");
    printf("\n=============================================\n");
    printf("Código: %d\n", carta2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %2f km²\n", Area2);
    printf("PIB: %2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %f\n", DensidadePopulacional2); //NO DESAFIO AVENTUREIRO FOI ADICIONADO ESSAS INFORMAÇÕES
    printf("PIBPerCapita: %f\n", PIBPerCapita2);


    
    

    return 0;
}
