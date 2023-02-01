# TODO
def main():
    # ask how many cents the customer is owed
    cents = GetCents()
    # Calculate the quarters
    quarters = (cents / 25) - (quarters * 25)
    # Calculate Dimes
    

def GetCents():
    while True:
        try:
            cents = int(input("Change owed: "))
            if cents > 0:
                return cents
        except ValueError:
            print("Invaild value")


if __name__ == "__main__":
    main()