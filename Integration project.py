# Collin Easley
# This is a information query on the capitals of Europe as of January 21 2021
# The  countries are based off of nations online
#

print("Welcome to my integration project!")
print("The countries of Europe:")

euroList = ["Albania", "Andorra", "Armenia", "Austria", "Azerbaijan",
            "Belarus", "Belgium", "Bosnia and Herzegovina", "Bulgaria", "Croatia",
            "Cyprus", "Czech Republic", "Denmark", "Estonia", "Finland", "France",
            "Georgia", "Germany", "Greece", "Hungary", "Iceland", "Ireland",
            "Italy", "Kazakhstan", "Kosovo", "Latvia", "Liechtenstein",
            "Lithuania", "Luxembourg", "Malta", "Moldova", "Monaco", "Montenegro",
            "Netherlands", "North Macedonia", "Norway", "Poland", "Portugal",
            "Romania", "Russia", "San Marino", "Serbia", "Slovakia", "Slovenia",
            "Spain", "Sweden", "Switzerland", "Turkey", "Ukraine", "United Kingdom",
            "Vatican City"]
# Prints all the countries on the list in a more aesthetic fashion
for eur in range(len(euroList)):
    print(euroList[eur], sep=" ")
question = str(input("\nEnter country from list: "))

# reigons of europe
se_euro = "Southeastern Europe"
s_euro = "Southern Europe"
e_euro = "Eastern Europe"
c_euro = "Central Europe"
w_euro = "Western Europe"
n_euro = "Northern Europe"
asia_euro = "Eurasia"

# base populations

# Vatican City
base_7hun = int(700)
# Liechtenstein, San Marino, Monaco
base_30tho = int(30000)
# andorra
base_70tho = int(70000)
# Iceland
base_300tho = int(300000)
# malta use ** in if statement
base_500tho = int(500000)
# Montenegro, Luxembourg
base_600tho = int(600000)
# Cyprus, Estonia, Kosovo, Lativa
base_1mill = int(1000000)
# Slovenia, Macedonia, Moldova, Lithuania, Albania, Armenia
base_2mill = int(2000000)
# Bosnia and Herzegovina, Georgia
base_3mill = int(3000000)
# Croatia, Ireland
base_4mill = int(4000000)
# Norway, Slovakia, Finland, Denmark
base_5mill = int(5000000)
# Serbia
base_6mill = int(6000000)
# Bulgaria
base_7mill = int(7000000)
# Switzerland, Austria
base_8mill = int(8000000)
# Belarus, Hungary
base_9mill = int(9000000)
# Azerbaijan, Portugal, Sweden, Czech Republic, Greece
base_10mill = int(10000000)
# Belgium
base_11mill = int(11000000)
# Netherlands
base_17mill = int(17000000)
# Kazahstan
base_18mill = int(18000000)
# Romainia
base_19mill = int(19000000)
# Poland
base_30mill = int(30000000)
# Ukraine, Spain
base_40mill = int(40000000)
# Italy, United Kingdom, France
base_60mill = int(60000000)
# Germany, Turkey
base_80mill = int(80000000)
# Russia
base_100mill = int(100000000)


# Creates a function to put in the countries that are in the EU per 2021
def eur_un():
    print("In the European union")


# Function to calculate the GDP per capita
def eur_pcgdp(gdp, population):
    percap_gdp = gdp / population
    print("GDP per capita: ", format(percap_gdp, "0.2f"), sep="")


if question == euroList[0]:
    print("Capital: Tirana", "\nRegion: ", se_euro)
    print("Population: ", base_2mill + 878579)
# Creates the parameters for the function
    def al_pcgdp():
        gdp = int(13640000000)
        population = int(2878579)
        eur_pcgdp(gdp, population)
    al_pcgdp()
# Abbreviation
elif question == "AL":
    print("Capital: Tirana", "\nRegion: ", se_euro)
    print("Population: ", base_2mill + 878579)


    def al_pcgdp():
        gdp = int(13640000000)
        population = int(2878579)
        eur_pcgdp(gdp, population)


    al_pcgdp()
# * because its a meme ;)
if question == "Andorra":
    print("Capital: Andorra la Vella", "\nRegion: ", s_euro)
    print("Population: ", base_70tho + 7543)
    print("Doesnt exist" * 10)


    def ad_pcgdp():
        gdp = 3154000000
        population = 77543
        eur_pcgdp(gdp, population)


    ad_pcgdp()
elif question == "AD":
    print("Capital: Andorra la Vella", "\nRegion: ", s_euro)
    print("Population: ", base_70tho + 7543)
    print("Doesnt exist" * 10)


    def ad_pcgdp():
        gdp = int(3154000000)
        population = int(77543)
        eur_pcgdp(gdp, population)


    ad_pcgdp()
