#include "Class4.h"


/***************************************************
*  函数功能：二叉树的前序 ，中序，后序的递归实现
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O(N)，空间复杂度：O(1)
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-12-17.38
***************************************************/
vector<int> PreInPosTraversal::qianxu_Tree_DG(TreeNode* root)
{
    vector<int> result;
    if(root==NULL) return result;
    qianxu_Tree_DG(root,result);
    return result;
}

vector<int> PreInPosTraversal::zhongxu_Tree_DG(TreeNode* root)
{
    vector<int> result;
    if(root==NULL) return result;
    zhongxu_Tree_DG(root,result);
    return result;
}
vector<int> PreInPosTraversal::houxu_Tree_DG(TreeNode* root)
{
    vector<int> result;
    if(root==NULL) return result;
    houxu_Tree_DG(root,result);
    return result;
}


void PreInPosTraversal::qianxu_Tree_DG(TreeNode* root,vector<int>& result)
{
    if(root==NULL) return ;
    result.push_back(root->val);
    qianxu_Tree_DG(root->left,result);
    qianxu_Tree_DG(root->right,result);
}
void PreInPosTraversal::zhongxu_Tree_DG(TreeNode* root,vector<int>& result)
{
    if(root==NULL) return ;
    zhongxu_Tree_DG(root->left,result);
    result.push_back(root->val);
    zhongxu_Tree_DG(root->right,result);
}
void PreInPosTraversal::houxu_Tree_DG(TreeNode* root,vector<int>& result)
{
    if(root==NULL) return ;
    houxu_Tree_DG(root->left,result);
    houxu_Tree_DG(root->right,result);
    result.push_back(root->val);
}
/***************************************************
*  函数功能：二叉树的 前序，中序，后序的非递归实现
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O(N)，空间复杂度：O(N)
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-12-17.38
***************************************************/
vector<int> PreInPosTraversal::qianxu_Tree_NoDG(TreeNode* root)
{
    vector<int> result;
    if(root==NULL) return result;
    stack<TreeNode*> S;
    S.push(root);
    while(!S.empty())
    {
        TreeNode* node=S.top();
        S.pop();
        result.push_back(node->val);
        if(node->right)
        {
            S.push(node->right);
        }
        if(node->left)
        {
            S.push(node->left);
        }
    }
    return result;
}
vector<int> PreInPosTraversal::zhongxu_Tree_NoDG(TreeNode* root)
{
    vector<int> result;
    if(root==NULL) return result;
    stack<TreeNode*> S;
    while(!S.empty() || root!=NULL)
    {
        if(root)
        {
            S.push(root);
            root=root->left;
        }else
        {
            TreeNode* node=S.top();
            S.pop();
            result.push_back(node->val);
            root=node->right;
        }
    }
    return result;
}
vector<int> PreInPosTraversal::houxu_Tree_NoDG(TreeNode* root)
{
    vector<int> result;
    if(root==NULL) return result;
    stack<TreeNode*> S1;
    stack<TreeNode*> S2;
    S1.push(root);
    while(!S1.empty())
    {
        TreeNode* node=S1.top();
        S1.pop();
        S2.push(node);
        if(node->left)
        {
            S1.push(node->left);
        }
        if(node->right)
        {
            S1.push(node->right);
        }
    }
    while(!S2.empty())
    {
        TreeNode* node=S2.top();
        S2.pop();
        result.push_back(node->val);
    }
    return result;
}


/***************************************************
*  函数功能： 在二叉树中找到一个节点的后继，前驱节点；
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O(longN)，空间复杂度：O(1)
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-12-19.43
***************************************************/
NEW_TreeNode* SuccessorNode::houji_node(NEW_TreeNode* head)
{
     if(head==NULL) return NULL;
     if(head->right)
     {
         head=head->right;
         while(head->left)
         {
             head=head->left;
         }
         return head;
     }else
     {
         NEW_TreeNode* node=head->parent;
         while(node!=NULL && node->left!=head)
         {
             head=node;
             node=node->parent;
         }
         return node;
     }
}
NEW_TreeNode* SuccessorNode::qianqu_node(NEW_TreeNode* head)
{
     if(head==NULL) return NULL;
     if(head->left)
     {
         head=head->left;
         while(head->right)
         {
             head=head->right;
         }
         return head;
     }else
     {
         NEW_TreeNode* node=head->parent;
         while(node!=NULL && node->right!=head)
         {
             head=node;
             node=node->parent;
         }
         return node;
     }
}


/***************************************************
*  函数功能：二叉树的序列化 与 反序列化
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O(N)，空间复杂度：O(N)
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-12-20.14
***************************************************/
string SerializeAndReconstrucTree::SerializeTree(TreeNode* head)
{
    string result="";
    SerializeTree(head,result);
    return result;
}
TreeNode* SerializeAndReconstrucTree::ReconstructTree(string str)
{
    queue<string> Q;
    string word="";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='!')
        {
            Q.push(word);
            word="";
        }else
        {
            word+=str[i];
        }
    }
    return ReconstructTree(Q);
}

