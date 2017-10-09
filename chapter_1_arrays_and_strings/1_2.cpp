/* 
Implement a fuction void reverse(char* str) in C or C++
which reverses a null-terminated string
*/

#include <string>
#include <iostream>


void Swap(char& first, char& second) {
	char tmp;
	tmp = first;
	first = second;
	second = tmp;
}

void ReverseString(std::string& input) {
	int i = 0;
	int j = input.size() - 1;
	while (i < j) {
		Swap(input[i], input[j]);
		i++;
		j--;
	}
}



int main() {
	std::string input;
	std::cin >> input;
	ReverseString(input);
	std::cout << input << std::endl;
}