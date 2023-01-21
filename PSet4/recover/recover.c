#include <stdio.h>
#include <stdlib.h>

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
    //repeat untill end of the card

        //read 512 bytes intobuffer
        //if start of new JPEG
            //if first JPEG
                //start writing new
            //else
                //keep writing
        //else
            //if alreadyfound JPEG
}