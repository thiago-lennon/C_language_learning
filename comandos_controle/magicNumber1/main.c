#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int magic;  //magic number
    int guess;

    magic = rand(); //a função rand() gera o número mágico

    printf("Guess the magic number: ");
    scanf("%d", &guess); //o palpite do usuário será armazenado em 'guess'

    if (guess == magic)
        printf("Parabens!\n");
    else
        printf("Voce errou.\n");

    return 0;
}
