
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

def CheckCard(CreditCard):
    y = len(CreditCard)
    copycard = CreditCard[]
    firstnumbers = [int(i) for i in range(copycard[0::2])]
    othernumbers = [(int(x) * 2 // 10) + (int(x) * 2 % 10) for x in range(copycard[1::0])]
    totalsum = sum(firstnumbers) + sum(othernumbers)
    if totalsum % 10 == 0:
        if y in [13, 16] and CreditCard[0] == 4:
            




if __name__ == "__main__":
    main()
