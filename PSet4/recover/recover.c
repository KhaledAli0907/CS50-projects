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
    BYTE Buffer[BlockSize];
    //repeat untill end of the card
    while(fread(Buffer, sizeof(BYTE), BlockSize, MemoryCard))
        //read 512 bytes intobuffer
        //if start of new JPEG
            //if first JPEG
                //start writing new
            //else
                //keep writing
        //else
            //if alreadyfound JPEG
}