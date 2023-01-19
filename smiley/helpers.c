#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing
    for(int i= 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            //check if all pixels are black
            if(image[i][j].rgbtRed == 0x00 && image[i][j].rgbtGreen == 0x00 && image[i][j].rgbtBlue)
            {
                //turn Pixels to a mix of blue and green
                image[i][j].rgbtBlue == 0x6f;
                image[i][j].rgbtGreen == 0x1a;
            }
        }
    }
}
