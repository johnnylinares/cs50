#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What´s your name?\n");
    printf("Hi, %s\n", answer);
}
