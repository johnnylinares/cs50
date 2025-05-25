#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("What´s x?: \n");
    int y = get_int("What´s y?:\n");

    if (x < y)
    {
        printf("x is less than y");
    }
    else if (x > y)
    {
        printf("x is grater than y");
    }
    else
    {
        printf("x is equal t0 y")
    }
}