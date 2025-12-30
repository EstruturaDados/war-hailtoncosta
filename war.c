#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_STRING 50

// --- Constrante globais --- //
struct Territorio
{
    char nomeTerritorio[TAM_STRING];
    char corExercito[TAM_STRING];
    int numeroTropa;

};

// -- Função para limpar o buffer de entrada --- //
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// --- Função principal main --- //
int main() {

    struct Territorio territorio[5]; // Vetor para armazenar até 42 territórios do jogo War
    int numTerritorio = 1;
        int totalTerritorios;

    for (int i = 0; i < 5; i++)
    {
        //Cadastrar territórios do jogo War
        printf("-----------------------------------------------------------\n");
        printf("                 Cadastrando Território %d \n", numTerritorio ++);
        printf("-----------------------------------------------------------\n");
        printf("Nome do território: ");
        fgets(territorio[numTerritorio].nomeTerritorio, TAM_STRING, stdin);
        
        printf("Cor do exército (ex: Azul, Verde): ");
        fgets(territorio[numTerritorio].corExercito, TAM_STRING, stdin);
        
        printf("Número de tropas: ");
        scanf("%d", &territorio[numTerritorio].numeroTropa);
        limparBufferEntrada();
        printf("\n\n");

        territorio[numTerritorio].nomeTerritorio[strcspn(territorio[numTerritorio].nomeTerritorio, "\n")] = 0;
        territorio[numTerritorio].corExercito[strcspn(territorio[numTerritorio].corExercito, "\n")] = 0;

        printf("Território %d cadastrado com sucesso!\n\n", numTerritorio - 1);
    }

    printf("------------- Dados dos Territórios Cadastrados -------------\n");

    if (totalTerritorios == 0)
    {
        printf("Nenhum território cadastrado!\n");
    } else {
        
        for (int i = 1; i < numTerritorio; i++)
        {
            printf("Território %d:\n", i);
            printf("Nome do território: %s\n", territorio[i].nomeTerritorio);
            printf("Cor do exército: %s\n", territorio[i].corExercito);
            printf("Número de tropas: %d\n", territorio[i].numeroTropa);
            printf("-----------------------------------------------------------\n");
        }
    }
};

