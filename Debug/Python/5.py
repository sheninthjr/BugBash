# Add number one to the last of the array element

def increment_last_integer(digits):
    for i in range(0,len(digits)):
        if digits[i] == 9:
            digits[i] = 0
        else:
            digits[i] += 1
            return digits
    return [1] + digits

digits = [1, 2, 3]
result = increment_last_integer(digits)
print("Result:", result)
