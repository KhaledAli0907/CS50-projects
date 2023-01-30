

greet = input("Greeting: ")
greet = greet.lower()
if greet[:2] in ["h" + "e"]:
    print("0$")
elif greet[:1] == "h":
    print("20$")
else:
    print("100$")
