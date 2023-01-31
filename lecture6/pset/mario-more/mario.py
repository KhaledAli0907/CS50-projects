# TODO
def main():
    # Set the height value
    height = get_height()
    # loop to go through rows
    for row in range(height):
        # loop to print spaces
        for space in range(height, row+1, -1):
            print(" ", end="")
        # loop to print hashes
        for hash in range(0, row+1, +1):
            print("#", end="")
        # print gape
        print("  ", end="")
        # loop to print hashes again
        for hashes in range(0, row+1, +1):
            print("#", end="")
        # Print new line
        print()


# Fuction to ask for valid user input
def get_height():
    while True:
        try:
            # Get input from the user
            n = int(input("Enter Height: "))
            # make user it's between 1 and 8
            if n >= 1 and n <= 8:
                return n
        except ValueError:
            print("Invalid Number")


if __name__ == "__main__":
    main()
