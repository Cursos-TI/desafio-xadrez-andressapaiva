// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

# include <stdio.h>
int main(){

    int opcao;

    do
    {
        printf("\nEscolha uma das peças para mover ou sair do jogo:\n");
        printf("1. Torre.\n");
        printf("2. Rainha.\n");
        printf("3. Bispo.\n");
        printf("4. Sair do jogo.\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nTorre movida 5 casas para direita.\n");
            break;
        
        case 2:
            printf("\nRainha movida 8 casas para esquerda.\n");
            break;
        
        case 3:
            printf("\nBispo movido 5 casas na diagonal superior direita.\n");
            break;

        case 4:
            printf("Saindo do jogo...\n");
            break;
        
        default:
            printf("Opção inválida!");
            break;
        }
    } while (opcao !=4);

    return 0;
}

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
