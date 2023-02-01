
def main():
    CreditCard = UserInput()

    CheckCard(CreditCard)

def UserInput():
    while True:
        try:
            CNum = int(input("CridetCard Number: "))
            if CNum > 0:
                return CNum
        except ValueError:
            print("Invalid Input")

def CheckCard(CreditCard):
    # Hold the Card num. length
    while
    # Copy the Card into list to modify
    copycard = CreditCard[::-1]
    # apply the algorithm
    firstnumbers = [int(i) for i in range(copycard[0::2])]
    othernumbers = [(int(x) * 2 // 10) + (int(x) * 2 % 10) for x in range(copycard[1::0])]
    totalsum = sum(firstnumbers) + sum(othernumbers)
    #check the type of Card if it's valid
    if totalsum % 10 == 0:
        if y in [13, 16] and CreditCard[0] == 4:
            print("VISA")
        elif y == 15 and CreditCard[0:2] in [34, 37]:
            print("AMEX")
        elif y == 16 and 51 <= CreditCard[0:2] <= 56:
            print("MASTERCARD")
        else:
            print("invalid")
    else:
        print("INVALID")





if __name__ == "__main__":
    main()
