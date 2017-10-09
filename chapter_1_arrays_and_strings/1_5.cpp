/*
Implement a method to perform basic string compression:
aabccccaaa -> a2b1c4a3
If the "compressed" string would not become smaller than the original string,
your method should return the original string
*/

#include <string>
#include <iostream>



void StringCompression(const std::string& input) {
	std::string output;
	int i = 0;
	int difference = 0;
	
	while (i < input.size()) {
		int j = i + 1;
		while (input[j] == input[i]) {
			j++;
		}
		difference += j - i - 2;
		output += input[i];
		output += std::to_string(j - i);
		i = j;
		

	}
	
	std::cout << "dif " << difference << std::endl;
	if (difference > 0) {
		std::cout << output << std::endl;
	}
	else {
		std::cout << input << std::endl;
	}
}

int main() {
	std::string input;
	std::cin >> input;
	StringCompression(input);

}