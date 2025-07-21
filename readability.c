#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int get_letters(string text);
int get_words(string text);
int get_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");

    int letters = get_letters(text);
    int words = get_words(text);
    int sentences = get_sentences(text);

    float l = (float)letters / words * 100;
    float s = (float)sentences / words * 100;

    int index = round(0.0588 * l - 0.296 * s - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int get_letters(string text)
{
    int letters = 0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {

        if (isalpha(text[i]))
        {
            letters++;
        }
    }

    return letters;
}

int get_words(string text)
{
    int words = 1;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
    }

    return words;
}

int get_sentences(string text)
{
    int sentences = 0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        char c = text[i];
        if (c == '.' || c == '!' || c == '?')
        {
            sentences++;
        }
    }

    return sentences;
}
