import math


def circlearea(radius):
    area = math.pi * radius ** 2


def circlediameter(radius):
    diameter = radius * 2


def main():
    radius = int(input(""))
    circlearea(radius)
    circlediameter(radius)


main()
