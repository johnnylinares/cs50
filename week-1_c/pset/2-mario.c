#include <cs50.h>
#include <stdio.h>

void get_space(int row, int height);
void get_column(int r);

int main(void)
{
    int n;
    do
    {
        n = get_int("Number: ");
    } while (n < 1 || n > 8);

    for (int i = 0; i < n; i++)
    {
        get_space(i, n);
        get_column(i + 1);
    }
}

void get_space(int row, int height)
{
    for (int i = 0; i < height - row - 1; i++)
    {
        printf(" ");
    }
}

void get_column(int r)
{
    for (int i = 0; i < r; i++)
    {
        printf("#");
    }
    printf("\n");
}
