#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "wav.h"

int check_format(WAVHEADER header);
int get_block_size(WAVHEADER header);

int main(int argc, char *argv[])
{
    // Ensure proper usage
    // TODO #1
    if (argc != 3)
    {
        printf("Usage: ./reverse input.wav output.wav");
        return 1;
    }
    // Open input file for reading
    // TODO #2
    FILE *Inputptr = fopen(argv[1], "r");
    if(Inputptr == NULL)
    {
        printf("Input file invalid");
        return 1;
    }

    // Read header into an array
    // TODO #3
    BYTE buffer[4];
    fread(buffer, sizeof(BYTE), 4, Inputptr);

    // Use check_format to ensure WAV format
    // TODO #4

    // Open output file for writing
    // TODO #5
    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Error while writing the file");
        return 2;
    }

    // Write header to file
    // TODO #6

    // Use get_block_size to calculate size of block
    // TODO #7

    // Write reversed audio to file
    // TODO #8
}

int check_format(WAVHEADER header)
{
    // TODO #4
    char *Format = fgets(Inputptr.format);
    bool HeaderCheck = false;
    if(Format == "WAVE")
    {
        HeaderCheck = true;
    }
    else
    {
        printf("Invalid file format");
        return;
    }


    return 0;
}

int get_block_size(WAVHEADER header)
{
    // TODO #7
    return 0;
}