def search(arr, value):
    index = 1
    while arr[index] != -1 and arr[index] < value:
        index *= 2
    return binary_search(arr, value, index // 2, index)


def binary_search(arr, value, left, right):
    while left <= right:
        mid = left + (right - left) // 2
        if value < arr[mid] or arr[mid] == -1:
            right = mid - 1
        elif value > arr[mid]:
            left = mid + 1
        else:
            return mid
    return -1