#include <iostream>
#include <vector>
#include <cmath>
#include "My_Sort.h"
#include "My_Solution_Qustion.h"
#include "Class3.h"
#include "Class4.h"
#include "Class5.h"
#include "Class7.h"
#include "Class8.h"
#include <stdexcept>
#include "For_Test.h"

#include <algorithm>

using namespace std;



int main()
{
    Class5_N6 zgl(8);
    zgl.print_set();
    zgl.union_(0,5);
    zgl.union_(2,7);
    zgl.print_set();

    return 0;
}


//int main()
//{
////    ReverseStack ss;
////    stack<int> S;
////    for(int i=0;i<10;i+=2)
////    {
////        S.push(i);
////    }
////    ss.ReverseStacks(S);
////    while(!S.empty())
////    {
////        cout<<S.top()<<"  ";
////        S.pop();
////    }
////    cout<<endl;
////
//////    int m=4;
//////    int n=5;
//////    vector<vector<int> > dp(m,vector<int>(n,0));
//////    for(int i=0;i<dp.size();i++)
//////    {
//////        for(int j=0;j<dp[0].size();j++)
//////        {
//////            cout<<dp[i][j]<<" ";
//////        }
//////        cout<<endl;
//////    }
////
////    MinPath mm;
////
////    vector<vector<int> > path;
////    int A[][4]={ { 1, 3, 5, 9 }, { 8, 1, 3, 4 }, { 5, 0, 6, 1 }, { 8, 8, 4, 0 } };
////
////    int len=sizeof(A)/sizeof(*A);
////    for(int i=0;i<len;i++)
////    {
////        path.push_back(vector<int>());
////        for(int j=0;j<4;j++)
////        {
////            path[i].push_back(A[i][j]);
////        }
////    }
////
////    cout<<mm.get_MinPath(path)<<endl;
////    cout<<mm.get_DGMinPath(path)<<endl;;
////    RandomMatrix rr;
////    vector<int> arrs;
////    arrs=rr.generateRandomArray(8);
////
////    Arr_Aim aa;
////
////    cout<<aa.is_Sum_Aim(arrs,arrs[3]+arrs[6])<<endl;;
////    cout<<aa.is_Sum_Aim_DG(arrs,arrs[3]+arrs[6])<<endl;;
//
////    Bag_Quistion bb;
////    vector<int> weight;
////    vector<int> costs;
////    int max_bag=19;
////    int c[] = {2,3,4,7};  // weight
////    int lenc=sizeof(c)/sizeof(*c);
////	int p[] = {1,3,5,9}; // costs
////	int lenp=sizeof(p)/sizeof(*p);
////    weight=rr.arr_to_vec(c,lenc);
////    costs=rr.arr_to_vec(p,lenp);
////
////    cout<<"max cost "<<bb.get_MAX_value_Complete(weight,costs,max_bag)<<endl;;
////    cout<<"-----------------------------------------------"<<endl;
////    cout<<"max cost "<<bb.get_MAX_value(weight,costs,max_bag)<<endl;;
//    RandomMatrix rr;
//    Bag_Quistion bb;
//    vector<int> weight;
//    vector<int> costs;
//    vector<int> number;
//    int max_bag=8;
//   int c[] = {1,2,2};  // weight
//    int lenc=sizeof(c)/sizeof(*c);
//	int p[] = {6,10,20}; // costs
//	int lenp=sizeof(p)/sizeof(*p);
//	int q[]={10,5,2};
//	int lenq=sizeof(q)/sizeof(*q);
//    weight=rr.arr_to_vec(c,lenc);
//    costs=rr.arr_to_vec(p,lenp);
//    number=rr.arr_to_vec(q,lenq);
//    cout<<bb.get_MAX_value_Limitnum(weight,costs,number,max_bag)<<endl;
//
//    double aaaa=3.4323;
//    printf("%.2f",aaaa);
//
//    return 0;
//}


