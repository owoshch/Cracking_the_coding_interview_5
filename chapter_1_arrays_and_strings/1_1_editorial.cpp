/*
Implement an algorithm to determine if a string has all unique characters.
What if you cannot use additional data structures?

Useful links:
http://www.geeksforgeeks.org/determine-string-unique-characters/
https://www.youtube.com/watch?v=aijR_Jhh3JI

*/


#include <iostream>
#include <string>

// O(n) time, O(1) space

bool IsUnique(const std::string& input) {
	if (input.size() > 256) {
		return false;
	}

	bool char_set [256] = {};

	for (int i = 0; i < input.size(); i++) {
		int value = input.at(i);
		if (char_set[value]) { //Array found this char in string
			return false;
		}
		char_set[value] = true;
	}

	return true;
}

// Reduce space usage by the factor of eight by using a bit vector

/*
SO explanation: https://stackoverflow.com/questions/25847191/new-to-java-trying-to-understand-checker-1-val
What is bit-shifting: https://stackoverflow.com/questions/141525/what-are-bitwise-shift-bit-shift-operators-and-how-do-they-work
*/

bool IsUniqueReducedSpace(const std::string& input) {
	if (input.size() > 256) {
		return false;
	}

	int checker = 0;

	for (int i = 0; i < input.size(); i++) {
		int val = input.at(i) - 'a';
		// using bitwise and (&) and exponentiation (left shifting)
		if ((checker & (1 << val)) > 0) { // synonymous to if (char_set[value] == 0)
			return false;
		}
		checker |= (1 << val);
	}
	return true;
}



int main() {
	std::string input;
	std::cin >> input;

	std::cout << "Baseline: " << IsUnique(input) << std::endl;
	std::cout << "Reduced space: " << IsUniqueReducedSpace(input) << std::endl;

}