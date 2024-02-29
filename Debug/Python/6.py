# Using Generator Function find the fibonacci series

def fibonacci_generator():
    a, b = 0, 1
    while True:
        yield a
        a, b = b, a + b

n = 10
fibonacci_gen = fibonacci_generator()
fibonacci_sequence_gen = [fibonacci_gen for _ in range(n)]
print("Fibonacci Sequence using generator function:", fibonacci_sequence_gen)
