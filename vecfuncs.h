// header file guard code prevents the problem of double inclusion of a header file see my video in 121 playlist for more info
#ifndef VECFUNCS_H
#define VECFUNCS_H

#include <iostream>
#include <vector>

using namespace std;
const int NUM_VALUES = 10;

void fillVector(vector<int> &);
void findExtremes(vector<int>&, int&, int&);

#endif