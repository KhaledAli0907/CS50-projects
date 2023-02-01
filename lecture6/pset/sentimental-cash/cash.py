# TODO
def main():
    # Variable to keep track of coins
    coins = 0
    # ask how many cents the customer is owed
    cents = GetCents()
    # Calculate the quarters
    while cents > 0:
        if cents >= 25:
            cents = cents - 25
            coins += 1
        elif cents >= 10:
            cents = cents - 10
            coins += 1
        elif cents >= 5:
            cents = cents - 5
            coins += 1
        elif cents >= 1:
            cents = cents - 1
            coins += 1
    print(coins)


def GetCents():
    while True:
        try:
            change = float(input("Change owed: "))
            cents = round(change * 100)
            if cents > 0:
                return cents
        except ValueError:
            print("Invaild value")


if __name__ == "__main__":
    main()