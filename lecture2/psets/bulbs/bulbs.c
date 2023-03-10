#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    // promt user for text
    string text = get_string("Message: ");
    // for loop to go through Message
    for (int i = 0; i < strlen(text); i++)
    {
        // hold the ascii values
        int ascii = text[i];
        //make array value to store th binary and make it all 0
        int CIB[BITS_IN_BYTE] = {0};
        int x = 0;
        while (ascii > 0)
        {
            CIB[x] = ascii % 2;
            ascii /= 2;
            x++;
        }
        for (int y = BITS_IN_BYTE - 1; y >= 0; y--)
        {
            print_bulb(CIB[y]);
        }
        printf("\n");
    }
    //print the bulbs in correct order


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
