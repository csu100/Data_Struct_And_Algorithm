#ifndef CLASS2_H_INCLUDED
#define CLASS2_H_INCLUDED

#include <vector>
#include <string>
#include <stdio.h>
#include <iostream>
#include <deque>
#include <stack>


using namespace std;

class MAX_WINDOW
{
public:
    vector<int> get_MAX_Window(vector<int> num,int w); //生成窗口最大值数组
};

class SubNum
{
public:
    int get_SubNum(vector<int> num,int aim);  // 最大值减去最小值小于或等于num的子数组数量
};

class MaxRec
{
public:
    int get_maxRecSize(vector<vector<int>  > Map);
private:
    int maxRecFromBottom(vector<int> height);
};

#endif // CLASS2_H_INCLUDED
