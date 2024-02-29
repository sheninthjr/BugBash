# Code to print a pyramid pattern of stars with 5 rows

def print_pyramid(rows):
    for i in range(0, rows):
        print("" * (rows - i) + "*" * (2 * i - 1))

print_pyramid(5)
