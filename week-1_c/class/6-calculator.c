#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What´s x?: ");
    int y = get_int("What´s y?: ");

    printf("%.2f\n", (float)x / y);
}