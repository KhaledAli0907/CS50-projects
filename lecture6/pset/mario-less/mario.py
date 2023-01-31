from cs50 import get_int
height = get_height()


#function to get hight
def get_height():
    while True:
        n = get_int()
        if n > 0 or n <= 8:
            return n



