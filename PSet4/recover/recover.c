#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //open memory card
    FILE *MemoryCard = fopen(card, "r");
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