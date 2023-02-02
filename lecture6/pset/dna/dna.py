import csv
import sys


def main():
    # Dealaring lists to sstore STRs and People


    # TODO: Check for command-line usage
    if len(sys.argv) != 3:
        sys.exit("Usage: python dna.py data.csv sequence.txt")
    # TODO: Read database file into a variable
    DataBase = []
    FileD = sys.argv[1]
    with open(FileD, "r") as f:
        reader = csv.DictReader(f)
        for row in reader:
            DataBase.append(row)
    # TODO: Read DNA sequence file into a variable
    fileDNA = sys.argv[2]
    with open(fileDNA, "r") as fd:
        DNASeq = fd.read()
    # TODO: Find longest match of each STR in DNA sequence
    # Dict. to stroe the matches result
    matches = {}
    # make Subsequence of headers to pass into longestmatch function
    SubSeqs = list(DataBase[0].keys())[1:]
    # Store the result into the Dict.
    for SubSeq in SubSeqs:
        matches[SubSeq] = longest_match(DNASeq, SubSeq)

    # TODO: Check database for matching profiles
    # loop through DataBase
    for p in DataBase:
        result = 0
        #loop through persons to match the subsequence
        for SubSeq in SubSeqs:
            if 


    return


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
