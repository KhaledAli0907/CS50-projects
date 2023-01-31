#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("enter Positive Number: ")
    }
    while (height < 1 || height > 8)

    for (int i = 0; i < height; i++)
    {
        printf("#");
        for (int j = 0; j < height; j++)
        {
            printf("#");
            printf("\n");
        }

    printf("\n");
    }

}