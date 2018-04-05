#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a, b;

    printf("Entre dois inteiros: ");
    scanf("%d%d", &a, &b);

    if (b)
        printf("%.1f\n", a/b);
    else
        printf("Nao divide por zero.\n");   //ESTE ELSE SERÁ EXECUTADO SE 'b' FOR ZERO

    return 0;
}
