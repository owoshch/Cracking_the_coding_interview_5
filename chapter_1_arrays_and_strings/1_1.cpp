#include <string>
#include <set>
#include <iostream>

int main() {
	std::string input;
	std::cin >> input;
	std::set<char> alphabet;

	for (const char& letter : input) {
		alphabet.insert(letter);
	}

	if (input.size() == alphabet.size()) {
		std::cout << "YES" << std::endl;
	}
	else {
		std::cout << "NO" << std::endl;
	}
}
