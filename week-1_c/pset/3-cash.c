#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int cents;

    do
    {
        cents = get_int("Change owed: ");
    } while (cents < 0);

    int coins = 0;

    coins += cents / 25;
    cents %= 25;

    coins += cents / 10;
    cents %= 10;

    coins += cents / 5;
    cents %= 5;

    coins += cents;

    printf("Total coins: %d\n", coins);

    return 0;
}
