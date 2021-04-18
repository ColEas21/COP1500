# Collin Easley
# This is a information query on the capitals of Europe as of January 21 2021
# The  countries are based off of nations online
#
__author__ = "Collin Easley"

# from typing import List, Any, Callable
# from typing import List

print("Welcome to my integration project!")
print("The countries of Europe:")

euroList = ["Albania", "Andorra", "Armenia", "Austria", "Azerbaijan",
            "Belarus", "Belgium", "Bosnia and Herzegovina", "Bulgaria",
            "Croatia",
            "Cyprus", "Czech Republic", "Denmark", "Estonia", "Finland",
            "France",
            "Georgia", "Germany", "Greece", "Hungary", "Iceland",
            "Ireland",
            "Italy", "Kazakhstan", "Kosovo", "Latvia", "Liechtenstein",
            "Lithuania", "Luxembourg", "Malta", "Moldova", "Monaco",
            "Montenegro",
            "Netherlands", "North Macedonia", "Norway", "Poland",
            "Portugal",
            "Romania", "Russia", "San Marino", "Serbia", "Slovakia",
            "Slovenia",
            "Spain", "Sweden", "Switzerland", "Turkey", "Ukraine",
            "United Kingdom",
            "Vatican City"]
eur_cites = ["Tirana", "Andorra La Vella", "Yerevan", "Vienna", "Baku",
             "Minsk",
             "Brussels", "Sarajevo", "Sofia",
             "Zagreb",
             "Nicosia", "Prague", "Copenhagen", "Talinn",
             "Helsinki", "Paris", "Tbilisi", "Berlin", "Athens", "Budapest",
             "Reykjavik", "Dublin", "Rome",
             "Nur-Sultan",
             "Pristina", "Riga", "Vaduz", "Vilnus", "Luxembourg City",
             "Valletta", "Chișinău", "Monaco",
             "Podgorica",
             "Amsterdam", "Skopje", "Oslo", "Warsaw", "Lisbon", "Bucharest",
             "Moscow", "San Marino", "Belgrade",
             "Bratislava",
             "Ljubljana", "Madrid", "Stockholm", "Bern", "Ankara", "Kiev",
             "London", "Vatican City"]
weur_list = ["Belgium", "France", "Luxembourg", "Netherlands",
             "United Kingdom", "Ireland"]
e_euro = ["Belarus", "Bulgaria", "Moldova", "Russia", "Ukraine"]
seur_list = ["Malta", "San Marino", "Monaco", "Italy", "Spain", "Portugal",
             "Vatican City", "Andorra"]
eurasia_list = ["Azerbaijan", "Kazakhstan", "Georgia", "Armenia", "Turkey"]
southe_eur = ["Albania", "Bosnia and Herzegovina", "Croatia", "Cyprus",
              "Greece", "Kosovo", "Montenegro", "North Macedonia",
              "Romania", "Serbia", "Slovenia"]
c_euro = ["Austria", "Czech Republic", "Germany", "Hungary", "Liechtenstein",
          "Poland", "Slovakia", "Switzerland"]
n_euro = ["Denmark", "Estonia", "Finland", "Iceland", "Latvia", "Lithuania",
          "Norway", "Sweden"]

