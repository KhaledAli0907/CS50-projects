from cs50 import get_int
def main():
    height = get_height()
    for i in range(height):
        print(" ", end="")
        for j in range(i):
            print("#")
        print()



#function to get hight
def get_height():
    while True:
        #get the user input while its between 1 and 8
        n = get_int("Height: ")
        if n > 0 or n <= 8:
            return n

main()

