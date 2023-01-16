#include <cs50.h>
#include <stdio.h>
#include <string.h>

int candidates_votes=5;
int candidates_count=10;

int main(void)
{
    double percent = candidates_votes / candidates_count;
    printf("%f \n",percent);
}