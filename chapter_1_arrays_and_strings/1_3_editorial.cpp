/*
EDITORIAL
Given two strings, 
write a method to decide if one is a permutation of the other
*/
#include <iostream>
#include <string>

//Check if the two strings have identical character counts

bool IsPermunation(const std::string& first, const std::string& second) {
	if (first.size() != second.size()) {
		return false;
	}
	int letters [256] = {}; //assumption that the character is ASCII

	for(const char& c: first) {
		letters[c]++;
	}

	for (int i = 0; i < second.size(); i++) {
		int c = second.at(i);
		if (--letters[c] < 0) {
			return false;
		}
	}
	return true;
}


int main() {
	std::string first, second;
	std::cin >> first >> second;
	if (IsPermunation(first, second)) {
		std::cout << "YES" << std::endl;
	}
	else {
		std::cout << "NO" << std::endl;
	}



}