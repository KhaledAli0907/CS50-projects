#include<stdio.h>
#include<cs50.h>
#include <string.h>

//Max number of candidates
#define MAX 9
//Creating Candidate attributes.
typedef struct
{
    string name;
    int vote;
}
candidate;

//creating the array
candidate candidates[MAX];
int candidate_Count;

bool vote(string name);
void print_winner(void);

int main(int argc ,string argv[])
{
    if(argc < 2)
    {
        printf("Invalid Number Of Candidates");
        return 1;
    }
    candidate_count = argc - 1;
    //checking the number of candidates
    if(candidate_count > MAX)
    {
        printf("Maximum Number of candidates is: %i",MAX);
        return 2;
    }
    for(int i = 0; i <candidate_count; i++)
    {
        candidates[i].name = argv[i+1];
        candidates[i].votes= 0;
    }
    int voters_count = get_int("Numbers of voters: \n");

    //Loop checking voters
    for(int i = 0; i < voters_count; i++)
    {
        string VotersName= get_string("Voters name: \n");
        //checkig the vote name
        if(!vote(name))
        {
            printf("Invalid Vote: \n");
        }
    }
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // TODO
    for(int i =0; i<candidate_count; i++ )
    {
        //comparing the input and candidates name
        if(strcmp(candidates[i].name, name) == 0)
        {
            candidates[i].votes ++;
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // TODO
    int TopVote = 0;
    for(int i =0; i <candidate_count ; i++)
    {
        //fequring the winner's votes
        if(candidates[i].votes > TopVote)
        {
            TopVote = candidates[i].votes;
        }
    }
    for(int i =0; i <candidate_count ; i++)
    {
        if(candidates[i].votes == TopVote)
        {
            printf("The winner is : %s \n",candidates[i].name);
        }
    }
    return;
}

