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
        for rows in reader:
            database.append(rows)

    # TODO: Read DNA sequence file into a variable
    FileD = sys.argv[2]
    with open(FileD, "r") as DNA:
        DNASeq = DNA.read()
    # TODO: Find longest match of each STR in DNA sequence
    STRcount={}
    for STR in header:
        # Varabils to hold the current and lognset sequenses
        i = 0
        LSeq = 0
        CSeq = 0
        while i < len(DNASeq):
            # get the Current STR
            CSTR = DNASeq[i: i + len(DNASeq)]
            if CSTR == STR:
                # increment the CSeq with 1
                CSeq += 1
                # Set The index == STR
                i = len(STR)
            else:
                # Set the Longest seq. = to current and reset the current count
                if CSeq > LSeq:
                    LSeq = CSeq
                CSeq = 0
                i += 1
        STRcount[STR] = LSeq

    print(STRcount)

    # TODO: Check database for matching profiles

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
