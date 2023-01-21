#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    //create a nested loob to go through every pixel
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            //calculate the average RGB values
            int Average = round((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) / 3.00);
            //pass the Average value to the Pixels
            image[i][j].rgbtRed = Average;
            image[i][j].rgbtGreen = Average;
            image[i][j].rgbtBlue = Average;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    //create a temp RGPTRIBLE array
    RGBTRIPLE temp[height][width];
    //create nested loop to go through pixels
    for (int i = 0; i < height; i++)
    {
        //make a varible to keep track on the position
        int CurPosition = 0;
        for (int j = width - 1; j >=0; j--, CurPosition++)
        {
            temp[i][CurPosition] = image[i][j];
        }
    }

    // copy the temp  image into the image
    for (int i = 0; i < height; i++)
    {
        for (int j =0; j < width; j++)
        {
            image[i][j] = temp[i][j];
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    //create a temp array
    RGBTRIPLE temp[height][width];
    //create a nested loob to go through every pixel
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++)
        {
            //declare a variable to know the pixles count in the box
            int Count = 0;
            //take the coordinates of Rows and Colums
            int RowCords[] = {row - 1, row, row + 1};
            int ColCords[] = {col - 1, col, col + 1};
            //Declare the Total RGB values variables
            float TotalRed = 0, TotalGreen = 0, TotalBlue = 0;
            //create a new nested loop to go through the box's pixel
            for (int r = 0; r < 3; r++)
            {
                for (int c = 0; c < 3; c++)
                {
                    //Declare Current Row and Colom
                    int CurRow = RowCords[r];
                    int CurCol = ColCords[c];
                    //make sure the pixels are in the validn range
                    if (CurRow >= 0 && CurRow < height && CurCol >= 0 && CurCol < width)
                    {
                        //create a box Array of these Rows And Col.
                        RGBTRIPLE Box = image[CurRow][CurCol];
                        //Calculate the total amount for every color
                        TotalRed += Box.rgbtRed;
                        TotalGreen += Box.rgbtGreen;
                        TotalBlue += Box.rgbtBlue;
                        Count++;
                    }
                }
            }
            //Pass The Total Values to the temp array
            temp[row][col].rgbtRed = round(TotalRed / Count);
            temp[row][col].rgbtGreen = round(TotalGreen / Count);
            temp[row][col].rgbtBlue = round(TotalBlue / Count);
        }
    }
    //copy the temp array to the image array
    for (int i = 0 ; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = temp[i][j];
        }
    }
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    //create a temp array
    RGBTRIPLE temp[height][width];
    //create a nested loob to go through every pixel
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++)
        {
            //declare a variable to know the pixles count in the box
            int Count = 0;
            //take the coordinates of Rows and Colums
            int RowCords[] = {row - 1, row, row + 1};
            int ColCords[] = {col - 1, col, col + 1};
            //Declare the Total RGB values variables
            float TotalRed = 0, TotalGreen = 0, TotalBlue = 0;
            //create Gx and Gy arrays
            int Gx[] = {-1, 0, 1},
                       {-2, 0, 2},
                       {-1, 0, 1};
            int Gy[] = {-1, -2, -1},
                       {0, 0, 0},
                       {1, 2, 1};
            int GxBlack[] = {0}, {0}, {0};
            int GyBlack[] = {0, 0, 0};
            float GxRed = 0, GxGreen = 0, GxBlue = 0;
            float GyRed = 0, GyGreen = 0, GyBlue = 0;
            //create a new nested loop to go through the box's pixel
            for (int r = 0; r < 3; r++)
            {
                for (int c = 0; c < 3; c++)
                {
                    //Declare Current Row and Colom
                    int CurRow = RowCords[r];
                    int CurCol = ColCords[c];
                    //make sure all pixels in the valid range
                    if (CurRow >= 0 && CurRow < height && CurCol >= 0 && CurCol < width)
                    {
                        //Create the box Array
                        RGBTRIPLE Box = image[CurRow][CurCol];
                        TotalRed += Box.rgbtRed;
                        TotalGreen += Box.rgbtGreen;
                        TotalBlue += Box.rgbtBlue;
                        Count++;
                    }
                }
            }
            //calculate the SumGx and SumGy to create the
            int GxRed = round(TotalRed * Gx);
            int GxGreen = round(TotalGreen * Gx);
            int GxBlue = Round(TotalBlue * Gy)
            int SumGy = round((TotalRed + TotalGreen + TotalBlue) * Gx);
            int Sobel = SumGx ^ 2 + SumGy ^ 2;
        }
    }
    return;
}