//int main()
//{
//    Cow_NUMBER s;
//
//    cout<<s.Get_Cow_Number(11)<<endl;;
//    cout<<s.Get_Cow_Number_Advance(11)<<endl;;
//
//    return 0;
//}

/***************************************************
*  函数功能：测试一个字符串的全排列
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-14-20.38
***************************************************/
//int main()
//{
//    Print_ALL_Permutation s;
//    string s1="acc";
//    vector<string> v1;
//    vector<string> v2;
//    v1=s.Get_ALL_Permutation(s1);
//    v2=s.Get_ALL_NoPermutation(s1);
//    for(int i=0;i<v1.size();i++)
//    {
//        cout<<v1[i]<<endl;
//    }
//    cout<<"------------------------"<<endl;
//    for(int i=0;i<v2.size();i++)
//    {
//        cout<<v2[i]<<endl;
//    }
//    cout<<"------------------------"<<endl;
//
//    return 0;
//}

/***************************************************
*  函数功能：测试一个字符串的全部子序列
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-14-20.35
***************************************************/
//int main()
//{
//    Print_All_Subsquences ss;
//    vector<string> result;
//    string str="abc";
//    result=ss.Get_All_Subsquence(str);
//    cout<<"size :"<<result.size()<<endl;
//    for(int i=0;i<result.size();i++)
//    {
//        cout<<result[i]<<endl;
//    }
//
//    return 0;
//}


//int main()
//{
//    Factorial s;
//
//    Hanoi ss;
//
//   ss.Hanois(3);
//
//    cout<<s.jiecheng(6)<<endl;;
//    cout<<s.jiecheng_DG(6)<<endl;;
//    return 0;
//}


/***************************************************
*  函数功能：测试 给定字符串中 最低字典序
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-14-17.45
***************************************************/
//int main()
//{
//    LowestLexigrahy ss;
//    string result="";
//    string strs1[] = { "ba", "b" };
//    //{ "jibw", "ji", "jp", "bw", "jibw" };
//    int len=sizeof(strs1)/sizeof(*strs1);
//    vector<string> str;
//    for(int i=0;i<len;i++)
//    {
//        str.push_back(strs1[i]);
//    }
//    result=ss.LowestString(str);
//    cout<<result<<endl;
//    return 0;
//}

//int main()
//{
//    vector<int> nums;
//    for(int i=0;i<5;i++)
//    {
//        int t=rand()%10;
//        nums.push_back(t);
//        cout<<t<<"  ";
//    }
//    cout<<endl;
//    MadianQuick s;
//    for(int i=0;i<nums.size();i++)
//    {
//        s.Insert(nums[i]);
//        cout<<s.get_Media()<<"  ";
//    }
//    cout<<endl;
//
//
//    return 0;
//}

/***************************************************
*  函数功能：测试获利最大
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-14-16.44
***************************************************/
//int main()
//{
//    int A[]={6, 7, 8, 9};
//    int len=sizeof(A)/sizeof(*A);
//    vector<int> nums;
//    for(int i=0;i<len;i++)
//    {
//        nums.push_back(A[i]);
//    }
//    int cost[]={100,120,200,250,500};
//    int profit[]={10,23,43,25,60};
//    int m=120;
//    int k=3;
//    vector<int> costs;
//    vector<int> profits;
//    for(int i=0;i<5;i++)
//    {
//        costs.push_back(cost[i]);
//        profits.push_back(profit[i]);
//    }
//    Cost_Profit ss;
//    cout<<ss.get_Most_Money(costs,profits,k,m)<<endl;;
//
//    Less_Money s;
//    cout<<s.get_Less_Money(nums)<<endl;
//
//    return 0;
//}



