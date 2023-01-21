#include "helpers.h"
#include <math.h>

//Declaring the Varuables

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for ( int j = 0; j < width; j++)
        {
            //calculate the avreage RGB values
            float AverageRGB = ((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.0);
            //Round the Average to the nearest integer
            int Average = round(AverageRGB);
            //Set the RGB values to the Average to create the filter
            image[i][j].rgbtRed = Average;
            image[i][j].rgbtGreen = Average;
            image[i][j].rgbtBlue = Average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            RGBTRIPLE Pixels = image[i][j];
            //sepia filter equations and rounding
             //Red equation
             int SepiaRed = round(.393 * Pixels.rgbtRed + .769 * Pixels.rgbtGreen + .189 * Pixels.rgbtBlue);
             //Green equation
             int SepiaGreen = round(.349 * Pixels.rgbtRed + .686 *  Pixels.rgbtGreen + .168 * Pixels.rgbtBlue);
             //Blue equation
             int SepiaBlue = round(.272 * Pixels.rgbtRed + .534 * Pixels.rgbtGreen + .131 * Pixels.rgbtBlue);

            //Feeding pixels with the new data and checking the exceded values
             //RedPixels
             image[i][j].rgbtRed = (SepiaRed > 255) ? 255 : SepiaRed;
             //GreenPixels
             image[i][j].rgbtGreen = (SepiaGreen > 255) ? 255 : SepiaGreen;
             //BluePixels
             image[i][j].rgbtBlue = (SepiaBlue > 255) ? 255 : SepiaBlue;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    //temp array to reflect pixels in it then recopy to the original image
    RGBTRIPLE temp[height][width];
    //reflect the pixles
    for(int i = 0; i < height; i++)
        {
            //declare a variable to track the position
            int Position = 0;
            for(int j = width-1; j >= 0 ; j--, Position++)
            {
                temp[i][Position] = image[i][j];

            }
        }
    //copy the temp to the image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = temp[i][j];
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
