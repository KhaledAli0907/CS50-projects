#include "helpers.h"
#include <math.h>

//Declaring the Varuables

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
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
    for (int i = 0; i < height; i++)
    {
        //declare a variable to track the position
        int Position = 0;
        for (int j = width - 1; j >= 0 ; j--, Position++)
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
void blur(int height, int width, RGBTRIPLE image[heigeht][width])
{
    //make the temp array
    RGBTRIPLE temp[height][width];
    // make nested loop to check all the pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            //make Variable to know Box Pixels count
            int Count = 0;
            //make an array for colums and row to declare the square we are changin
            int RowCords[] = {i - 1, i, i + 1};
            int ColCords[] = {j - 1, j, j + 1};
            //Declare total RGB Values varables
            float TotalRed = 0, TotalGreen = 0, TotalBlue = 0;
            //make nested loop to calculate and check all the box Pixels
            for (int R = 0; R < 3; R++)
            {
                for (int C = 0; C < 3; C++)
                {
                    //Declare current Row and Columes
                    int CurRow = RowCords[R];
                    int CurCol = ColCords[C];
                    //check if the pixels in the valid range
                    if (CurRow >= 0 && CurRow < height && CurCol >= 0 && CurCol < width)
                    {
                        //Make A box of pixels image from these colums and rows
                        RGBTRIPLE Box = image[CurRow][CurCol];
                        //Calculate the total values
                        TotalRed += Box.rgbtRed;
                        TotalGreen += Box.rgbtGreen;
                        TotalBlue += Box.rgbtBlue;
                        Count++;
                    }
                }
            }
            //Pass the Values to the Temp image
            temp[i][j].rgbtRed = round(TotalRed / Count);
            temp[i][j].rgbtGreen = round(TotalGreen / Count);
            temp[i][j].rgbtBlue = round(TotalBlue / Count);
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
