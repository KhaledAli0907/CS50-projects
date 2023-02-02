#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    //array to store the chars in intger form
    int chars[BITS_IN_BYTE];
    // promt user for text
    string text = get_string("Message: ");
    // for loop to go through Message
    for (int i = 0; i < strlen(text); i++)
    {
        int ascii = text[i];
        
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
