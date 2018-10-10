#ifndef CLASS8_H_INCLUDED
#define CLASS8_H_INCLUDED

#include <string>
#include <vector>
#include <iostream>
#include <set>
#include <stack>

using namespace std;

// 1
class Factorial  // 求N！// 1
{
public:
    long jiecheng(int n);
    long jiecheng_DG(int n);
};

// 2
class Hanoi // 汉诺塔问题 //2
{
public:
    void Hanois(int n);
private:
    void Hanois(int down,int n,string From,string To,string Help);
};

// 3
class Print_All_Subsquences // 获取一个字符串的全部子序列，包括空字符串 // 3
{
public:
    vector<string> Get_All_Subsquence(string str);
private:
    void Get_All_Subsquence(vector<string>& result,int i,string str,string word);
};

// 4
class Print_ALL_Permutation  // 获取一个数组字符串的全排列  // 4
{
public:
    vector<string> Get_ALL_Permutation(string str); // 获取一个字符串的全部排列
    vector<string> Get_ALL_NoPermutation(string str); // 获取一个字符串的全部排列，要求不出现重复的排列

private:
    void Get_ALL_Permutation(vector<string>& result,string& str,int n);
    void Get_ALL_NoPermutation(vector<string>& result,set<string>& item,string& str,int n);
};

// 5
class Cow_NUMBER   // 求母牛数量 // 5
{
public:
    int Get_Cow_Number(int n);
    int Get_Cow_Number_Advance(int n);
};

// 6
class ReverseStack  // 逆序栈，不申请额外的数据结构 只用递归 // 6
{
public:
    void ReverseStacks(stack<int>& S);
private:
    int Reverse(stack<int>& S);
};

// 7
class MinPath  // 最短路径和 // 7
{
public:
    int get_MinPath(vector<vector<int> > path);
    int get_DGMinPath(vector<vector<int> > path);
private:
    int get_DGMinPath(vector<vector<int> >& path,int x,int y);
};

// 8
class Arr_Aim //给定一个数组arr，和一个整数aim，任意选择arr中的数字，是否能够累加得到aim，返回true or false; //8
{
public:
    bool is_Sum_Aim(vector<int> arr,int aim);
    bool is_Sum_Aim_DG(vector<int> arr,int aim);
private:
    bool is_Sum_Aim_DG(vector<int> arr,int aim,int sum,int n);
};

// 9
class Bag_Quistion  // 背包问题 // 9
{
public:
    int get_MAX_value(vector<int> weight,vector<int> costs,int max_bag);// 0/1背包问题，物品个数为1
    int get_MAX_value_DG(vector<int> weight,vector<int> costs,int max_bag);
    int get_MAX_value_Complete(vector<int> weight,vector<int> costs,int max_bag);//完全背包问题,物品个数不限
    int get_MAX_value_Limitnum(vector<int> weight,vector<int> costs,vector<int> number,int max_bag); // 多重背包问题，物品个数有限
private:
    int get_MAX_value_DG(vector<int> weight,vector<int> costs,int max_bag,int i,int allget);
};





#endif // CLASS8_H_INCLUDED
