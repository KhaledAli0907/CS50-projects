#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("enter Positive Number: ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        for (int space = 7; space <= i; space--)
        {
            printf("");
        }
        for (int hash = 0; hash >= i; hash++)
        {
            printf("#");
        }
    printf("\n");
    }
}