#include <iostream>
#include <vector>

using namespace std;

int findBusiestPeriod( const vector<vector<int> >& data ) 
{
  
  int inside = 0;
  int i = 0;
  int maxInside = 0;
  if (data[0][2] == 0) {
    maxInside -= data[0][1];
  }
  else {
    maxInside += data[0][1];
  }
  int previousTime = data[0][0];
  int maxTime = previousTime;
  while (i < data.size()){
    vector<int> element = data[i];
    int curTime = element[0];
    if (curTime != previousTime) {
      if (inside > maxInside) {
        maxInside = inside;
        maxTime = previousTime;
      }
    }
    if (element[2] == 1) {
      inside += element[1];
    }
    else if (element[2] == 0) {
      inside -= element[1];
    }
    int previousTime = curTime;
    i++;
  }
  
  return maxTime;
  
    

}

int main() {
  return 0;
}