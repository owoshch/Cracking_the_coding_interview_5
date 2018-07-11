def search(arr, word, first, last):
    if first > last:
        return None
    mid = first + (last - first) // 2
    # if mid is empty, find closest non-empty string
    if not arr[mid]:
        left = mid - 1
        right = mid + 1
        while True:
            if left < first and right > last:
                return -1
            elif right <= last and arr[right]:
                mid = right
                break
            elif left >= first and arr[left]:
                mid = left
                break
            right += 1
            left -= 1
    # check for string and recurse if necessary
    if arr[mid] == word:
        return mid
    elif word < arr[mid]:
        return search(arr, word, first, mid - 1)
    else:
        return search(arr, word, mid + 1, last)


# Idea: move mid index to the closest non-empty string
def find_word(arr, word):
    if not arr or not word:
        return -1
    return search(arr, word, 0, len(arr) - 1)