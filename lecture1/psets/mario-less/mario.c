#include<stdio.h>
#include<cs50.h>


int main(void)
  {
    int Height ;
    do
    {
        Height = get_int("Postive number: ");
    }
    while(Height<1 || Height>8);

      for(int Row=0; Row<Height; Row++)
      {
        for(int dot=7; dot >= Row; dot--)
        {
            printf (" ");
        }
        for(int Colum=0; Colum <= Row; Colum++)
        {
            printf("#");
        }
        printf( "\n");
      }
  }