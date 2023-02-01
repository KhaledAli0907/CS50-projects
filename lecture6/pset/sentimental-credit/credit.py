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
    # store the length of CridetCard Num.
    x = len(CreditCard)
    # check if the length is valid
    if x < 13 or x > 16:
        print("Inavild Card number")
        sys.exit(0)

    even, odd = 0, 0
    if x % 2 == 0:
        for i in range(x):
            num = int(CreditCard[i])
            if i % 2 == 0:
                multiply = num * 2
                if multiply >= 10:
                    even += multiply // 10
                    even += multiply % 10
                else:
                    even += multiply
            else:
                odd += num

    else:
        for j in range(x)


if __name__ == "__main__":
    main()
