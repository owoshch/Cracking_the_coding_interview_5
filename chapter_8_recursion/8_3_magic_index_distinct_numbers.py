def find_index(array, left, right):
    """
    array - sorted array of distinct integers
    If magical index is not presented in the array,
    return -1
    """
    if left <= right:
        mid_index = left + (right - left) // 2
        if array[mid_index] > mid_index:
            # search left
            return find_index(array, left, mid_index - 1)
        elif array[mid_index] < mid_index:
            # search right
            return find_index(array, mid_index + 1, right)
        else:
            return mid_index
    return -1

def findMagic(array):
    return find_index(array, 0, len(array) - 1)


