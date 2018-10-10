#ifndef CLASS3_H_INCLUDED
#define CLASS3_H_INCLUDED

#include <vector>
#include <string>
#include <stdio.h>
#include <iostream>
#include <deque>
#include <stack>


using namespace std;


struct TreeNode
{
    int val;
    TreeNode *left,*right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};
class Morris
{
public:
    vector<int> MorrisPre(TreeNode *root); // �������������
    vector<int> MorrisIn(TreeNode *root);  // �������������
};



#endif // CLASS3_H_INCLUDED
