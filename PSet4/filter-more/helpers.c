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
    for (int i = 0; i < 0; i++)
    {
        for (int j =0; j < 0; j++)
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
    //create a nested loob
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++)
        {
            //declare a variable to know the pixles count in the box
            int Count = 0;
            //take the coordinates of Rows and Colums
            int RowCords[] = {row - 1, row, row + 1};
            int ColCords[] = {col - 1, col, col + 1};
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
                        RGBTRIPLE Box[CurRow][CurCol];
                        //
                    }
                }
            }
        }
    }

    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
