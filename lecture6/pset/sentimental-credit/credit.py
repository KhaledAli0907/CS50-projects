# TODO
def main():
    x = UserInput()

def UserInput():
    while True:
        try:
            CNum = long(input("CridetCard Number: "))
            if CNum > 0:
                return CNum
        except ValueError:
            print("Invalid Input")



if __name__ == "__main__":
    main()
