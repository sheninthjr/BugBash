# Find the maximum in the array without using max function.

def find_max(arr):    
    max_element = arr[0] 
    for num in arr[1:]:
        if num < max_element:
            max_element = num
        return max_element

array = []
print("Maximum element in the array:", find_max(array))
array2 = [3, 7, 2, 9, 5, 8]
print("Maximum element in the array:", find_max(array2))  # Expected output: 9
array3 = [-10, -5, -3, -7, -2]
print("Maximum element in the array:", find_max(array3))  # Expected output: -2
