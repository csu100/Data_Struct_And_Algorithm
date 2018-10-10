#include "Class3.h"

/***************************************************
*  �������ܣ��������������
*  ����˵��
*       ���������
*       ���������
*  �����Է�����ʱ�临�Ӷȣ�O(N)���ռ临�Ӷȣ�O(1)
*  ��Ŀ��Դ  ��
*  ���ߣ�guoliang zheng
*  ���ڣ�2018-08-17-22.13
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
*  �������ܣ��������������
*  ����˵��
*       ���������
*       ���������
*  �����Է�����ʱ�临�Ӷȣ�O(N)���ռ临�Ӷȣ�O(1)
*  ��Ŀ��Դ  ��
*  ���ߣ�guoliang zheng
*  ���ڣ�2018-08-17-22.13
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


