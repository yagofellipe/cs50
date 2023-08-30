#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number;
    int i;
    int j;
    int space;
    int tmp;
    do
    {
        number = get_int("Escreva o tamanho: ");
    }
    while (number < 1 || number > 8);

    i = 1;
    j = 1;
    tmp = number;

    while (i <= number)
    {
        space = tmp - 1; // Restaura o valor original de space

        while (space > 0)
        {
            printf(" ");
            space--;
        }

        while (j <= i)
        {
            printf("#");
            j++;
        }
        printf("\n");

        j = 1;
        i++;
        tmp--;
    }
}
