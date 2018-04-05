#include <stdio.h>
#include <stdlib.h>

//NÚMEROS MÁGICOS #2

int main(void)
{
    int magic, guess;

    magic = rand();

    printf("Adivinhe o numero: ");
    scanf("%d", &guess);

    if (guess == magic)
        printf("Voce acertou\n");
    else
    {
        printf("Voce errou.\n");
        if (guess > magic)
            printf("O palpite esta alto\n");
        else
            printf("O palpite esta baixo\n");
    }

    return 0;
}
