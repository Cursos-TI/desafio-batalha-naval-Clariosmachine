#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define LINHAS 10
#define COLUNAS 10
//Em constantes não se deve declarar os tipos nem se deve finalizar a declaracao delas com ";"

int main() {
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    int tabuleiro [LINHAS][COLUNAS];  //Utilizando as constantes para criar a matriz
    int navio_01[3] = {3,3,3};  // navio horizontal
    int navio_02[3] = {3,3,3};  // navio vertical    
    int navio_03[3] = {3,3,3};  // navio diagonal_1
    int navio_04[3] = {3,3,3};  // navio diagonal_2
    
    // ↓ coordernadas iniciais dos navios
    int linha_inicial_navio_01 = 3;
    int coluna_inicial_navio_01 = 2;
        
    int linha_inicial_navio_02 = 8;
    int coluna_inicial_navio_02 = 2;    
    
    int linha_inicial_navio_03 = 8;
    int coluna_inicial_navio_03 = 2;
    
    int linha_inicial_navio_04 = 8;
    int coluna_inicial_navio_04 = 2;
    
    /*Inicializando todas as posicoes do tabuleiro com o valor 0*/
    for (int i = 0; i < LINHAS; i ++)
    {
        for (int j = 0; j < COLUNAS; j ++)
        {
            tabuleiro[i][j] = 0;
            /*Imprimindo o tabuleiro vazio ao mesmo tempo que cada indice e inicializado*/
            j == COLUNAS - 1? printf(" %d\n", tabuleiro[i][j]) : printf(" %d -", tabuleiro[i][j]);
            /*↑ Usei o operador ternario para facilitar o "if" da impressao*/
        }
        
    }

    printf("\n\n");
    // Adicionando o navio horizontal / definindo as respectivas coordenadas com o valor 3
    for (int linha = 0; linha < LINHAS; linha++)
    {
        for (int col = 0; col < COLUNAS; col++)
        {
            if(linha == linha_inicial_navio_01 -1 && col == coluna_inicial_navio_01 -1)
            {
                for (int elemento = 0; elemento < 3; elemento++) //itera nas 3 colunas dessa linha, a partir da coluna indicada na variavel
                {
                    tabuleiro[linha][col + elemento] = navio_01[elemento];
                }
                
            } 
        }
        
    }
    
    
    
    
    for (int linha = 0; linha <10; linha++ )  //Imprimindo o tabuleiro preenchido
    { 
        printf("%02d", linha +1);  // imprimir número da linha à esquerda
        
        for (int elemento = 0; elemento < 10; elemento++) 
        { 
            printf("| %d |", tabuleiro[linha][elemento]); 
        } 
        printf("\n\n"); 
    }

    return 0;
}
