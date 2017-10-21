#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;


void PrintMap(const map<string, int>& dict) {
	for (const auto& word : dict) {
		std::cout << word.first << " " << word.second << std::endl;
	}
}


int main() {
	map<string, int> dict;
	string text = "Practice makes perfect! you will only get Perfect by practice. just practice!";
	cout << text << endl;

	//cout << text.size() << endl;

	//cout << " ? " << int('?') << endl;

	string word = "";
	for (char& element : text) {
		if (int(element) > 47) {
			word += element;
		}
		else {
			if (word != "") {
				//cout << word << endl;
				transform(word.begin(), word.end(), word.begin(), ::tolower);
				//cout << word << endl;
				dict[word] += 1;
				word = "";
			}
		}
	}


	PrintMap(dict);


}