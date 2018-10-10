#include "Class3.h"

/***************************************************
*  函数功能：二叉树先序遍历
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O(N)，空间复杂度：O(1)
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-17-22.13
***************************************************/
vector<int> Morris::MorrisPre(TreeNode *root)
{
    vector<int> res;
    if(root==NULL) return res;
    TreeNode *curr=root;
    TreeNode *mostRight=NULL;
    while(curr!=NULL)
    {
        mostRight=curr->left;
        if(mostRight!=NULL)
        {
            while(mostRight->right!=NULL && mostRight->right!=curr)
            {
                mostRight=mostRight->right;
            }
            if(mostRight->right==NULL)
            {
                mostRight->right=curr;
                res.push_back(curr->val);
                curr=curr->left;
                continue;
            }else
            {
                mostRight->right=NULL;
            }
        }else
        {
            res.push_back(curr->val);
        }
        curr=curr->right;
    }
    cout<<"size "<<res.size()<<endl;
    return res;
}
/***************************************************
*  函数功能：二叉树中序遍历
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O(N)，空间复杂度：O(1)
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-17-22.13
***************************************************/
vector<int> Morris::MorrisIn(TreeNode *root)
{
    vector<int> res;
    if(root==NULL) return res;
    TreeNode *curr=root;
    TreeNode *mostRight=NULL;
    while(curr!=NULL)
    {
        mostRight=curr->left;
        if(mostRight!=NULL)
        {
            while(mostRight->right!=NULL && mostRight->right!=curr)
            {
                mostRight=mostRight->right;
            }
            if(mostRight->right==NULL)
            {
                mostRight->right=curr;
                curr=curr->left;
                continue;
            }else
            {
                mostRight->right=NULL;
            }
        }
        res.push_back(curr->val);
        curr=curr->right;
    }
     cout<<"size "<<res.size()<<endl;
    return res;
}


