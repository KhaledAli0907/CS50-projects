#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
string text = get_string("Text: ");

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    float L = 65*100/ 14;

    float S = (sentences * 100 / words);

    float index = (0.0588 * L) - (0.296 * S) - 15.8;

    printf("%i letters\n", letters);
    printf("%i words\n", words);
    printf("%i sentences\n", sentences);
    printf("%f S\n", S);
    printf("%f L\n", L);
    printf("%f index\n", index);
}

int count_letters(string text)
{
    int letters=0;
    for(int i=0; i<strlen(text); i++)
    {
        if(isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int count_words(string text)
{
   int words =0;
   for(int j=0; j<strlen(text); j++)
{
    if(isspace(text[j]))
    {
        words++;
    }
}
return words+1;
}

int count_sentences(string text)
{
   int sentences =0;
   for(int k=0; k<strlen(text); k++)
   {
     if(text[k] == '!' || text[k] == '?' || text[k] == '.')
     {
       sentences++;
     }
   }
   return sentences;
}