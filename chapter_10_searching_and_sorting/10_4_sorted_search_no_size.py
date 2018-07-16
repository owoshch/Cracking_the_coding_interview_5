def find_last_index(arr, left, right):
    """
    arr[right] = -1 initially.
    Need to find i such as arr[i] != -1
    """
    while left <= right:
        mid = left + (right - left) // 2
        if mid == 0 or arr[mid] * arr[mid - 1] < 0:
            return mid
        elif arr[mid] == -1:
            right = mid - 1
        else:
            # arr[mid] > 0
            left = mid + 1


def search(arr, value, left, right):
    while left <= right:
        mid = left + (right - left) // 2
        print ('left: %s, right: %s' % (left, right))
        print ('mid', mid)
        if arr[mid] == value:
            return mid
        elif value < arr[mid]:
            right = mid - 1
        else:
            left = mid + 1
    return -1



def find_element(arr, value):
    """
    arr doesn't have a size method.
    arr[i] returns -1 if we are out of bounds.
    """
    left, right = 0, 0
    while True:
        right = 2 ** right
        mid = (left + right) // 2
        if arr[right] != -1:
            # we are still in bound
            index = search(arr, value, left, right - 1) 
            if index != -1:
                return index
        else:
            # we are out of bounds
            last_index = find_last_index(arr, left, right) # last -1 element
            index = search(arr, value, left, last_index - 1)
            return index


