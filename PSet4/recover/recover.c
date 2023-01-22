#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
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
        printf("Usage: ./recover IMAGE \n");
        return 1;
    }
    //Open MemoryCard
    FILE *MemoryCard = fopen (argv[1], "r");
    // check if this isn't a nullptr
    if (MemoryCard == NULL)
    {
        printf("Error While Opining Image \n");
        return 2;
    }
    //Repeat until end of card:
    //Read 512 bytes into a buffer
    while (fread(buffer, sizeof(BYTE), BlockSize, MemoryCard) == BlockSize)
    {
        //if start of a new JPG
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            //Check if this old JPG and close it
            if (img != NULL)
            {
                fclose(img);
            }
            //if first JPEG
            //Write into ###.JPG
            sprintf(CurrentImg, "%03i.jpg", count);
            count++;
            img = fopen(CurrentImg,"w");
        }
        //Keep Writing if it is not a new JPEG
        if (img != NULL)
        {
            fwrite(buffer, sizeof(BYTE), BlockSize, img);
        }

    }
    //close any remaining files
     //close the outptr
    if (img != NULL)
    {
        fclose(img);
    }
    fclose(MemoryCard);
    return 0;
}
