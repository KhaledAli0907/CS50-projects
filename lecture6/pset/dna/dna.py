import csv
import sys


def main():
    # Dealaring lists to sstore STRs and People


    # TODO: Check for command-line usage
    if len(sys.argv) != 3:
        print("Usage : python dna.py data.csv sequence.txt")

    # TODO: Read database file into a variable
    database = []
    FileB = sys.argv[1]
    with open(FileB, "r") as DataBase:
        reader = csv.DictReader(DataBase)
        header = reader.fieldnames[1:]

    # TODO: Read DNA sequence file into a variable
    FileD = sys.argv[2]
    with open(FileD, "r") as DNA:
        DNASeq = DNA.read()
    # TODO: Find longest match of each STR in DNA sequence
    STRseq = {}

    # iterate over the header
    for i in header:
        STRseq[i] = (longest_match(header, i))
    # TODO: Check database for matching profiles
    STRcount = 'NoMatch'
    Dnacounter = 1
    # 2d list to go throgh the list
    for i in len(header):
        for j in STRseq[]:
            # compare the values
            if str(STRseq[i] == header[i][j]):
                Dnacounter += 1


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
