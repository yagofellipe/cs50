#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int i;
    do
    {
        i = get_int("Start population: \n");
    }
    while (i < 9);
    // TODO: Prompt for end size
    int e;
    do
    {
        e = get_int("End population: \n");
    }
    while (e < i);
    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    while (i < e)
    {
        i = i + (i / 3) - (i / 4);
        years++;
    }
    // TODO: Print number of yearsss
    printf("Years: %d\n", years);
}
