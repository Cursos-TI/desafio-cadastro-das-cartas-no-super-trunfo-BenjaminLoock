#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// ALUNO: ANDRE SILVA DOS SANTOS
// creio eu que fiz certo kk...

    int carta1, População1, PontosTurísticos1;        
    char Estado1[20], Cidade1[20];
    float Área1, PIB1;

    int carta2, População2, PontosTurísticos2; 
    char Estado2[20], Cidade2[20];
    float Área2, PIB2;

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
    scanf("%d", &População1);

    printf("Área: \n");
    scanf("%f", &Área1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Pontos Turísticos: \n");
    scanf("%d", &PontosTurísticos1);
    

    //Carta002
    printf("Cadastro da Carta 2! \n");
    printf("Código da carta 2: \n");
    scanf("%d", &carta2);

    printf("Estado: \n");   
    scanf("%s", Estado2);

    printf("Cidade: \n");
    scanf("%s", Cidade2);

    printf("População: \n");
    scanf("%d", &População2);

    printf("Área: \n");
    scanf("%f", &Área2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Pontos Turísticos: \n");
    scanf("%d", &PontosTurísticos2);


    //Exibindo resultados
    printf("\n=============================================\n"); //pesquisei formas de deixar mais "apresentavel".
    printf("                   CARTA 1\n");
    printf("\n=============================================\n");
    printf("Código: %d\n", carta1);
    printf("Estado: %s\n", Estado1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", População1);
    printf("Área: %2f km²\n", Área1);
    printf("PIB: %2f bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n", PontosTurísticos1);

    printf("\n=============================================\n");
    printf("                   CARTA 2\n");
    printf("\n=============================================\n");
    printf("Código: %d\n", carta2);
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", População2);
    printf("Área: %2f km²\n", Área2);
    printf("PIB: %2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", PontosTurísticos2);

    
    

    return 0;
}
