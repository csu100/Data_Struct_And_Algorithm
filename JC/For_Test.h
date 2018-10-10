#ifndef FOR_TEST_H_INCLUDED
#define FOR_TEST_H_INCLUDED


#include <vector>
#include <cmath>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>

using namespace std;

class RandomMatrix
{
public:
    vector<vector<int> > generateRandomMatrix(int row,int colum);
    vector<int> generateRandomArray(int length);
    vector<int> arr_to_vec(int arr[],int len);
};

#endif // FOR_TEST_H_INCLUDED
