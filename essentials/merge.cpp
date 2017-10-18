#include <iostream>
#include <vector>


void PrintVector(const std::vector<int>& v) {
	for (const int& element : v) {
		std::cout << element << " ";
	}
	std::cout << std::endl;
}


std::vector<int> Merge(const std::vector<int>& left, const std::vector<int>& right) {
	std::vector<int> result;
	int i = 0;
	int j = 0;
	while (i < left.size() and j < right.size()) {
		if (left[i] < right[j]) {
			result.push_back(left[i]);
			i++;
		}
		else {
			result.push_back(right[j]);
			j++;
		}
	}
	result.insert(result.end(), left.begin() + i, left.end());
	result.insert(result.end(), right.begin() + j, right.end());
	return result;
}


int main() {
	std::vector<int> arr1 = {1, 4, 5 ,6};
	std::vector<int> arr2 = {0, 1, 3, 5, 8, 16};

	PrintVector(arr1);
	PrintVector(arr2);

	std::vector<int> result = Merge(arr1, arr2);

	PrintVector(result);

}