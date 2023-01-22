#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define BlockSize 512

int main(int argc, char *argv[])
{
    //declaring variables
    typedef uint8_t BYTE;
    BYTE buffer[BlockSize];
    size_t BytesRead;

    //make sure the input command is right
    if (argc != 2)
    {
        printf("Usage : ./recover image \n");
        return 1;
    }
    //open memory card
    FILE *MemoryCard = fopen(argv[1], "r");
    if (MemoryCard == NULL)
    {
        printf("Error while opining the card \n")
        return 1;
    }

    //repeat untill end of the card
    //read 512 bytes intobuffer
    while(BytesRead = fread(buffer, sizeof(BYTE), BlockSize, MemoryCard) == BlockSize)
        {
            //if start of new JPEG
            if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
            {
                //if first JPEG
                fwrite(buffer[0], sizeof(BYTE), BlockSize, MemoryCard);

            }
        }
}






                //start writing new
            //else
                //keep writing
        //else
            //if alreadyfound JPEG