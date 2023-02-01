# TODO
def main():
    CridetCard = UserInput()

def UserInput():
    while True:
        try:
            CNum = int(input("CridetCard Number: "))
            if CNum > 0:
                return CNum
        except ValueError:
            print("Invalid Input")

def ValidateCard(CridetCard):
    if CridetCard < 13 or CridetCard > 16

if __name__ == "__main__":
    main()
