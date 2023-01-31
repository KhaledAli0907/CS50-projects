# TODO
from cs50 import get_string

def main():
    # get the input from user
    text = get_string("Enter Text Here: ")
    # declaring variables
    letters = 0
    words = 0
    sentences = 0
    # loop to go through text
    for i in range(len(text)):
        if str.isalpha(text):
            letters += 1
        elif str.isspace(text):
            words += 1
        elif text[i] == '.' or text[i] == '?' or text[i] == '!':
            sentences += 1
    # calculate L, S and Grade values
    L = (letters * 100) / (words + 1)
    S = (sentences * 100) / (words + 1)
    Grade = 0.0588 * L - 0.296 * S - 15.8
    # Print Grade
    #if it's less than 1
    if int(Grade) <= 1:
        print("Before Grade 1")
    # if it's between 1 and 16
    elif int(Grade) > 1 and int(Grade) < 16:
        print(f"Grade: {Grade}")
    # if it's more than 16
    elif int(Grade) >= 16:
        print("Grade 16+")



if __name__ == "__main__":
    main()