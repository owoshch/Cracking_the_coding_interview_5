from collections import defaultdict
def find_all_permutations(characters):
    if len(characters) == 0:
        return {""}
    # build a dictionary
    unique_characters = defaultdict(int)
    for letter in characters:
        unique_characters[letter] += 1
    return get_permutations("", unique_characters, set([]))



def get_permutations(string, characters, permutations):
    """
    string: str
    characters: dictionary, key - str, value - int
    permutations: set
    """
    if max(characters.values()) == 0:
        permutations.add(string)
    for letter, count in characters.items():
        if count > 0:
            characters[letter] -= 1
            get_permutations(string + letter, 
                             characters, 
                             permutations)
            characters[letter] = count
    return permutations