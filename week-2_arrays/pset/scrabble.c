#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int get_score(string word);

int main(void)
{
    printf("Welcome! Please enter the words to start the game!\n");

    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = get_score(word1);
    int score2 = get_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\nP1: %i pts.\nP2: %i pts\n", score1, score2); // Add points later
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\nP1: %i pts.\nP2: %i pts\n", score1, score2);
    }
    else
    {
        printf("Tie!\n\nP1: %i pts.\nP2: %i pts\n", score1, score2);
    }
}

int get_score(string word)
{
    int score = 0;

    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }

    return score;
}