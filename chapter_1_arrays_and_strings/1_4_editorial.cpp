/*
EDITORIAL.
Write a method to replace all spaces in a string with '%20'
*/

#include <iostream>
#include <string>


void ReplaceSpaces(std::string& input) {
	int numberOfSpaces = 0;
	int i = input.size() - 1;
	for (const char& letter : input) {
		if (letter == ' ') {
			numberOfSpaces++;
		}
	}
	input.append(numberOfSpaces * 2,'.');

	int j = input.size() - 1;

	while (i > 0) {
		if (input[i] == ' ') {
			input[j] = '0';
			input[j - 1] = '2';
			input[j - 2] = '%';
			j-=3;
		}
		else {
			input[j] = input[i];
			j--;
		}
		i--;
	}

}



int main() {
	std::string input;
	std::getline(std::cin, input);

	ReplaceSpaces(input);

	std::cout << input << std::endl;

}

