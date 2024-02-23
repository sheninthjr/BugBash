# Given an integer x, return true if x is a palindrome, and false otherwise.

def isPalindrome(s):
    x = str(s)
    return x == x[::-1]

print(isPalindrome(121))
print(isPalindrome(-121))
print(isPalindrome(10))