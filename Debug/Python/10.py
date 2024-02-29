# Implement a function to generate all possible combinations of a given length from a list of unique integers.

def combinations(arr, k):
    result = []
    
    def backtrack(start, curr):
        if len(curr) == k:
            result.append(curr)
            return
        for i in range(start, len(arr)):
            curr.append(arr[i])
            backtrack(i , curr)
            curr.pop()
    
    backtrack(0, [])
    return result

arr = [1, 2, 3, 4]
k = 2
result = combinations(arr, k)
print("Combinations of length", k, "from", arr, ":", result)
