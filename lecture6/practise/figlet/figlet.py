import sys
from pyfiglet import Figlet


if len(sys.argv = 1):
    print("please provide the name of the font")
    sys.exit(1)

figlet = Figlet()

if len(sys.argv = 2):
    FigList = figlet.getFonts()
    FigList.setFont(argv[1])
    print()
