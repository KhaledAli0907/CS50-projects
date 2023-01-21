#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define BlockSize 512

int main(int argc, char *argv[])
{
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
    typedef uint8_t BYTE;
    BYTE buffer[BlockSize];

    size_t BytesRead;
    //repeat untill end of the card
    while(fread(buffer, sizeof(BYTE), BlockSize, MemoryCard))
        {
            if(BytesRead == 0)
            {
                break;
            }
            if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
            {
                fwrite(buffer[0])
            }
        }
}



//read 512 bytes intobuffer
        //if start of new JPEG
            //if first JPEG
                //start writing new
            //else
                //keep writing
        //else
            //if alreadyfound JPEG