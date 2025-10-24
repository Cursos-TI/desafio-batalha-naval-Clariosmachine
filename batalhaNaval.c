#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    int indice; 
    int matriz[10][10];  //declaracao da matriz, sem inicializacao
    int navio_01[3] = {3,3,3};  // navio horizontal
    int navio_02[3] = {3,3,3};  // navio vertical
    // ↓ coordernadas iniciais dos navios
    int coluna_inicial_navio_01 = 1;
    int linha_inicial_navio_01 = 5;
    int coluna_inicial_navio_02 = 2;
    int linha_inicial_navio_02 = 8;

    if (coluna_inicial_navio_01 > 8 || linha_inicial_navio_02 > 8 || linha_inicial_navio_01 > 10 || coluna_inicial_navio_02 > 10)
    {
        coluna_inicial_navio_01 > 8? 
        printf("\nA coluna inicial do navio 01 nao pode ser maior que 08 ou vai ultrapassar a borda do tabuleiro.\n\n")
        : linha_inicial_navio_02 > 8?
        printf("\nA linha inicial do navio 02 nao pode ser maior que 08 ou vai ultrapassar a borda do tabuleiro.\n\n")
        : linha_inicial_navio_01 > 10?
        printf("\nA linha inicial do navio 01 nao pode ser maior que 10 ou vai ultrapassar a borda do tabuleiro.\n\n")
        : 
        printf("\nA coluna inicial do navio 01 nao pode ser maior que 08 ou vai ultrapassar a borda do tabuleiro.\n\n");

        return 0;  //Finaliza o programa
    } 

    for (int y = 0; y < 10; y++)  // Inicializando cada coordenada do tabuleiro com o valor zero (0)
    { 
        for ( int i = 0; i < 10; i++) 
        { 
            matriz[y][i] = 0; 
        } 
    }  // Agora todas as coordenadas estão preenchidas com 0.
 
    // Adicionando o navio horizontal / definindo as respectivas coordenadas com o valor 3
    for (int y = 0; y < 10; y++)
    {
        for ( int i = 0; i < 10; i++)
        {
            // se a linha (y) for igual a linha inicial, e a coluna (i) for igual a coluna inicial do navio_01
            if (y == linha_inicial_navio_01 -1)  // menos 1 pra ficar igual aos valores das linhas e colunas
                if(i == coluna_inicial_navio_01 -1)
                    {
                        for (int j = 0; j < 3; j++)  //um "for" pra preencher com os valores do array do navio
                        {
                            matriz[y][i] = navio_01[j];
                            i++;
                        }
                        //break;  // pra nao precisar percorrer pelo resto das coordenadas
                    }
        }
    }

    // Adicionando navio na vertical
   for (int a = 0; a < 10; a++)
   {
        for (int b = 0; b < 10; b++)
        {
            if (a == coluna_inicial_navio_02 -1 && b == linha_inicial_navio_02 -1)
            {
                for (int linha = b, peca_navio = 0; linha < b +3; linha++, peca_navio++)
                {
                    if (matriz[linha][a] != 0)
                    {  //Verifica se alguma coordenada ja esta preenchida com alguma parte do navio anterior
                        printf("Os navios estao se sobrepondo. Corrija.\n\n");
                        return 0;  // Finaliza o programa
                    }
                    
                    matriz[linha][a] = navio_02[peca_navio];
                }
                
            }
            
        }
        
   }
   
    printf("  "); // Espaco antes das letra pra deixar tudo alinhado

    for (char letra = 'A'; letra <= 'J'; letra++)  // imprimindo letras acima do tabuleiro
    { 
        letra == 'J'? printf("| %c |\n", letra) : printf("| %c |", letra);
        // quebra de linha no caso da letra 'J'
    } 

    for (int linha = 0; linha <10; linha++ )  //Imprimindo o tabuleiro preenchido
    { 
        printf("%02d", linha +1);  // imprimir número da linha à esquerda
        
        for (int elemento = 0; elemento < 10; elemento++) 
        { 
            printf("| %d |", matriz[linha][elemento]); 
        } 
        printf("\n\n"); 
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
