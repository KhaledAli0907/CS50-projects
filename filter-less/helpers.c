#include "helpers.h"
#include <math.h>

//Declaring the Varuables
int MaxValue = 255;
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for ( int j = 0; j < width; j++)
        {
            //calculate the avreage RGB values
            float AverageRGB = ((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3);
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
                //feeding the sepia filter equations
                int SepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue);
                if(SepiaRed > MaxValue) //making sure that the values between 0 and 255
                {
                    SepiaRed = MaxValue;
                }
                int SepiaGreen = round(.349 * image[i][j].rgbtRed + .686 *  image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue);
                if(SepiaGreen > MaxValue)
                {
                    SepiaGreen = MaxValue;
                }
                int SepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue);
                if(SepiaBlue > MaxValue)
                {
                    SepiaBlue = MaxValue;
                }
        }

    return;
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
