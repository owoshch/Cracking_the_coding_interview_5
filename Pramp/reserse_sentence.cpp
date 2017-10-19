#include <iostream>
#include <vector>
#include <stack>

using namespace std;



void Swap(char& i, char& j) {
  char temp;
  temp = i;
  i = j;
  j = temp;
  
}


void ReverseWord(vector<char>& arr, int i, int j) {
  while (i < j) {
  Swap(arr[i], arr[j]);
  i++;
  j--;
  }
}


  
vector<char> reverseWords( const vector<char>& a) 
{
  int i = 0;
  int j = 0;
  vector<char> arr = a;
  int numberOfSpaces = 0;
  while (j < arr.size() - 1) {
    if (arr[j] == ' ') {
      numberOfSpaces++;
      ReverseWord(arr, i, j - 1);
      i = j + 1;
    }
    j++;
  }
  if (numberOfSpaces > 0) {
    ReverseWord(arr, i, arr.size() - 1);
    ReverseWord(arr, 0, arr.size() - 1);
  }
  return arr;
}

int main() {
  return 0;
}#include <iostream>
#include <vector>
#include <stack>

using namespace std;




void PrintVector(const std::vector<char>& v) {
  for (const char& element : v) {
    std::cout << element;
  }
  std::cout << std::endl;
}






void Swap(char& i, char& j) {
  char temp;
  temp = i;
  i = j;
  j = temp;
  
}


void ReverseWord(vector<char>& arr, int i, int j) {
  while (i < j) {
  Swap(arr[i], arr[j]);
  //PrintVector(arr);
  i++;
  j--;
  }
}


vector<char> reverseWords(vector<char> arr ) 
{
  int i = 0;
  int j = 0;
  while (j < arr.size() - 1) {
    std::cout << arr[j];
    if (arr[j] == ' ') {
      ReverseWord(arr, i, j - 1);
      i = j + 1;
    }
    j++;
  }
  PrintVector(arr);
  ReverseWord(arr, 0, arr.size() - 1);
  return arr;
}

int main() {
  vector<char> arr = {'c', 'a', 't', ' ', 'd', 'o', 'g'};

  PrintVector(arr);
  //std::cout << arr.size() << std::endl;
  //ReverseWord(arr, 0, arr.size() - 1);
  vector<char> arr1 = reverseWords(arr);
  PrintVector(arr1);
  
}