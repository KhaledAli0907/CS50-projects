#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    string text = get_string("text: ");
    for (int i = 0; i < strlen(text);i++)
    {
        int m = atoi(text[i]);
        printf("number: %i /n", m);
    }

}