#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    //array to store the chars in binary form
    int CIB[BITS_IN_BYTE] = {0};
    int i = 0;
    // promt user for text
    string text = get_string("Message: ");
    // for loop to go through Message
    for ( i; i < strlen(text); i++)
    {
        // hold the ascii values
        int ascii = text[i];
        // convert the value to binary
        CIB[i] = ascii % 2;
        ascii /= 2;
    }
    for (int j = BITS_IN_BYTE - 1; )
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
