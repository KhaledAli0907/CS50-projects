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
    if CreditCard < 13 or CreditCard > 16:
        print("Inavild Card number")
        sys.exit(0)

    if CreditCard % 2 == 0:
        for i in range()

if __name__ == "__main__":
    main()
