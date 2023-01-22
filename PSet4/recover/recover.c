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
    while(fread(MemoryCard))
        //Read 512 bytes into a buffer

        //if start of a new JPEG
            //if first JPEG

            //else

        //else
            // if already found the JPEG

    //close any remaining files
}
