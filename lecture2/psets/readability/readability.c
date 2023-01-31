#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(argc, argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./readability key")
        return
    }
    string Text = get_string("Text: ");
    int words = 0;
    int letters = 0;
    int sentence = 0;

    for (int i = 0; i < Text; i++)
    {
        if (isalpha(argv))
    }
}