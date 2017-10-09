#using python3

import sys


def rotate_matrix(matrix):
	matrix = tuple(zip(*matrix[::-1]))
	return matrix


#reading the number of dimensions
n = int(input().strip())

#reading matrix
arr = []
for arr_i in range(n):
   arr_temp = map(int,input().strip().split(' '))
   arr.append(arr_temp)

#printing result
print ('rotated matrix: ')
arr = rotate_matrix(arr)
for arr_str in arr:
	for element in arr_str:
		print(element, end=" ")
	print ()