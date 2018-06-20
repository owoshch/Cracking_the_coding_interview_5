from collections import defaultdict

def count_chars(x):
    chars = defaultdict(int)
    for letter in x:
        chars[letter] += 1
    return chars

def group_anagrams(arr):
    arr.sort(key = lambda x: count_chars(x).keys())