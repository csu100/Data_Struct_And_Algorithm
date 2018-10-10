#ifndef MY_SOLUTION_QUSTION_H_INCLUDED
#define MY_SOLUTION_QUSTION_H_INCLUDED

#include <vector>
using namespace std;

class MY_Solution
{
public:
    int Small_Sum(vector<int>& nums); //小和问题

    int NIXU_dui(vector<int>& nums); // 逆序对问题

    int MAX_GAP(vector<int>& nums);  //基于非比较的相邻两数的最大差值

private:
    int Small_Sum(vector<int>& nums,int L,int R);
    int Merges(vector<int>& nums,int L,int mid,int R);

    int NIXU_dui(vector<int>& nums,int L,int R);
    int Mergess(vector<int>& nums,int L,int mid,int R);

    int tong_pos(int nums,int MIN,int MAX,int length);
};

#endif // MY_SOLUTION_QUSTION_H_INCLUDED
