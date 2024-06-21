// Crie um jogo que o computador escolha um número aleatório de 1 a 100, e o usuário tenha que adivinhar qual é o múmero. O program deve fornecer dicas do tipo "maior" ou "menor" até que usuário acerte.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, palpite, tentativas = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(0));

    // Gera um número aleatório entre 1 e 100
    numero_secreto = rand() % 100 + 1;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Eu escolhi um número entre 1 e 100. Tente adivinhar qual é!\n");

    // Loop do jogo
    while (1) {
        printf("Insira seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < numero_secreto) {
            printf("O número é maior!\n");
        } else if (palpite > numero_secreto) {
            printf("O número é menor!\n");
        } else {
            printf("Parabéns! Você adivinhou o número em %d tentativas.\n", tentativas);
            break;
        }
    }

    return 0;
}
