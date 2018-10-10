#ifndef CLASS4_H_INCLUDED
#define CLASS4_H_INCLUDED

#include <vector>
#include <stack>
#include <queue>
#include <iostream>
#include <map>
#include <cmath>
#include <string>


using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left,*right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

//1
class PreInPosTraversal  // 二叉树的前序，中序，后序 分别实现 递归 ，非递归版本 // 1
{
public:
    vector<int> qianxu_Tree_DG(TreeNode* root);
    vector<int> zhongxu_Tree_DG(TreeNode* root);
    vector<int> houxu_Tree_DG(TreeNode* root);

    vector<int> qianxu_Tree_NoDG(TreeNode* root);
    vector<int> zhongxu_Tree_NoDG(TreeNode* root);
    vector<int> houxu_Tree_NoDG(TreeNode* root);

private:
    void qianxu_Tree_DG(TreeNode* root,vector<int>& result);
    void zhongxu_Tree_DG(TreeNode* root,vector<int>& result);
    void houxu_Tree_DG(TreeNode* root,vector<int>& result);
};

struct NEW_TreeNode
{
    int val;
    NEW_TreeNode *left,*right,*parent;
    NEW_TreeNode(int x):val(x),left(NULL),right(NULL),parent(NULL){}
};

//3
class SuccessorNode   // 二叉树中找到一个节点的后继节点，前驱节点  // 3
{
public:
    NEW_TreeNode* houji_node(NEW_TreeNode* head);
    NEW_TreeNode* qianqu_node(NEW_TreeNode* head);

};

//4
class SerializeAndReconstrucTree  // 二叉树的序列化和反序列化   // 4
{
public:
    string SerializeTree(TreeNode* head);
    TreeNode* ReconstructTree(string str);

private:
    void SerializeTree(TreeNode* head,string& result);
    TreeNode* ReconstructTree(queue<string>& Q);
    int string_to_int(string word);
};

//5
class PaperFolding   // 折纸问题  // 5
{
public:
    void PaperFold(int n);
private:
    void PaperFold(int i,int n,bool flag);
};

//6
class IsBalancedTree  // 判断一棵树是否为平衡二叉树  //6
{
public:
    bool BalanceTree(TreeNode* head);
private:
    int BalanceTree(TreeNode* head,bool& flag);
};

// 7
class IsBST_AND_CBT  // 判断一棵树是否为搜索二叉树，完全二叉树  // 7
{
public:
    bool isBST(TreeNode* head);    //判断是否为搜索二叉树；
    bool isCBT(TreeNode* head);   //判断是否为完全二叉树；
};

// 8
class CompleteTreeNodeNumber  // 已知一颗完全二叉树，求其节点的个数 // 8
{
public:
    int TreeNodeNumber(TreeNode* head);

private:
    int TreeHigh(TreeNode* head);
    int TreeNodeNumber(TreeNode* head,int high,int layer);

};




















#endif // CLASS4_H_INCLUDED
