#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Copito", "Johnny", "Perla", "Sheldon", "Valu"};
    string numbers[] = {"+58 0424-060252", "+58 0412-4998676", "+58 0416-3924426", "+58 0469-6969696", "+58 0412-3746538"};

    string name = get_string("Name: ");

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Information:\nName: %s\nNumber: %s\n", names[i], numbers[i]);
            return 0;
        }
    }

    printf("Not found.");
    return 1;
}