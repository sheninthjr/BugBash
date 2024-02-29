# Find whehter the given string is palindrome or not

def is_palindrome(string):
    clean_string = ' '.join(char for char in string)
    clean_string == clean_string[::-1]
    return clean_string

inputs = ['palindrome', 'ala', 'helle']

for input_string in inputs:
    if is_palindrome(input_string):
        print(f"'{input_string}' is a palindrome.")
    else:
        print(f"'{input_string}' is not a palindrome.")