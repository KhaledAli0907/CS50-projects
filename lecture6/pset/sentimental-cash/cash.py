# TODO
def main():
    # ask how many cents the customer is owed
    cents = round(GetCents() * 100)
    # Calculate the quarters
    quarters = CalculateQuarters(cents)
    cents = cents - quarters * 25
    # Calculate Dimes
    dimes = CalculateDimes(cents)
    cents = cents - dimes * 10
    # Calculate Nickels
    nickels = CalculateNickels(cents)
    cents = cents - nickels * 5
    # Calculate Pennies
    pennies = CalculatePennies(cents)
    cents = cents - pennies * 1
    # The total coind owned
    coins = quarters + dimes + nickels + pennies
    print(f"{coins}")

def GetCents():
    while True:
        try:
            cents = float(input("Change owed: "))
            if cents > 0:
                return cents
        except ValueError:
            print("Invaild value")

def CalculateQuarters(cents):
    q = cents / 25
    return q

def CalculateDimes(cents):
    d = cents / 10
    return d

def CalculateNickels(cents):
    n = cents / 5
    return n

def CalculatePennies(cents):
    p = cents / 1
    return p


if __name__ == "__main__":
    main()