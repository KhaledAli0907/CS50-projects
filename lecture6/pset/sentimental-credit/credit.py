import sys


def main():
    CreditCard = UserInput()

def UserInput():
    while True:
        try:
            CNum = int(input("CridetCard Number: "))
            if CNum > 0:
                return CNum
        except ValueError:
            print("Invalid Input")

def ValidateCard(CreditCard):
    


if __name__ == "__main__":
    main()
