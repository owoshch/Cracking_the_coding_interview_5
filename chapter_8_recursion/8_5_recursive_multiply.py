"""
Recursive multiply:
Write a recursive function to multiply two positive integers without using the * operator (or / operator)
"""

import random


def mult_editorial(a, b):
    smaller = min(a, b)
    bigger = max(a, b)
    return mult_editorial_helper(smaller, bigger)

def mult_editorial_helper(smaller, bigger):
    if smaller == 0:
        return 0
    elif smaller == 1:
        return bigger
    mid_index = smaller // 2
    first_half = mult_editorial_helper(mid_index, bigger)
    second_half = first_half
    if smaller % 2 == 1:
        second_half = first_half + bigger
    return first_half + second_half


# testing function

def test_multiplication(test_function, n_iter, lower = 0, upper = 10000):
    for i in range(n_iter):
        a = random.randint(lower, upper)
        b = random.randint(lower, upper)
        assert test_function(a, b) == a * b
    return True

if test_multiplication(mult_editorial, 10000):
    print ("All good!")