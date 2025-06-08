#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.

void bispo(movimentoBispo)
{
    if (movimentoBispo > 0)
    {
        printf("Direita, Cima\n");
        bispo(movimentoBispo - 1);
    }
}

void torre(movimentoTorre)
{
    if (movimentoTorre > 0)
    {
        printf("Direita\n");
        torre(movimentoTorre - 1);
    }
}

void rainha(movimentoRainha)
{
    if (movimentoRainha > 0)
    {
        printf("Esquerda\n");
        rainha(movimentoRainha - 1);
    }
}

int main()
{
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    unsigned int movimentoTorre = 5, movimentoBispo = 5, movimentoRainha = 8;
    int i, j;

    // Implementação de Movimentação do Bispo
    printf("Movimento do Bispo:\n");
    bispo(movimentoBispo);
    printf("\n");

    // Implementação de Movimentação da Torre
    printf("Movimento da Torre:\n");
    torre(movimentoTorre);
    printf("\n");

    // Implementação de Movimentação da Rainha
    printf("Movimento da Rainha:\n");
    rainha(movimentoRainha);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimento do Cavalo:\n");
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Cima\n");
        }
        printf("Direita");
    }
    printf("\n");

    return 0;
}
