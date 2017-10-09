#include <vector>
#include <iostream>



void PrintMatrix(const std::vector<std::vector<int> >& matrix) {
	for (int i = 0; i < matrix.size(); i++) {
		for (int j = 0; j < matrix[i].size(); j++) {
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}


void Swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}



void RotateMatrix(std::vector<std::vector<int> >& matrix) {
	std::reverse(matrix.begin(), matrix.end());
	//transpose reversing matrix is equal to rotate matrix on 90 degrees
	for (int i = 1; i < matrix.size(); i++) {
		for (int j = 0; j < i; j++) {
			Swap(matrix[i][j], matrix[j][i]);
		}
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


	std::cout << "Rotated matrix: " << std::endl;

	RotateMatrix(matrix);
	PrintMatrix(matrix);

}