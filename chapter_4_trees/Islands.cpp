#include <iostream>
#include <vector>
#include <queue>

using namespace std;


void PushNeighbors(queue<vector<int> >& q, int height, int lenght, int x, int y) {
  if (x >= 0 and x < height and y >= 0 and y < lenght) {
    q.push({x, y});
  }
}


void MarkIslands(vector<vector<int>>& binaryMatrix , int i, int j) {
  queue<vector<int> > q;
  q.push({i, j});
  int height = binaryMatrix.size(); // rows
  int lenght = binaryMatrix[0].size(); // columns
  while (!q.empty()) {
    int x = q.front()[0];
    int y = q.front()[1];
    //std::cout << x << " " << y << std::endl;
    q.pop();
    if (binaryMatrix[x][y] == 1) {
      binaryMatrix[x][y] = -1;
      PushNeighbors(q, height, lenght, x - 1, y);
      PushNeighbors(q, height, lenght, x + 1, y);
      PushNeighbors(q, height, lenght, x, y - 1);
      PushNeighbors(q, height, lenght, x, y + 1);
    }
  }
}



int getNumberOfIslands(vector<vector<int>>& binaryMatrix ) 
{
  // your code goes here
  int NumberOfIslands = 0;
  for (int i = 0; i < binaryMatrix.size(); i++) { // rows
    for (int j = 0; j < binaryMatrix[0].size(); j++) { // cols
      if (binaryMatrix[i][j] == 1) {
        MarkIslands(binaryMatrix, i, j);
        NumberOfIslands++;
      }
    }
  }
  return NumberOfIslands;
}



int main() {
  vector<vector<int>> matrix = {
    {1, 0, 0, 1, 0}, 
    {1, 0, 1, 1, 1},
    {1, 0, 0, 1, 0},
    {0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1}
  };

  std::cout << getNumberOfIslands(matrix) << std::endl;
}