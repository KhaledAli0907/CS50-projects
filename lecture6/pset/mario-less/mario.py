def main():
    #store height
    height = get_height()
    #loop to through rows
    for row in range(height):
        #loop to print spaces
        for space in range(height, row+1, -1):
            print(" ", end="")
        #loop to print hashes
        for hash in range(0, row+1, 1):
            print("#", end="")
        print()


#function to get hight
def get_height():
    while True:
        try:
            #get the user input while its between 1 and 8
            n = int(input("Height: "))
            if n > 0 and n <= 8:
                return n
        except ValueError:
            print("not between 1 and 8")



main()