pop_tuple = (
    2000000 + 877639, 77387, 2968536, 9070940, 10226892, 9452040, 11642916,
    3260133, 6908384, 4083735,
    1196710, 10731698, 5807597, 1330573, 5549442, 65381070 + (5 % 4), 3985670,
    84228453, 10386201, 9643738, 343244, 4999400 + (9 ** 2),
    60411334,
    18976100, 1798506, 1868269, 38216, 2686234, 636953, 514560 + (8 - 4),
    4027684, 39477, 628308, 17164965, 2084363, 5453259,
    37826960 + (5 // 4),
    10172397, 19112338, 146121379, 33995, 8717567, 5464219, 2080125, 46815933,
    10153974, 8711003, 85427222, 43542732,
    68235124, 795)
gdp_list = [14034 * 1000000000, 3238000000, 12813000000, 432894000000,
            41666000000, 57708000000, 503416000000, 18893000000,
            67917000000, 56768000000, 23246000000, 241975000000, 339626000000,
            30468000000, 267856000000, 2551451000000,
            16316000000, 3780553000000, 194376000000, 149939000000,
            20805000000, 399064000000, 7484000000,
            1848222000000, 569813000000,
            33015000000, 6215000000, 55064000000, 68613000000, 14290000000,
            11241000000, 7188000000, 4943000000,
            886339000000,
            412510000000, 366386000000, 580894000000, 221716000000,
            248624000000, 1464078000000, 1410000000,
            51999000000,
            101892000000, 51802000000, 1247464000000, 529054000000,
            707868000000, 649436000000, 142250000000,
            2638296000000, 0]
eu_list = ["Austria", "Belgium", "Bulgaria", "Croatia", "Cyprus",
           "Czech Republic", "Denmark", "Estonia", "Finland",
           "France",
           "Germany", "Greece", "Hungary", "Ireland", "Italy", "Latvia",
           "Lithuania", "Luxembourg", "Malta",
           "Netherlands", "Poland", "Portugal",
           "Romania", "Slovakia", "Slovenia", "Spain", "Sweden"]
# Prints all the countries on the list in a more aesthetic fashion

for eur in range(len(euroList)):
    print(euroList[eur])


# prints the captial of the country the user entered
def printcap(eur_question):
    """

    :param eur_question:
    """
    n = euroList.index(eur_question)
    if eur_question in euroList:
        print("Capital: ", eur_cites[n])
    if eur_question == "Vatican City":
        print("City state")


# if the user enters a country with a popluation under 100 million it will
# let them know
def exceptions(eur_question):
    """

    :param eur_question: 
    """
    if eur_question != "Russia":
        print("Population under 100 million")


# prints the region of the inputted country

def printreg(eur_question):
    """

    :param eur_question:
    """
    if eur_question in e_euro:
        print("Region: Eastern Europe")
    if eur_question in weur_list:
        print("Region: Western Europe")
    if eur_question in seur_list:
        print("Region: Southern Europe")
    if eur_question in eurasia_list:
        print("Region: Eurasia")
    if eur_question in southe_eur:
        print("Region: Southeastern Europe")
    if eur_question in c_euro:
        print("Region: Central Europe")
    if eur_question in n_euro:
        print("Region: Northern Europe")
    elif eur_question not in euroList:
        print("Not in Europe")


# prints popluation of country the user entered
def printpop(eur_question):
    """

    :type eur_question: object
    :param eur_question:
    """
    w = euroList.index(eur_question)
    print("Population: ", pop_tuple[w])


# Takes the population tuple turns it into a list then puts the two lists
# together and divides them to create a new list which coorelates with
# euroList
def printgdp_pc(eur_question):
    """

    :param eur_question:
    """
    pop_list = list(pop_tuple)
    percap_gdp = []
    for gdp, pop in zip(gdp_list, pop_list):
        percap_gdp.append(gdp / pop)
    z = euroList.index(eur_question)
    print("Per captia GDP: ", format(percap_gdp[z], "0.2f"), sep="")


# lets the user know if the country is in the European Union

def in_eu(eur_question):
    """

    :type eur_question: eur_question
    :param eur_question:
    """
    while eur_question in eu_list:
        print("In the European union: ", 4 > 3 or 5 > 3)
        break
    if eur_question not in eu_list:
        print("In the European Union: ", 1 > 4 and 1 < 2)


def eur_info():
    """

    :return:
    """
    eur_info2 = lambda eur_question: [
        printcap(eur_question),
        exceptions(eur_question),
        printreg(eur_question),
        printpop(eur_question),
        printgdp_pc(eur_question),
        in_eu(eur_question)]
    eur_question = eur_info2(input("Enter country from list: "))


# This trys the input for the main question compares it to each function and
# compares the
def eur_quest():
    """
The input for the program
    """
    while True:
        try:
            eur_info()
            break
        except ValueError:
            print("Enter country on list")


eur_quest()