/***************************************************
*  函数功能：前缀树测试
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-14-15.52
***************************************************/
//int main()
//{
//    TrieTree s;
//    string A[]={"zgl","csu","csu","csu","laowang","xiaoming","heihei","zgl"};
//    int len=sizeof(A)/sizeof(*A);
//
//    for(int i=0;i<len;i++)
//    {
//        s.Insert(A[i]);
//    }
//    vector<string> result;
//    result=s.get_ALL_word();
//    for(int i=0;i<result.size();i++)
//    {
//        cout<<result[i]<<endl;
//    }
//    cout<<"---------------------"<<endl;
//    cout<<A[1]<<"  "<<s.Search(A[1])<<endl;
//    cout<<"cs"<<"  "<<s.preFixNumber("cs")<<endl;
//    s.Delete("csu");
//    cout<<"---------------------------------"<<endl;
//    cout<<A[1]<<"  "<<s.Search(A[1])<<endl;
//    cout<<"cs"<<"  "<<s.preFixNumber("cs")<<endl;
//    cout<<" over "<<endl;
//    return 0;
//}

/***************************************************
*  函数功能：RandomPool 结构测试
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-14-09.51
***************************************************/
//int main()
//{
//    string A[]={"zgl","csu","laowang","xiaoming","515","100"};
//    int len=sizeof(A)/sizeof(*A);
//
//    RandomPool s;
//    for(int i=0;i<len;i++)
//    {
//        s.Insert(A[i]);
//    }
//    s.Print_Random();
//    s.Delete("laowang");
//    cout<<"----------------------"<<endl;
//    s.Print_Random();
//    cout<<"------------------------"<<endl;
//    for(int i=0;i<10;i++)
//      cout<<s.GetRandom()<<"  ";
//
//    return 0;
//}



//int main()
//{
////     TreeNode a(1);
////    TreeNode b1(2);
////    TreeNode b2(4);
////    TreeNode c1(6);
////    TreeNode c2(7);
////    TreeNode c3(8);
////    TreeNode c4(10);
////    TreeNode d1(11);
////    TreeNode d2(12);
////    a.left=&b1;
////    a.right=&b2;
////    b1.left=&c1;
////    b1.right=&c2;
////    b2.left=&c3;
////    b2.right=&c4;
////    c2.left=&d1;
////    d1.right=&d2;
////
////    IsBalancedTree s;
////    cout<<s.BalanceTree(&a);
//    long  n=10000000000;
//    double p=0.0001;
//    double M=(-1*n*log(p))/(log(2)*log(2));
//    cout<<"M "<<M<<endl;
//    cout<<(-1*n*log(p))<<"  "<<(log(2)*log(2))<<endl;
//    double l1=-1*n*log(p);
//    double l2=log(2)*log(2);
//    double l3=1024*1024*1024;
//    double tt=l1/(l2*l3);
//    cout<<"tt "<<tt<<endl;
//    cout<<1e9/l3<<endl;
//     TreeNode a(4);
//    TreeNode b1(2);
//    TreeNode b2(7);
//    TreeNode c1(1);
//    TreeNode c2(3);
//    TreeNode c3(6);
//    TreeNode c4(8);
//
//    a.left=&b1;
//    a.right=&b2;
//    b1.left=&c1;
//    b1.right=&c2;
//    b2.left=&c3;
//    b2.right=&c4;
//    //c2.left=&d1;
//    //d1.right=&d2;
//    CompleteTreeNodeNumber s;
//    cout<<s.TreeNodeNumber(&a);
////    cout<<s.isBST(&a)<<endl;    //判断是否为搜索二叉树；
////    cout<<s.isCBT(&a)<<endl;   //判断是否为完全二叉树；
//    return 0;
//}

//int main()
//{
//
//    PaperFolding s;
//    s.PaperFold(3);
//
//    return 0;
//}

