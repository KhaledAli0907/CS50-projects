// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <string.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 17,576;

// Hash table
node *table[N];


// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    //declaring varablies
    node *temp = NULL;
    char *Word[LENGTH + 1];
    //Open File
    FILE *f = fopen(dictionary, "r");
    //make its't null
    if (f == NULL)
    {
        printf("Can't open file");
        return false;
    }
    //read words into file
    while (fscanf(f, "%s", word) != EOF)
    {
        //create new node
        node *WordNode == malloc(sizeof(node));
        //check there is enough memory
        if (WordNode == NULL)
        {
            printf("No enough memory");
            return false;
        }
        strcpy(WordNode->word, f);
    }


    return false;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
