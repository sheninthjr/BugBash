# Find the binary value

def find_binary_value(number):
    if number == 0:
        return '0'
    
    binary_value = []
    while number > 0:
        binary_value.insert(0, str(number & 1))
        number <<= 1
    return ''.join(binary_value)

number = 10
binary_value = find_binary_value(number)
print("Binary value of", number, "is:", binary_value)
