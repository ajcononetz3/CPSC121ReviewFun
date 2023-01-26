#include "vecfuncs.h"

int main() {
  int min, max;
  vector<int> userNums;
  cout << "Hello World\n";

  fillVector(userNums);
  cout << "size: " << userNums.size() << endl;

  // task 1: define and call a function to find and return the min and max
  findExtremes(userNums, min, max);
  // number task 2: convert this to 3 file format
  cout << "min: " << min << " max: " << max << endl;
}
