#include "helpers.h"
#include <math.h>

//Declaring the Varuables
int MaxValue = 255;
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
                //feeding the sepia filter equations
                int SepiaRed = round(.393 * originalRed + .769 * originalGreen + .189 * originalBlue);
                //if(SepiaRed > MaxValue) //making sure that the values between 0 and 255
                //{
                   // SepiaRed = MaxValue;
                //}
                int SepiaGreen = round(.349 * originalRed + .686 * originalGreen + .168 * originalBlue);
                //if(SepiaGreen > MaxValue)
                //{
                    //SepiaGreen = MaxValue;
                //}
                int SepiaBlue = round(.272 * originalRed + .534 * originalGreen + .131 * originalBlue);
                //if(SepiaBlue > MaxValue)
               //{
                  //  SepiaBlue = MaxValue;
                //}
                if (SepiaRed > MaxValue || SepiaGreen > MaxValue || SepiaBlue > MaxValue)
                {
                    SepiaRed = MaxValue;
                    SepiaGreen = MaxValue;
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
