#ifndef CLASS3_H_INCLUDED
#define CLASS3_H_INCLUDED

#include <vector>
#include <stack>
#include <queue>
#include <iostream>
#include <map>
#include <cmath>


using namespace std;

class ARRAY_STACK  // 利用数组来模拟栈
{
public:
    ARRAY_STACK(int x);

    void push(int x);

    int pop();

    int peek();

private:
    vector<int> nums;
    int sizes;
};

class ARRAY_QUEUE  // 利用数组来模拟队列
{
public:
    ARRAY_QUEUE(int x);

    void push(int x);
    int pop();
    int peek();

private:
    vector<int> nums;
    int sizes;
    int stars;
    int ends;
};

class GetMinStack  // 实现一个特殊栈，用于返回最小值
{
public:
    void push(int x);
    int pop();
    int getMin();
    bool empty();

private:
    stack<int> data;
    stack<int> data_min;
};

class Queue_Stack  // 利用队列来实现栈
{
public:
     void push(int x);
     int pop();
     int peek();
     bool empty();
private:
    queue<int> Q;
};

class Stack_Queue  //利用栈来实现队列
{
public:
    void push(int x);
    int pop();
    int peek();
    bool empty();

private:
    stack<int> S;
};

class PrintMatrix  //转圈打印矩阵 5
{
public:
    vector<int> Matrix_print(vector<vector<int> > Matrix);
private:
    void Matrix_print(vector<int>& result,vector<vector<int> >  Matrix,int tR,int tC,int bR,int bC);
};

class RotateMatrix  //就地顺时针旋转矩阵 6
{
public:
    void RotateMatrixs(vector<vector<int> >& Matrix);
private:
    void RotateMatrixs(vector<vector<int> >& Matrix,int tR,int tC,int bR,int bC);
};

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){}
};
class ReverseList  // 单链表反转 7
{
public:
    ListNode* ReverseListNode(ListNode* head);
};
struct DListNode
{
    int val;
    DListNode *next,*last;
    DListNode(int x):val(x),next(NULL),last(NULL){}
};
class ReverseDList  //双链表反转 7
{
public:
    DListNode* ReverseDListNode(DListNode* head);
};

class ZigZagPrintMatrix  // “之”字形打印矩阵 8
{
public:
    vector<int> PrintMatrix(vector<vector<int> > Matrix);
private:
    void PrintMatrix(vector<vector<int> > Matrix,vector<int>& result,bool& flag,int tR,int tC,int bR,int bC);
;
};

class FindNumInSortedMatrix  // 在行列都排好序的矩阵中找数 9
{
public:
    bool FindNum_Target(vector<vector<int> > Matrix,int target);

};

class PrintCommonPart    // 打印两个有序链表的公共部分 10
{
public:
    void PrintCommon(ListNode* head1,ListNode* head2);

};

class iSHuiWenList  // 判断一个链表是否为回文结构 11
{
public:
    bool isHuiwenListStruc(ListNode* head);
};

class SmallEqualBigger  // 将单向链表 按某值划分为左边小，中间相等，右边大的形式 //12
{
public:
    ListNode* SmallEqualBiggerPartition(ListNode* head,int target);
};

struct RandomList
{
    int val;
    RandomList *next,*random;
    RandomList(int x):val(x),next(NULL),random(NULL){}
};
class CopyListWithRandom   // 复杂含有随机指针结点的链表  //13
{
public:
    RandomList* COPYList(RandomList* head);
};

class FindFirstInterSectNode   // 求两个链表的交点  // 14
{
public:
    ListNode* getIntersectNode(ListNode* headA,ListNode* headB);

private:
    ListNode* getIntersectNode(ListNode* root);
    ListNode* getLoopIntersectNode(ListNode* headA,ListNode* rootA,ListNode* headB,ListNode* rootB);
    ListNode* getNoLoopIntersectNode(ListNode* rootA,ListNode* rootB);

};

#endif // CLASS3_H_INCLUDED
