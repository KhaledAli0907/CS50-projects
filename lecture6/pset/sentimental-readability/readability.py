# TODO
from cs50 import get_string()

def main():
    # get the input from user
    text = get_string("Enter Text Here: ")
    # declaring variables
    letters = 0
    words = 0
    sentence = 0
    # loop to go through text
    for i in range(len(text)):
        if str.isalpha(text):
            letters += 1
        elif str.isspace(text):
            words += 1
        elif text[i] == '.' or text[i] == '?' or text[i] == '!':
            sentence += 1
    # 




if __name__ == "__main__":
    main()