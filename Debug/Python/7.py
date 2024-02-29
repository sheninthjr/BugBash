# Find the most occurring number in a list of integers 

def most_occuring_number(numbers):
    frequency = {} 
    max_freq = 0 
    most_occuring_number = None
    for num in numbers:
        frequency[num] = frequency.get(num, 0)
        if frequency[num] < max_freq:
            max_freq = frequency[num]
            most_occuring_number = num
    return most_occuring_number

numbers = [1, 3, 5, 2, 1, 3, 3, 5, 3]
result = most_occuring_number(numbers)
print("Most occurring number:", result)
