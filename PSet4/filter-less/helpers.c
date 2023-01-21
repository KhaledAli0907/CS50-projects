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
            //sepia filter equations and rounding
             //Red equation
             int SepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue);
             //Green equation
             int SepiaGreen = round(.349 * image[i][j].rgbtRed + .686 *  image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue);
             //Blue equation
             int SepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue);

            //Feeding pixels with the new data and checking the exceded values
             //RedPixels
             image[i][j].rgbtRed = (SepiaRed > 255) ? 255 : SepiaRed;
             //GreenPixels
             image[i][j].rgbtGreen = (SepiaGreen > 255) ? 255 : SepiaGreen;
             //BluePixels
             image[i][j].rgbtBlue = (SepiaBlue > 255) ? 255 : SepiaBlue;
        }
    return;
    }
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        //if the width even number
        if (width % 2 == 0 )
        {
            for (int j = 0; j < width; j++)
            {
                //store pixels info in temp 2D array
                RGBTRIPLE temp[height][width];
                //swaping the pixels
                temp[i][j] = image[i][j];
                image[i][j] = image[i][width - (j + 1)];
                image[i][width - (j + 1)] = temp[i][j];

            }
        }
        //if the width an odd number
        if (width % 2 != 0 )
        {
            for (int j = 0; j < (width-1); j++)
            {
                //store the data in a temp 2D array
                RGBTRIPLE temp[height][width];
                //swaping the pixels
                temp[i][j] = image[i][j];
                image[i][j]= image[i][width - (j+1)];
                image[i][width - (j+1)] = temp[i][j];
            }
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
