def find_index_with_repetitions(array, left, right):
    if left <= right:
        mid_index = left + (right - left) // 2
        mid_value = array[mid_index]
        if mid_value == mid_index:
            return mid_index
        # searching left
        left_index = min(mid_index - 1, mid_value)
        left_value = find_index_with_repetitions(array, left, left_index)
        if left_value >= 0:
            return left_value
        
        # searching right
        right_index = max(mid_index + 1, mid_value)
        right_value = find_index_with_repetitions(array, right_index, right)
        return right_value
    return -1

def findMagicWithRepetitions(array):
    return find_index_with_repetitions(array, 0, len(array) - 1)