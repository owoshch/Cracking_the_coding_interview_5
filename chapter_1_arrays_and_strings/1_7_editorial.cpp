/*

EDITORIAL

Write an algorithm such that if an element in an MxN matrix is 0, 
its entire row and column are set to 0
*/

#include <iostream>
#include <vector>
#include <map>
#include <set>



void SparseMatrix(std::vector<std::vector<int> >& matrix) {
	std::vector<bool> row (matrix.size());
	std::vector<bool> column (matrix[0].size());

	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[i].size(); j++) {
			if (matrix[i][j] == 0) {
				row[i] = true;
				column[j] = true;
			}
		}
	}

	for (int i = 0; i < matrix.size(); i++) {
			for (int j = 0; j < matrix[i].size(); j++) {
				if (row[i] or column[j]) {
					matrix[i][j] = 0;
				}
			}
	}
}







void PrintMatrix(const std::vector<std::vector<int> >& matrix) {
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[i].size(); j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}



int main() {
	int n;
	std::cin >> n;
	std::vector<std::vector<int> > matrix (n);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int input;
			std::cin >> input;
			matrix[i].push_back(input);
		}
	}

	std::cout << "Changed matrix: " << std::endl;

	SparseMatrix(matrix);

	PrintMatrix(matrix);

}