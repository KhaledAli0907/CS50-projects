from cs50 import get_int
def main():
    height = get_height()
    for row in range(height):
        for dot in range(7, row, -1):
            print(".", end="")
        for colom in range(0, row, 1):
            print("#", end="")
        print()


#function to get hight
def get_height():
    while True:
        #get the user input while its between 1 and 8
        n = get_int("Height: ")
        if n > 0 or n <= 8:
            return n
        else:
            print("not between 1 and 8")

main()

