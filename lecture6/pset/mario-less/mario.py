from cs50 import get_int
def main():
    height = get_height()
    for row in range(height):
        for dot in range(row):
            print(".", end="")
        for colom in range(row):
            print("#", end="")
        print()


#function to get hight
def get_height():
    while True:
        #get the user input while its between 1 and 8
        n = get_int("Height: ")
        if n > 0 or n <= 8:
            return n
        except ValueError:
            print("not between 1 and 8")

main()

