#include<stdio.h>
#include<cs50.h>

//Max number of candidates
#define MAX 9
//Creating Candidate attributes.
typedf struct
{
    string name;
    int vote;
}
candidate;

//creating the array
candidate candidates[Max];
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
        string VotersName= get_string
    }
}

bool vote(string name)
{
    if(vote[] != candidates[].name)
    {
        printf("invalid vote")
    }
    return false
}

void print_winner(void)
{

}