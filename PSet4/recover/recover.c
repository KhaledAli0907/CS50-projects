#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#define BlockSize 512

int main(int argc, char *argv[])
{
    //declare varuables
    typedef uint8_t BYTE;
    FILE *img = NULL;
    BYTE buffer[BlockSize];
    char CurrentImg[8];
    int count = 0;
    //check if the input argument is valid
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE")
        return 1;
    }
    //Open MemoryCard
    FILE *MemoryCard = fopen (argv[1], "r");
    // check if this isn't a nullptr
    if (MemoryCard == NUll)
    {
        printf("Error While Opining the Image")
        return 2;
    }
    //Repeat until end of card:
    //Read 512 bytes into a buffer
    while (fread(buffer, sizeof(BYTE), BlockSize, MemoryCard) == BlockSize)
    {
        //if start of a new JPEG
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            //Check if this old JPEG and close it
            if (img != NULL)
            {
                fclose(img);
            }
            //if first JPEG
            //Write into ###.JPEG
            sprintf(CurrentImg, "%03i.JPEG", count);
            img = 


            //else
        }


        //else
            // if already found the JPEG

    //close any remaining files
    }

}
