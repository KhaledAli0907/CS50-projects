#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    string text = get_string("text: ");
    int x = atoi(text);
    for (int i = 0; i < strlen(text);i++)
    {
        int m = toascii(x);
        printf("number: %i /n", m);
    }

}