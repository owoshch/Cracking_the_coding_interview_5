/*
Given two strings, 
write a method to decide if one is a permutation of the other
*/

#include <map>
#include <string>
#include <iostream>


void IsPermutation(const std::string& a, const std::string& b) {
	std::map<char, int> a_alphabet, b_alphabet;
	
	for (const char& letter : a) {
		a_alphabet[letter] += 1;
	}

	for (const char& letter : b) {
		b_alphabet[letter] += 1;
	}
	
	if (a_alphabet == b_alphabet) {
		std::cout << "YES" << std::endl;
	}
	else {
		std::cout << "NO" << std::endl;
	}
}


int main() {
	std::string a, b;
	std::cin >> a >> b;
	IsPermutation(a, b);
}