if question == "Armenia":
    print("Capital: Yerevan", "\nRegion: ", asia_euro)
    print("Population: ", 1478450 * 2)


    def arm_pcgdp():
        gdp = 13670000000
        population = 1478450 * 2
        eur_pcgdp(gdp, population)


    arm_pcgdp()

if question == "Austria":
    print("Capital: Vienna", "\nRegion: ", c_euro)
    print("Population: ", base_8mill + int(1870224 / 2))
    eur_un()


    def aus_pcgdp():
        gdp = 445100000000
        population = base_8mill + int(1870224 / 2)
        eur_pcgdp(gdp, population)


    aus_pcgdp()
if question == "Azerbaijan":
    print("Capital: Baku", "\nRegion: ", asia_euro)
    print("Population: ", base_10mill + 127874)
if question == "Belarus":
    print("Capital: Minsk", "\nRegion: ", e_euro)
    print("Population: ", base_9mill + 440840)
if question == "Belgium":
    print("Capital: Brussels", "\nRegion: ", w_euro)
    print("Population: ", base_11mill + 492641)
    eur_un()
if question == "Bosnia and Herzegovina":
    print("Capital: Sarajevo", "\nRegion: ", se_euro)
    print("Population: ", base_3mill + 300000 + int(5 ** 2) * 40)
elif question == "Bosnia":
    print("Capital: Sarajevo", "\nRegion: ", se_euro)
    print("Population: ", base_3mill + 300000 + int(5 ** 2) * 40)
if question == "Bulgaria":
    print("Capital: Sofia ", "\nRegion: ", se_euro)
    print("Population: ", base_6mill + 951482, sep="")
    eur_un()
if question == "Croatia":
    print("Capital: Zagreb ", "\nRegion: ", se_euro)
    print("Population: ", base_4mill + 284889)
    eur_un()
if question == "Cyprus":
    print("Capital: Nicosia", "\nRegion: ", se_euro)
    print("Population: ", base_1mill + 189265)
    eur_un()
if question == "Czech Republic":
    print("Capital: Prague", "\nRegion: ", c_euro)
    print("Population: ", base_10mill + 707839)
    eur_un()
if question == "Denmark":
    print("Capital: Copenhagen", "\nRegion: ", n_euro)
    print("Population: ", base_5mill + 707839)
    eur_un()
if question == "Estonia":
    print("Capital: Talinn", "\nRegion: ", n_euro)
    print("Population: ", base_1mill + 294455)
    eur_un()
if question == "Finland":
    print("Capital: Helsinki", "\nRegion: ", n_euro)
    print("Population: ", base_5mill + 536146)
if question == "France":
    print("Capital: Paris", "\nRegion: ", w_euro)
    print("Population: ", base_60mill + int(7 * 1000000) + 76000)
    eur_un()
if question == "Georgia":
    print("Capital: Tbilisi", "\nRegion: ", asia_euro)
    print("Population: ", base_4mill + 12100 + int(245 % 15 - 1))
if question == "Germany":
    print("Capital: Berlin", "\nRegion: ", c_euro)
    print("Population: ", base_80mill + base_3mill + 166711)
    eur_un()
if question == "Greece":
    print("Capital: Athens", "\nRegion: ", s_euro)
    print("Population: ", base_10mill + 816286, end="")
    eur_un()
