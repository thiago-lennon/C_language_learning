#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int magic;  //magic number
    int guess;

    magic = rand(); //a fun��o rand() gera o n�mero m�gico

    printf("Guess the magic number: ");
    scanf("%d", &guess); //o palpite do usu�rio ser� armazenado em 'guess'

    if (guess == magic)
        printf("Parabens!\n");
    else
        printf("Voce errou.\n");

    return 0;
}
