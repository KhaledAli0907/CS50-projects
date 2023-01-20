#include "helpers.h"
#include <math.h>

int MaxInteger = 255;
int originalRed = image[i][j].rgbtRed;
int originalBlue = image[i][j].rgbtBlue;
int originalGreen = image[i][j].rgbtGreen;
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            //calculate the avreage RGB values
            float AverageRGB = ((originalRed + originalGreen + originalBlue) / 3);
            //Round the Average to the nearest integer
            int Average = round(AverageRGB);
            //Set the RGB values to the Average to create the filter
            originalRed = Average;
            originalGreen = Average;
            originalBlue = Average;
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
            //feeding the sepia filter equation
            int SepiaFilter = ()
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
