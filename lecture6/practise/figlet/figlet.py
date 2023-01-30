import sys
from pyfiglet import Figlet
import random


if len(sys.argv) == 2:
    print("please provide the name of the font")
    sys.exit(1)

figlet = Figlet()

if len(sys.argv) == 3:
    figlet.getFonts()
    figlet.setFont(sys.argv[1])
    print(figlet.renderText(argv[2]))

if len(sys.argv) == 1:
    random.Random(figlet)

