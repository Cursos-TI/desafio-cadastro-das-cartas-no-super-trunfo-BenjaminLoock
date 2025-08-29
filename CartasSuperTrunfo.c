#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// ALUNO: ANDRE SILVA DOS SANTOS
// creio eu que fiz certo kk...

    int carta1, PontosTuristicos1;
    unsigned long int Populacao1;      
    char Estado1[20], Cidade1[20];
    float Area1, PIB1;
    float DensidadePopulacional1;
    float PIBPerCapita1;
    float SuperPoder1; //FOI ADICIONADO NO DESAFIO MESTRE

    int carta2,  PontosTuristicos2; 
    unsigned long int Populacao2;
    char Estado2[20], Cidade2[20];
    float Area2, PIB2;
    float DensidadePopulacional2;
    float PIBPerCapita2;
    float SuperPoder2; //FOI ADICIONADO NO DESAFIO MESTRE

    int resultado;

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
    SuperPoder1 = Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PIBPerCapita1 + (1.0 / DensidadePopulacional1);

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
    SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBPerCapita2 + (1.0 / DensidadePopulacional2);


    //Exibindo resultados
    printf("\n=============================================\n"); //pesquisei formas de deixar mais "apresentavel".
    printf("                   CARTA 1\n");   
    printf("Código: %d\n", carta1);
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %2f km²\n", Area1);
    printf("PIB: %2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade Populacional: %f\n", DensidadePopulacional1); //NO DESAFIO AVENTUREIRO FOI ADICIONADO ESSAS INFORMAÇÕES
    printf("PIBPerCapita: %f\n", PIBPerCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1); //FOI ADICIONADO NO DESAFIO MESTRE

    printf("\n=============================================\n");
    printf("                   CARTA 2\n");
    printf("Código: %d\n", carta2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %2f km²\n", Area2);
    printf("PIB: %2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %f\n", DensidadePopulacional2); //NO DESAFIO AVENTUREIRO FOI ADICIONADO ESSAS INFORMAÇÕES
    printf("PIBPerCapita: %f\n", PIBPerCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2); //FOI ADICIONADO NO DESAFIO MESTRE

    //AQUI A BAIXO SERÁ FEITA A COMPARACÃO DAS CARTAS 
    printf("\n                                        \n");
    printf("\n    COMPARAÇÕES DAS CARTAS 001 E 002   \n");
    
    printf("População: %d\n", (Populacao1 > Populacao2)); // 1 SE CARTA1 VENCE, 0 SE CARTA2 VENCE
    printf("Área: %d\n", (Area1 > Area2));
    printf("PIB: %d\n", (PIB1 > PIB2));
    printf("Pontos Turísticos: %d\n", (PontosTuristicos1 > PontosTuristicos2));
    printf("Pib Per Capita: %d\n", (PIBPerCapita1 > PIBPerCapita2));
    printf("Densidade Populacional: %d\n", (DensidadePopulacional1 < DensidadePopulacional2)); //O MENOR VENCE
    printf("Super Poder: %d\n", (SuperPoder1 > SuperPoder2));
    printf("RESULTADO: %d\n", (resultado = SuperPoder1 > SuperPoder2));
    

    return 0;
}
