#ifndef CLASS4_H_INCLUDED
#define CLASS4_H_INCLUDED



#include <vector>
#include <string>
#include <stdio.h>
#include <iostream>
#include <deque>
#include <stack>
#include <cmath>

using namespace std;

class ExpressionCompute    //  公式的计算
{
public:
    int getValue(string str);
private:
    vector<int>  getValue(string str,int i);
    int  getNum(deque<string>&  data);
    void addNum(deque<string>&  data,string num);
    int string_to_int(string str);
};




#endif // CLASS4_H_INCLUDED
