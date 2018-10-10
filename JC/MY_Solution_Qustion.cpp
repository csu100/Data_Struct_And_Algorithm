#include "My_Solution_Qustion.h"
#include <iostream>

/***************************************************
*  函数功能：利用归并排序解决小和问题
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O(NlogN)，空间复杂度：O(N)
*  题目来源  ：
*  日期：2018-08-10-10.03
***************************************************/
int MY_Solution::Small_Sum(vector<int>& nums)
{
    if(nums.size()<2) return 0;
    return Small_Sum(nums,0,nums.size()-1);
}

int MY_Solution::Small_Sum(vector<int>& nums,int L,int R)
{
    if(L>=R) return 0;
    int mid=L+((R-L)>>1);
    return Small_Sum(nums,L,mid)+Small_Sum(nums,mid+1,R)+Merges(nums,L,mid,R);
}
int MY_Solution::Merges(vector<int>& nums,int L,int mid,int R)
{
    int i=L;
    int j=mid+1;
    vector<int> help;
    int res=0;
    while(i<=mid && j<=R)
    {
        if(nums[i]<nums[j])
        {
            res+=(R-j+1)*nums[i];
            help.push_back(nums[i++]);
        }else
        {
            help.push_back(nums[j++]);
        }
    }
    while(i<=mid)
    {
        help.push_back(nums[i++]);
    }
    while(j<=R)
    {
        help.push_back(nums[j++]);
    }
    for(int k=0;k<help.size();k++)
    {
        nums[k+L]=help[k];
    }
    return res;
}


/***************************************************
*  函数功能：利用归并排序解决逆序对问题
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O(NlogN)，空间复杂度：O(N)
*  题目来源  ：
*  日期：2018-08-10-10.03
***************************************************/
int MY_Solution::NIXU_dui(vector<int>& nums)
{
    if(nums.size()<2) return 0;
    if(nums.size()<6) throw "error";
    return NIXU_dui(nums,0,nums.size()-1);
}

int MY_Solution::NIXU_dui(vector<int>& nums,int L,int R)
{
    if(L>=R) return 0;
    int mid=L+((R-L)>>1);
    return NIXU_dui(nums,L,mid) + NIXU_dui(nums,mid+1,R) + Mergess(nums,L,mid,R);

}
int MY_Solution::Mergess(vector<int>& nums,int L,int mid,int R)
{
    int i=L;
    int j=mid+1;
    vector<int> help;
    int res=0;
    while(i<=mid && j<=R)
    {
        if(nums[i]>nums[j])
        {
            res+=(mid-i+1);
            help.push_back(nums[j++]);
        }else
        {
            help.push_back(nums[i++]);
        }
    }
    while(i<=mid)
    {
        help.push_back(nums[i++]);
    }
    while(j<=R)
    {
        help.push_back(nums[j++]);
    }
    for(int k=0;k<help.size();k++)
    {
        nums[k+L]=help[k];
    }

    return res;
}

/***************************************************
*  函数功能：利用桶排序解决基于非比较的相邻两数的最大差值
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O(N)，空间复杂度：O(N)
*  题目来源  ：
*  日期：2018-08-10-10.03
***************************************************/
int MY_Solution::MAX_GAP(vector<int>& nums)
{
    if(nums.size()<2) return 0;
    int MINS=nums[0];
    int MAXS=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        MINS=min(MINS,nums[i]);
        MAXS=max(MAXS,nums[i]);
    }
    int len=nums.size();
    vector<int> MIN(len+1,0);
    vector<int> MAX(len+1,0);
    vector<bool> has_num(len+1,false);
    for(int i=0;i<len;i++)
    {
        int pos=tong_pos(nums[i],MINS,MAXS,len);
        MIN[pos]=has_num[pos]?min(MIN[pos],nums[i]):nums[i];
        MAX[pos]=has_num[pos]?max(MAX[pos],nums[i]):nums[i];
        has_num[pos]=true;
    }
    int res=0;
    int last_max=MAX[0];
    for(int i=1;i<=len;i++)
    {
        if(has_num[i])
        {
            res=max(res,MIN[i]-last_max);
            last_max=MAX[i];
        }
    }
    return res;
}

int MY_Solution::tong_pos(int nums,int MIN,int MAX,int length)
{
    return (int)(length*(nums-MIN)/(MAX-MIN));
}