if question == "Hungary":
    print("Capital: Budapest", "\nRegion", c_euro)
    print("Population: ", base_10mill + 769520 + int(12 // 2))
    eur_un()
if question == "Iceland":
    print("Capital: Reykjavík", "\nRegion: ", n_euro)
    print("Population: ", base_300tho + 64134)
if question == "Ireland":
    print("Capital: Dublin", "\nRegion: ", w_euro)
    print("Population: ", base_6mill + 572728)
    eur_un()
if question == "Italy":
    print("Capital: Rome", "\nRegion: ", s_euro)
    print("Population: ", base_60mill + 317116)
    eur_un()
if question == "Kazakhstan":
    print("Capital: Nur-Sultan", "\nRegion: ", asia_euro)
    print("Population: ", base_18mill + 724000 + int(100 * 2))
if question == "Kosovo":
    print("Capital: Pristina", "\nRegion: ", se_euro)
    print("Population: ", base_1mill + 873160)
if question == "Latvia":
    print("Capital: Riga", "\nRegion: ", n_euro)
    print("Population: ", base_1mill + 907675)
    eur_un()
if question == "Liechtenstein":
    print("Capital: Vaduz", "\nRegion: ", c_euro)
    print("Population: ", base_30tho + 8896)
if question == "Lithuania":
    print("Capital: Vilnus", "\nRegion: ", n_euro)
    print("Population: ", base_2mill + 793694)
    eur_un()
if question == "Luxembourg":
    print("Capital: Luxembourg City", "\nRegion: ", w_euro)
    print("Population: ", base_600tho + 26108)
    eur_un()
if question == "Malta":
    print("Capital: Valletta", "\nRegion: ", s_euro)
    print("Population: ", base_500tho + 14564)

if question == "Moldova":
    print("Capital: Chișinău", "\nRegion: ", e_euro)
    print("Population (excludes Transnistria): ", base_2mill + 640438)
if question == "Monaco":
    print("Capital: Monaco", "\nRegion: ", s_euro)
    print("Population: ", base_30tho + 8300)
if question == "Montenegro":
    print("Capital: Podgorica", "\nRegion: ", se_euro)
    print("Population: ", base_600tho + 21873)
if question == "Netherlands":
    print("Capital: Amsterdam", "\nRegion: ", w_euro)
    print("Population: ", base_17mill + 469635)
    eur_un()
if question == "North Macedonia":
    print("Capital:Skopje", "\nRegion: ", se_euro)
    print("Population: ", base_2mill + 84262)
if question == "Norway":
    print("Capital: Oslo", "\nRegion: ", n_euro)
    print("Population: ", base_5mill + 323933)
if question == "Poland":
    print("Capital: Warsaw", "\nRegion: ", c_euro)
    print("Population: ", base_30mill + 8433600)
    eur_un()
if question == "Portugal":
    print("Capital: Lisbon", "\nRegion: ", s_euro)
    print("Population: ", base_10mill + 276617)
    eur_un()
if question == "Romainia":
    print("Capital: Bucharest", "\nRegion: ", e_euro)
    print("Population: ", base_19mill + 140199)
    eur_un()
if question == "Russia":
    print("Capital: Moscow", "\nRegion: ", e_euro)
    print("Population: ", base_100mill + 46093678)
if question == "San Marino":
    print("Capital: San Marino", "\nRegion: ", s_euro)
    print("Population: ", base_30tho + 3407)

if question == "Serbia":
    print("Capital: Belgrade", "\nRegion: ", se_euro)
    print("Population: ", base_6mill + 723625)
if question == "Slovakia":
    print("Capital: Bratislava", "\nRegion: ", c_euro)
    print("Population: ", base_5mill + 445087)
    eur_un()
if question == "Slovenia":
    print("Capital: Ljubljana", "\nRegion: ", s_euro)
    print("Population: ", base_2mill + 79962)
    eur_un()
if question == "Spain":
    print("Capital: Madrid", "\nRegion: ", s_euro)
    print("Population: ", base_40mill + 6807131)
    eur_un()
if question == "Sweden":
    print("Capital: Stockholm", "\nRegion: ", n_euro)
    print("Population: ", base_10mill + 140199)
    eur_un()
if question == "Switzerland":
    print("Capital: Bern", "\nRegion: ", w_euro)
    print("Population: ", base_8mill + 697628)
if question == "Turkey":
    print("Capital: Ankara", "\nRegion: ", asia_euro)
    print("Population: ", base_80mill + 5202924)
if question == "Ukraine":
    print("Capital: Kiev", "\nRegion: ", e_euro)
    print("Population: ", base_40mill + 3592603)
if question == "United Kingdom":
    print("Capital: London", "\nRegion: ", w_euro)
    print("Population: ", base_60mill + 6795807)
elif question == "UK":
    print("Capital: London", "\nRegion: ", w_euro)
    print("Population: ", base_60mill + 6795807)
# explaining that it is a city and a state
if question == "Vatican City":
    print("Capital: Vatican City" + "(city-state)", "\nRegion: ", s_euro)
    print("Population: ", base_7hun + 99)
# Because these arent technically countries we let the user know that they are part of the UK
if question == "Wales" and "Scotland" and "Northern Ireland":
    print("Part of the United Kingdom")
# Prints a warning statement if the input isnt in the list
if question not in euroList:
    print("Enter a valid country")
#Tells the user if the country they entered is in the the top 5 largest countrys in europe by population
if question == "Russia" or "Germany" or "United Kingdom" or "UK" or "France" or "Italy":
    print("In the top 5 biggest european countries ? ", 5 != 5)

else:
    print("Enter a country on the list")
#Tells user if the country they entered is in Europe
while question in euroList:
    print("Is a European country: ", 2 >= 1)
    break
