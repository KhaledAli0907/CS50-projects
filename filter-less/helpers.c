#include "helpers.h"
#include <math.h>

int MaxInteger = 255;
// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            //calculate the avreage RGB values
            float AverageRGB = ((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3);
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
    
    return;
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
