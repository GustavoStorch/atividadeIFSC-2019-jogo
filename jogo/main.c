#include <stdio.h>
#include <stdlib.h>

#define PEDRA 1
#define PAPEL 2
#define TESOURA 3

void jokenpo(){
    int jogada;
    printf("Digite 1-Pedra, 2-Papel ou 3-Tesoura\n");
    scanf(" %d", &jogada);
    switch (jogada) {
    case PEDRA:
        printf("Voce jogou Pedra\n");
        break;
    case PAPEL:
        printf("Voce jogou Papel\n");
        break;
    case TESOURA:
        printf("Voce jogou Tesoura\n");
        break;
    default:
        printf("Jogada invalida");
        exit(0);
    }
    srand(time(NULL));
    int jogadaCPU = rand()%3+1;
    switch (jogadaCPU) {
    case PEDRA:
        printf("A CPU jogou Pedra\n");
        break;
    case PAPEL:
        printf("A CPU jogou Papel\n");
        break;
    case TESOURA:
        printf("A CPU jogou Tesoura\n");
        break;
    }
    if (jogada == jogadaCPU) {
        printf("Deu empate!\n");
    }
    else if (jogada == PEDRA && jogadaCPU == TESOURA){
        printf("Pedra quebra Tesoura, voce ganhou!\n");
    }
    else if (jogada == PAPEL && jogadaCPU == PEDRA){
        printf("Papel embrulha Pedra, voce ganhou!\n");
    }
    else if (jogada == TESOURA && jogadaCPU == PAPEL){
        printf("Tesoura corta Papel, voce ganhou\n");
    }
    else {
        printf("Voce perdeu!\n");
    }
}

int main(){
    while(1 == 1)
        jokenpo();
}
