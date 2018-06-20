
from collections import defaultdict

def sort_chars(string):
    print ('string', string)
    print (sorted(list(string)))
    return "".join(sorted(list(string)))


def group_anagrams(array):
    result = []
    words = defaultdict(list)
    # group words by anagram
    for word in array:
        key = sort_chars(word)
        words[key].append(word)
    # convert dictionary to array
    for key, value in words.items():
        for word in value:
            result.append(word)
    return result