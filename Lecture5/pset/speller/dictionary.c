// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <string.h>

#include "dictionary.h"

//decalre variables
int WordsCount= 0;

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 17576;

// Hash table
node *table[N];

//function to insert nodes at head
node *InsertAtHead(node **head, node*NewNode)
{
    NewNode->next = *head;
    *head = NewNode;
    return NewNode;
}
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
    int sum = 0;
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        sum += word[i];
    }
    return sum % N;
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
    while (fscanf(f, "%s", Word) != EOF)
    {
        //create new node for each word
        node *WordNode = malloc(sizeof(node));
        //check there is enough memory
        if (WordNode == NULL)
        {
            printf("No enough memory");
            return false;
        }
        //copy word into node
        strcpy(WordNode->word, Word);
        WordNode->next = NULL;

        //Hashing the word
        int HashOrder = hash(Word);
        //insert at hash order if it's empty
        if (table[HashOrder] == NULL)
        {
            table[HashOrder] = WordNode;
        }
        //else if it isn't
        else
        {
            InsertAtHead(table[HashOrder], WordNode);
        }
        WordsCount++;
    }
    return false;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return WordsCount;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
