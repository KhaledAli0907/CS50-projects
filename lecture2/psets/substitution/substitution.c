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
    // validate it's alpha chars. with no dubs.
    for (int x = 0; x < strlen(key); x++)
    {
        // check alpha
        if (!isalpha(key[x]))
        {
            printf("Usage: ./substitution Alphakey");
            return 1;
        }
        // check for dubs.
        for (int y = x + 1; y < strlen(key); y++)
        {
            if (toupper(key[x]) == toupper(key[y]))
            {
                print("No dublicate chars allowed");
                return 2;
            }
        }
    }
    // check it's a 26 chars
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.");
        return 2;
    }
    // promt the user for text
    string Text = get_string("plaintext: \n");
    // print the cypherd text
    printf("ciphertext: ");
    //encryption loop
    for (int i = 0; i < strlen(Text); i++)
    {
        
    }
}