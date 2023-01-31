#include<stdio.h>
#include<cs50.h>


int main(void)
{
    int Height;
    // get input while in valid range
    do
    {
        Height = get_int("Postive number: ");
    }
    while (Height < 1 || Height > 8);
    // loop through rows
    for (int Row = 0; Row < Height; Row++)
    {
        // print spaces
        for (int dot = Height - 2; dot >= Row; dot--)
        {
            printf(" ");
        }
        // print hashes
        for (int Colum = 0; Colum <= Row; Colum++)
        {
            printf("#");
        }
        // print new line
        printf("\n");
    }
}