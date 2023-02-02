#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    // store the key in string
    string key = argv[1];
    // check the command line argument
    if (argc != 2)
    {
        printf("Usage: ./substitution key");
        return 1;
    }
    // validate it's a 26 alpha chars.
    for (int i = 0; i < strlen(key); i++)
    {
        // check alpha
        if (!isalpha(key[i]))
        {
            printf("Usage: ./substitution Alphakey");
            return 1;
        }
        // check it's a 26 chars.
        for (int j = i + 1; j < strlen(key); j++)
        {
            if (key[i] == key[j])
            {
                print(")
            }
        }
    }
}