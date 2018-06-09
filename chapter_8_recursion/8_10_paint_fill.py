def paint_fill(arr, i, j, color):
    initial_color = arr[i][j]
    if initial_color == color:
        return
    paint_neighbors(arr, i, j, color, initial_color)
    return arr

def paint_neighbors(arr, i, j, color, initial_color):
    if i < 0 or i >= len(arr) or j < 0 or j >= len(arr[0]):
        return
    if arr[i][j] == initial_color:
        arr[i][j] = color
        paint_neighbors(arr, i - 1, j, color, initial_color)
        paint_neighbors(arr, i, j + 1, color, initial_color)
        paint_neighbors(arr, i + 1, j, color, initial_color)
        paint_neighbors(arr, i, j - 1, color, initial_color)