void SerializeAndReconstrucTree::SerializeTree(TreeNode* head,string& result)
{
    if(head==NULL)
    {
        result+="#!";
        return ;
    }
    result+=to_string(head->val)+'!';
    SerializeTree(head->left,result);
    SerializeTree(head->right,result);
}

TreeNode* SerializeAndReconstrucTree::ReconstructTree(queue<string>& Q)
{
    string temp=Q.front();
    Q.pop();
    while(temp=="#")
    {
        return NULL;
    }
    TreeNode* root=new TreeNode(string_to_int(temp));
    root->left=ReconstructTree(Q);
    root->right=ReconstructTree(Q);
    return root;
}

int SerializeAndReconstrucTree::string_to_int(string word)
{
    int number=0;
    for(int i=0;i<word.size();i++)
    {
        number=number*10+word[i]-'0';
    }
    return number;
}


/***************************************************
*  函数功能：折纸问题， 利用二叉树中序遍历
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O(2^N)，空间复杂度：O(1)
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-12-20.23
***************************************************/
void PaperFolding::PaperFold(int n)
{
    if(n<1) return ;
    bool flag=true;
    PaperFold(0,n,flag);
}

void PaperFolding::PaperFold(int i,int n,bool flag)
{
    if(i>=n) return ;
    PaperFold(i+1,n,flag);
    string str=flag?"down":"up";
    flag=!flag;
    cout<<str<<" ";
    PaperFold(i+1,n,flag);
}

/***************************************************
*  函数功能：判断一个二叉树是否为平衡二叉树
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O(2^n)，空间复杂度：O(1)
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-12-20.34
***************************************************/
bool IsBalancedTree::BalanceTree(TreeNode* head)
{
    if(head==NULL) return true;
    bool flag=true;
    BalanceTree(head,flag);
    return flag;
}

int IsBalancedTree::BalanceTree(TreeNode* head,bool& flag)
{
    if(head==NULL)
    {
        return 0;
    }
    int leftHight=BalanceTree(head->left,flag);
    if(!flag)
    {
        return leftHight;
    }
    int rightHight=BalanceTree(head->right,flag);
    if(!flag)
    {
        return rightHight;
    }
    if(abs(leftHight-rightHight)>1)
    {
        flag=false;
    }
    return max(leftHight+1,rightHight+1);
}



/***************************************************
*  函数功能：判断一棵树是否为搜索二叉树
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O(N)，空间复杂度：O(N)
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-12-21.13
***************************************************/
bool IsBST_AND_CBT::isBST(TreeNode* head)     //判断是否为搜索二叉树；
{
    if(head==NULL) return true;
    stack<TreeNode*> S;
    int last=0x80000000;
    while(!S.empty() || head!=NULL)
    {
        if(head)
        {
            S.push(head);
            head=head->left;
        }else
        {
            TreeNode* node=S.top();
            S.pop();
            if(node->val < last)
            {
                return false;
            }
            head=node->right;
            last=node->val;
        }
    }
    return true;
}
/***************************************************
*  函数功能：判断一棵树是否为完全二叉树
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O(N)，空间复杂度：O(N)
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-12-21.13
***************************************************/
bool IsBST_AND_CBT::isCBT(TreeNode* head)    //判断是否为完全二叉树；
{
    if(head==NULL) return true;
    queue<TreeNode*> Q;
    Q.push(head);
    bool flag=false;
    while(!Q.empty())
    {
        TreeNode* node=Q.front();
        Q.pop();
        if(node->right!=NULL && node->left==NULL) return false;
        if(flag && (node->right!=NULL || node->left!=NULL))
        {
            return false;
        }
        if((node->left==NULL ||node->left!=NULL)&&node->right==NULL)
        {
            flag=true;
        }
        if(node->left)
        {
            Q.push(node->left);
        }
        if(node->right)
        {
            Q.push(node->right);
        }
    }
    return true;

}


/***************************************************
*  函数功能：一颗完全二叉树，求其节点的个数
*  参数说明
*       输入参数：
*       输出参数：
*  复杂性分析：时间复杂度：O((logN)^2)，空间复杂度：O(1)
*  题目来源  ：
*  作者：guoliang zheng
*  日期：2018-08-12-21.37
***************************************************/
int CompleteTreeNodeNumber::TreeNodeNumber(TreeNode* head)
{
    if(head==NULL) return 0;
    return TreeNodeNumber(head,TreeHigh(head),1);
}

int CompleteTreeNodeNumber::TreeHigh(TreeNode* head)
{
    if(head==NULL)
    {
        return 0;
    }
    int number=0;
    while(head!=NULL)
    {
        head=head->left;
        number++;
    }
    return number;
}


int CompleteTreeNodeNumber::TreeNodeNumber(TreeNode* head,int high,int layer)
{
    if(high==layer)
    {
        return 1;
    }
    if(TreeHigh(head->right)+layer == high)
    {
        return (1<<(high-layer))+TreeNodeNumber(head->right,high,layer+1);
    }else
    {
        return (1<<(high-layer-1))+TreeNodeNumber(head->left,high,layer+1);
    }
}



