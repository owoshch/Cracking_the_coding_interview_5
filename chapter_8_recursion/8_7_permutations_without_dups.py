"""
20 minutes.
Recursive solution.
"""
def get_permutations(string, characters, permutations):
    if len(characters) == 1:
        permutations.append(string + characters[0])
    for i in range(len(characters)):
        get_permutations(string + characters[i],
                        characters[:i] + characters[i+1:],
                        permutations)
    return permutations

