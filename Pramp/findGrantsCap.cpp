#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double findGrantsCap( vector<int> grantsArr, int newBudget ) 
{
  
  double newBudgetD = newBudget;
  std::vector<double> grantsArray(grantsArr.begin(), grantsArr.end());
  std::sort(grantsArray.begin(), grantsArray.end());
  double mean = 0;
  double result = 0;
  for (int i = 0; i < grantsArray.size(); i++) {
    int numbersToGo = grantsArray.size() - i;
    mean = newBudgetD / numbersToGo;
    if (grantsArray[i] > mean) {
      grantsArray[i] = mean;
      
      newBudgetD -= mean;      
    }
    
    else { // element < mean
      newBudgetD -= grantsArray[i];
    }
    result = grantsArray[i];
    //cout << grantsArray[i] << ' ';
  }
  
  return result;
 
  
}

int main() {  
  return 0;
}