/***************************************************
*  函数功能：二叉树的序列化和反序列化 测试
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-12-20.22
***************************************************/
//void Print_Tree(TreeNode* head,int layer)
//{
//    if(head==NULL) return ;
//    for(int i=0;i<layer;i++)
//    {
//        cout<<"--";
//    }
//    cout<<head->val<<endl;
//
//    Print_Tree(head->left,layer+1);
//    Print_Tree(head->right,layer+1);
//}
//
//int main()
//{
//    TreeNode a(1);
//    TreeNode b1(2);
//    TreeNode b2(4);
//    TreeNode c1(6);
//    TreeNode c2(7);
//    TreeNode c3(8);
//    TreeNode c4(10);
//    a.left=&b1;
//    a.right=&b2;
//    b1.left=&c1;
//    b1.right=&c2;
//    b2.left=&c3;
//    b2.right=&c4;
//
//
//    Print_Tree(&a,0);
//    cout<<endl<<"----------------------------------------"<<endl;
//    SerializeAndReconstrucTree s;
//    string str="";
//    str=s.SerializeTree(&a);
//    cout<<str<<endl;
//    TreeNode* head=s.ReconstructTree(str);
//    Print_Tree(head,0);
//    cout<<endl<<"----------------------------------------"<<endl;
//
//    return 0;
//}



/***************************************************
*  函数功能：测试二叉树的前驱 ，后继节点
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O(logN)，空间复杂度：O(1)
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-12-20.10
***************************************************/
//void Print_Tree(NEW_TreeNode* head,int layer)
//{
//    if(head==NULL) return ;
//    for(int i=0;i<layer;i++)
//    {
//        cout<<"--";
//    }
//    cout<<head->val;
//    if(head->parent)
//    {
//        cout<<"!!! parent :"<<head->parent->val<<endl;
//    }else
//    {
//        cout<<endl;
//    }
//    Print_Tree(head->left,layer+1);
//    Print_Tree(head->right,layer+1);
//}
//
//int main()
//{
//    NEW_TreeNode a(1);
//    NEW_TreeNode b1(2);
//    NEW_TreeNode b2(3);
//    NEW_TreeNode c1(4);
//    NEW_TreeNode c2(5);
//    NEW_TreeNode c3(6);
//    NEW_TreeNode c4(7);
//    NEW_TreeNode d1(8);
//    NEW_TreeNode d2(9);
//    NEW_TreeNode d3(10);
//
//
//    a.left=&b1;
//    a.right=&b2;
//    b1.parent=&a;
//    b2.parent=&a;
//
//    b1.left=&c1;
//    b1.right=&c2;
//    c1.parent=&b1;
//    c2.parent=&b1;
//
//    b2.left=&c3;
//    b2.right=&c4;
//    c3.parent=&b2;
//    c4.parent=&b2;
//
//    c2.left=&d1;
//    c2.right=&d2;
//    d1.parent=&c2;
//    d2.parent=&c2;
//
//    c4.left=&d3;
//    d3.parent=&c4;
//
////    SuccessorNode s;
////    NEW_TreeNode* headA;
////    NEW_TreeNode* headB;
////    headA=s.houji_node(&d2);
////    headB=s.qianqu_node(&d2);
////    if(headA!=NULL)
////    {
////        cout<<headA->val<<endl;
////    }else
////    {
////        cout<<"后继 为空 "<<endl;
////    }
////    if(headB!=NULL)
////    {
////        cout<<headB->val<<endl;
////    }else
////    {
////        cout<<"前驱 为空"<<endl;
////    }
//
//    return 0;
//}

/***************************************************
*  函数功能：测试二叉树的前序，中序，后序遍历
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-12-19.07
***************************************************/
//int main()
//{
//    TreeNode a(1);
//    TreeNode b1(2);
//    TreeNode b2(4);
//    TreeNode c1(6);
//    TreeNode c2(7);
//    TreeNode c3(8);
//    TreeNode c4(10);
//    a.left=&b1;
//    a.right=&b2;
//    b1.left=&c1;
//    b1.right=&c2;
//    b2.left=&c3;
//    b2.right=&c4;
//
//    vector<int> resultA;
//    vector<int> resultB;
//    PreInPosTraversal s;
//    resultA=s.houxu_Tree_DG(&a);
//    resultB=s.houxu_Tree_NoDG(&a);
//    for(int i=0;i<resultA.size();i++)
//    {
//        if(resultA[i]!=resultB[i])
//        {
//            cout<<endl<<"Fuck error !"<<endl;
//            break;
//        }
//        cout<<resultA[i]<<"  ";
//    }
//    cout<<endl;
//    cout<<" Nice! "<<endl;
//
//
//    return 0;
//}


