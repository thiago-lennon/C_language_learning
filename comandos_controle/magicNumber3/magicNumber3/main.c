#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int magic, guess;

    magic = rand();

    printf("Adivinhe o numero: ");
    scanf("%d", &guess);

    if (guess == magic)
        printf("Voce acertou\n");
    else if (guess > magic)
        printf("Palpite alto\n");
    else
        printf("Palpite baixo\n");

    return 0;
}
