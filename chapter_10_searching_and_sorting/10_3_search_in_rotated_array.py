def count_shifts(arr):
  left, right = 0, len(arr) - 1
  while left <= right:
    mid = left + (right - left) // 2
    if mid == 0 or arr[mid] < arr[mid - 1]:
      return mid
    elif arr[mid] > arr[0]:
      left = mid + 1
    elif arr[mid] < arr[0]:
      right = mid - 1
  return -1


def binary_search(arr, num):
  left, right = 0, len(arr) - 1
  while left <= right:
    mid = left + (right - left) // 2
    if arr[mid] < num:
      left = mid + 1
    elif arr[mid] > num:
      right = mid - 1
    else:
      return mid
  return -1
    
          
def shifted_arr_search(shiftArr, num):
  n_shifts = count_shifts(shiftArr)
  index_in_sorted = binary_search(shiftArr[n_shifts:] + shiftArr[:n_shifts], num)
  if index_in_sorted == -1:
    return -1
  return (n_shifts + index_in_sorted) % len(shiftArr)
