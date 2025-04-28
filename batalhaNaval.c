#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[10][10], colunaH = 2, linhaH = 4, colunaV = 6, linhaV = 8;

    if(colunaH > 9 || linhaH > 6 || colunaV > 6 || linhaV > 9 || 
        colunaH < 0 || linhaH < 0 || colunaV < 0 || linhaV < 0 ){
            printf("COORDENADAS DOS NAVIO DEVEM SER ENTREOS VALORES '0' e '9' \n \n" ); 
    }

    for (int coluna = 0; coluna < 10 ; coluna++) {
        for (int linha = 0; linha < 10; linha++) {
            tabuleiro[coluna][linha] = 0;

            if((linhaH <= linha && (linhaH + 3) > linha) && colunaH == coluna){
                tabuleiro[coluna][linha] = 3;
            }

            if((colunaV <= coluna && (colunaV + 3) > coluna) && linhaV == linha){
                tabuleiro[coluna][linha] = 3;
            }

            printf("  %d", tabuleiro[coluna][linha]);
        }
        printf("\n");
        
    }



    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}