/***************************************************
*  函数功能：两个单链表相交的一系列问题
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  日期：2018-08-12-16.59
***************************************************/
//int main()
//{
//    ListNode a(1);
//    ListNode b(2);
//    ListNode c(3);
//    ListNode d(4);
//    ListNode e(5);
//    ListNode e1(6);
//    ListNode e2(7);
//    a.next=&b;
//    b.next=&c;
//    c.next=&d;
//    d.next=&e;
//    e.next=&e1;
//    e1.next=&e2;
//    e2.next=&d;
//
//    ListNode a1(0);
//    ListNode b1(9);
//    ListNode c1(8);
//    ListNode d1(6);
//
//    a1.next=&b1;
//    b1.next=&c1;
//    c1.next=&b;
//    //d1.next=&e2;
//    //e2.next=&d;
//
//
//    FindFirstInterSectNode s;
//
//    ListNode* head;
//     head=s.getIntersectNode(&a,&a1);
//     if(head)
//     {
//         cout<<head->val<<endl;
//     }else
//     {
//         cout<<"NULL"<<endl;
//     }
//
//    return 0;
//}
//


/***************************************************
*  函数功能： 将链表按照某值 划分为 小 ，相等 ， 大 测试案例
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  日期：2018-08-12-16.43
***************************************************/
//int main()
//{
//    ListNode a(1);
//    ListNode b(5);
//    ListNode c(8);
//    //ListNode c1(8);
//    ListNode d(5);
//    ListNode e(1);
//    ListNode e1(13);
//    ListNode e2(8);
//    a.next=&b;
//    b.next=&c;
//    //c.next=&c1;
//    c.next=&d;
//    d.next=&e;
//    e.next=&e1;
//    e1.next=&e2;
//    SmallEqualBigger s;
//
//    ListNode* head;
//    head=s.SmallEqualBiggerPartition(&a,9);
//    while(head)
//    {
//        cout<<head->val<<" ";
//        head=head->next;
//    }
//    cout<<endl;
////    iSHuiWenList S;
////    cout<<S.isHuiwenListStruc(&a);
//
////    PrintCommonPart s;
////    s.PrintCommon(&a,&a1);
//
//    return 0;
//}



/***************************************************
*  函数功能："之“字形打印矩阵 ，行列排好序的矩阵中找数 测试案例
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-11-21.05
***************************************************/
//int main()
//{
//    int A[][4]={ { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
//    int len=sizeof(A)/sizeof(*A);
//    vector<vector<int> > nums;
//    for(int i=0;i<len;i++)
//    {
//        nums.push_back(vector<int>());
//        for(int j=0;j<4;j++)
//        {
//            nums[i].push_back(A[i][j]);
//            cout<<A[i][j]<<"   ";
//        }
//        cout<<endl;
//    }
//    cout<<"---------------------"<<endl;
//
//    FindNumInSortedMatrix s;
//
//    cout<<s.FindNum_Target(nums,10);
//
//    cout<<endl;
//    return 0;
//}

/***************************************************
*  函数功能： 链表的反转
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-11-11.12
***************************************************/
//int main()
//{
//    DListNode a(1);
//    DListNode b(2);
//    DListNode c(3);
//    DListNode d(4);
//    DListNode e(5);
//    a.next=&b;
//    b.next=&c;
//    c.next=&d;
//    d.next=&e;
//    b.last=&a;
//    c.last=&b;
//    d.last=&c;
//    ReverseDList s;
//    DListNode* head=s.ReverseDListNode(&a);
//    DListNode* ends=NULL;
//    while(head)
//    {
//        cout<<head->val<<" ";
//        ends=head;
//        head=head->next;
//
//    }
//    cout<<endl<<"------------"<<endl;
//    while(ends)
//    {
//        cout<<ends->val<<" ";
//        ends=ends->last;
//    }
//    return 0;
//}


