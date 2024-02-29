# To count the number of vowels

def count_vowels(string):
    vowels = {'a', 'e', 'i', 'o', 'u'} 
    vowel_counts = {}
    for char in string.lower():
        if char in vowels:
            vowel_counts[char] += vowel_counts
    return vowel_counts

input_string = "Hello World"
vowel_counts = count_vowels(input_string)
print("Vowel counts:", vowel_counts)
