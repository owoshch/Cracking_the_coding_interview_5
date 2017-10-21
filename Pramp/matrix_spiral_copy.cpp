#include <iostream>
#include <vector>

using namespace std;




vector<int> spiralCopy( const vector<vector<int>>& inputMatrix ) 
{
  int numRows = inputMatrix.size();
  int numCols = inputMatrix[0].size();
  vector<int> result;
  int topRow = 0;
  int btmRow = numRows - 1;
  int leftCol = 0;
  int rightCol = numCols - 1;
  while (topRow <= btmRow && leftCol <= rightCol) {
    for (int i = leftCol; i <= rightCol; i++) {
      result.push_back(inputMatrix[topRow][i]);
      topRow++;
    }
    
    for (int j = topRow; j <= btmRow; j++) {
      result.push_back(inputMatrix[j][rightCol]);
      rightCol--;
    }
    if (topRow <= btmRow) {
      for (int i = rightCol; i >= leftCol; i--) {
        result.push_back(inputMatrix[btmRow][i]);
        btmRow--;
      }
    }
    
    if (leftCol <= rightCol) {
      for (int j = btmRow; j >= topRow; j--) {
        result.push_back(inputMatrix[j][leftCol]);
        leftCol++;
      }
    }
  }
  return result;
}

int main() {
  return 0;
}