/***************************************************
*  函数功能：旋转数组 测试
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-11-10.48
***************************************************/
//int main()
//{
//    int A[][4]={ { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 },
//				{ 13, 14, 15, 16 } };
//    int len=sizeof(A)/sizeof(*A);
//    vector<vector<int> > nums;
//    for(int i=0;i<len;i++)
//    {
//        nums.push_back(vector<int>());
//        for(int j=0;j<4;j++)
//        {
//            nums[i].push_back(A[i][j]);
//            cout<<A[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    cout<<"---------------------"<<endl;
//    RotateMatrix s;
//    vector<int> result;
//    s.RotateMatrixs(nums);
//    for(int i=0;i<nums.size();i++)
//    {
//        for(int j=0;j<nums[0].size();j++)
//        {
//            cout<<nums[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//
//    return 0;
//}

/***************************************************
*  函数功能：测试栈和队列
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-11-09.46
***************************************************/
//int main()
//{
//    int arra[]={3,5,1,3,0,2,7,5};
//    Stack_Queue s;
//    int len=sizeof(arra)/sizeof(*arra);
//    for(int i=0;i<len;i++)
//    {
//        s.push(arra[i]);
//    }
//
//     while(!s.empty())
//     {
//         cout<<"pop "<<s.pop()<<endl;
//     }
//
//
//
////    ARRAY_QUEUE s(5);
////    s.push(4);
////    s.push(6);
////    cout<<s.peek()<<endl;;
////    s.push(8);
////    cout<<s.pop()<<endl;
////    s.push(9);
////    cout<<s.peek()<<endl;
////    cout<<s.pop()<<endl;
////    cout<<s.peek()<<endl;
////    cout<<s.pop()<<endl;
//
//    return 0;
//}


/***************************************************
*  函数功能：测试My_Solution_Qustion 程序正确性
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  日期：2018-08-10-15.45
***************************************************/
//int main()
//{
//    try
//    {
//          int A[]={-24, -43, -8, -12, 34, -24, -52, 9, -7, -72, 12, 17, -42, 14};
//            vector<int> nums;
//
//            int len=sizeof(A)/sizeof(*A);
//            for(int i=0;i<5;i++)
//            {
//
//                nums.push_back(A[i]);
//
//            }
//            cout<<endl;
//            MY_Solution s;
//
//            cout<<s.NIXU_dui(nums)<<endl;
//            cout<<endl;
//    }catch(exception& e)
//    {
//        cout<<"error "<<e.what()<<endl;
//    }
//
//
//
//    return 0;
//
//}


/***************************************************
*  函数功能：测试排序算法的主程序
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O()，空间复杂度：O()
*  题目来源  ：
*  author: Guoliang Zheng
*  date  ：2018-08-10-09.36
***************************************************/
//int main()
//{
//    vector<int> nums;
//    vector<int> arra;
//    int len=25;
//    for(int i=0;i<len;i++)
//    {
//        int t=(rand()%100)+1;
//        nums.push_back(t);
//        arra.push_back(t);
//        cout<<t<<" ";
//    }
//    cout<<endl;
//    MY_SORT s;
//    s.Heap_sort(nums);
//    sort(arra.begin(),arra.end());
//    int flag=0;
//    for(int i=0;i<len;i++)
//    {
//        if(arra[i]!=nums[i])
//        {
//            flag=1;
//            break;
//        }
//        cout<<nums[i]<<" ";
//    }
//    cout<<endl;
//    if(flag)
//    {
//        cout<<"fuck ! error "<<endl;
//    }else
//    {
//        cout << "Hello world!" << endl;
//    }
//
//    return 0;
//}
