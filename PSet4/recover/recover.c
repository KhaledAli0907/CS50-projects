#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#define BlockSize 512

int main(int argc, char *argv[])
{
    //declaring variables
    typedef uint8_t BYTE;
    BYTE buffer[BlockSize];
    size_t BytesRead;
    bool FirstJPEG = false;
    FILE *img = NULL;
    FILE *MemoryCard;
    int counter = 0;
    char filename[8]; // 8 because of the 7 characters and the null pointer

    //make sure the input command is right
    if (argc != 2)
    {
        printf("Usage : ./recover image \n");
        return 1;
    }
    //open memory card
    MemoryCard = fopen(argv[1], "r");
    if (MemoryCard == NULL)
    {
        printf("Error while opining the card \n");
        return 1;
    }

    //repeat untill end of the card
    //read 512 bytes intobuffer
    while(fread(buffer, sizeof(BYTE), BlockSize, MemoryCard) == BlockSize)
        {
            //if start of new JPEG
            if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
            {
                if (img != NULL)
                {
                    fclose(img);
                }
                sprintf(filename, "%03i.JPG", counter);
                img = fopen(filename, "w");
                counter++;
            }
            if (img != NULL)
            {
                fwrite(buffer, sizeof(BYTE), BlockSize, img);
            }
            if (BytesRead == BlockSize)
            {
                break;
            }
        }
        //close the opend files
        fclose(MemoryCard);
        fclose(img);

}
//start writing new



            //else
                //keep writing
        //else
            //if alreadyfound JPEG