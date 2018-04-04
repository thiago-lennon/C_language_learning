#include <stdio.h>


int cont;

void func1(void);
void func2(void);

void main(void)
{
    cont = 10;
    func1();

}

void func1(void)
{
    int temp;
    temp = cont;
    func2();

    printf("O contador eh: %d\n.",cont);
}

void func2(void)
{
    int cont;
    for (cont = 0; cont < 10; cont++)
        printf("%d ");
        putchar(".");
}


















