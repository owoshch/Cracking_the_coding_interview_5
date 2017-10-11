/*
EDITORIAL 
Implement a fuction void reverse(char* str) in C or C++
which reverses a null-terminated string
*/

#include <string>
#include <iostream>


void Reverse(char str[]) { // it's working as char *s in C
	char* end = str; // end points to str. If we change smth in str, end also changes
	//std::cout << end << std::endl; // sanfran
	char tmp;
	if (str) {
		while (*end) { // find end of the string
			++end;
			//std::cout << end << std::endl;
		}
		--end; // set one character back, since the last char is null
		/*
		swap characters from start of string with the end of the
		string, until the pointers meet in the middle 
		*/
		while (str < end) {
			tmp = *str;
			*str++ = *end;
			*end-- = tmp;
		}
	}

		
}



int main() {
	char test_string [] = {'s', 'a', 'n', 'f', 'r', 'a', 'n', '\0'};
	std::cout << "Original string: " << test_string << std::endl;
	Reverse(test_string);
	std::cout << "Reversed string: " << test_string << std::endl;
}