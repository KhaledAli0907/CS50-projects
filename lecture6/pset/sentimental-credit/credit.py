from cs50 import get_string


CreditCard = get_string("CreditCard Number: ")
# Hold the Card num. length
y = len(CreditCard)
# Copy the Card into list to modify
copycard = CreditCard[::-1]
# apply the algorithm with list comprehension
firstnumbers = [int(i) for i in copycard[0::2]]
othernumbers = [(int(x) * 2 // 10) + (int(x) * 2 % 10) for x in copycard[1::2]]
totalsum = sum(firstnumbers) + sum(othernumbers)
#check the type of Card if it's valid
if totalsum % 10 == 0:
    if y in [13, 16] and CreditCard[0] == '4':
        print("VISA")
    elif y == 15 and CreditCard[0:2] in ['34', '37']:
        print("AMEX")
    elif y == 16 and 51 <= int(CreditCard[0:2]) <= 56:
        print("MASTERCARD")
    else:
        print("invalid")
else:
    print("INVALID")
